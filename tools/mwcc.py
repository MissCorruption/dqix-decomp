"""Run mwccarm, then empty the inline functions and [base] ctor/dtor copies nothing references, as the
original -dead link did.

Usage: mwcc.py <object> <compiler> [flags...]
"""
import struct
import subprocess
import sys

SHT_SYMTAB = 2
SHT_RELA = 4
SHT_REL = 9
SHF_ALLOC = 0x2
SHDR_FMT = "<IIIIIIIIII"
SYM_FMT = "<IIIBBH"
SYM_SIZE = 16
STT_FUNC = 2
STB_MULTIDEF = 13
SHN_LORESERVE = 0xFF00
STB_GLOBAL = 1


def complete_variant(name):
    if not name.startswith(b"_ZN"):
        return None
    i = 3
    while i < len(name) and name[i:i + 1].isdigit():
        j = i
        while j < len(name) and name[j:j + 1].isdigit():
            j += 1
        i = j + int(name[i:j])
    marker = name[i:i + 3]
    if marker in (b"C2E", b"D2E"):
        return name[:i] + marker[:1] + b"1" + name[i + 2:]
    return None


def strip(path):
    with open(path, "rb") as fh:
        data = bytearray(fh.read())
    if data[:4] != b"\x7fELF" or data[4] != 1 or data[5] != 1:
        return []

    e_shoff, = struct.unpack_from("<I", data, 0x20)
    e_shentsize, e_shnum, e_shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    shdrs = [struct.unpack_from(SHDR_FMT, data, e_shoff + i * e_shentsize) for i in range(e_shnum)]
    symtabs = [i for i, sh in enumerate(shdrs) if sh[1] == SHT_SYMTAB]
    if not symtabs:
        return []
    _, _, _, _, sym_offset, sym_size, str_index, _, _, _ = shdrs[symtabs[0]]
    str_offset = shdrs[str_index][4]
    shstr_offset = shdrs[e_shstrndx][4]

    def cstr(base, offset):
        return bytes(data[base + offset:data.index(b"\0", base + offset)])

    symbols = [struct.unpack_from(SYM_FMT, data, sym_offset + k * SYM_SIZE) for k in range(sym_size // SYM_SIZE)]

    used = set()
    for sh in shdrs:
        if sh[1] not in (SHT_REL, SHT_RELA) or not shdrs[sh[7]][2] & SHF_ALLOC:
            continue
        entry = 12 if sh[1] == SHT_RELA else 8
        for off in range(sh[4], sh[4] + sh[5], entry):
            r_info, = struct.unpack_from("<I", data, off + 4)
            used.add(symbols[r_info >> 8][5])

    defined = {cstr(str_offset, s[0]) for s in symbols if 0 < s[5] < SHN_LORESERVE}
    stripped = []
    for k, (st_name, _, st_size, st_info, _, st_shndx) in enumerate(symbols):
        if st_info & 0xF != STT_FUNC:
            continue
        if st_info >> 4 != STB_MULTIDEF and not (
                st_info >> 4 == STB_GLOBAL and complete_variant(cstr(str_offset, st_name)) in defined):
            continue
        if not 0 < st_shndx < SHN_LORESERVE or st_shndx in used:
            continue
        section = shdrs[st_shndx]
        if cstr(shstr_offset, section[0]) != b".text" or section[5] != st_size:
            continue
        struct.pack_into("<I", data, e_shoff + st_shndx * e_shentsize + 20, 0)
        struct.pack_into("<I", data, sym_offset + k * SYM_SIZE + 8, 0)
        stripped.append(cstr(str_offset, st_name).decode())

    if stripped:
        with open(path, "wb") as fh:
            fh.write(data)
    return stripped


if __name__ == "__main__":
    result = subprocess.run(sys.argv[2:])
    if result.returncode:
        raise SystemExit(result.returncode)
    strip(sys.argv[1])
