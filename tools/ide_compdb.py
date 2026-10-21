"""Clang's project model for navigation; CodeWarrior remains the ROM compiler."""
import json
import os
from pathlib import Path
import shlex
import tempfile


def clang_flags(flags):
    """Translate the parse-relevant subset of the build's CodeWarrior flags.

    Optimisation, register allocation and linking options do not belong in an
    indexing command. Preserve ordering: library and per-file overrides win.
    """
    result = []
    tokens = iter(flags)
    for flag in tokens:
        if flag in ("-char", "-enum", "-Cpp_exceptions", "-RTTI", "-proc", "-lang"):
            value = next(tokens, None)
            choices = {
                "-char": {"signed": "-fsigned-char", "unsigned": "-funsigned-char"},
                "-enum": {"int": "-fno-short-enums", "min": "-fshort-enums"},
                "-Cpp_exceptions": {"on": "-fexceptions", "off": "-fno-exceptions"},
                "-RTTI": {"on": "-frtti", "off": "-fno-rtti"},
                "-proc": {"arm946e": "-mcpu=arm946e-s"},
                "-lang": {"c": "c", "c++": "c++"},
            }
            if value not in choices[flag]:
                raise ValueError(f"unsupported indexing option: {flag} {value}")
            if flag == "-lang":
                result.extend(["-x", choices[flag][value]])
            else:
                result.append(choices[flag][value])
        elif flag.startswith("-lang="):
            result.extend(clang_flags(["-lang", flag.split("=", 1)[1]]))
        elif flag in ("-d", "-D", "-i", "-I", "-include"):
            value = next(tokens, None)
            if value is None:
                raise ValueError(f"missing value after {flag}")
            result.extend([{"-d": "-D", "-i": "-I"}.get(flag, flag), value])
        elif flag.startswith(("-D", "-I")):
            result.append(flag)
    return result


def compile_entry(config, source, compiler, extra_build=None):
    source = Path(source).resolve()
    root = Path.cwd().resolve()
    try:
        relative = source.relative_to(root)
    except ValueError:
        relative = source
    library = (config.LIBRARY_BUILDS.get(extra_build) if extra_build
               else config.library_build(relative))
    flags = shlex.split(config.CC_FLAGS)
    if library:
        flags.extend(library[2])
    flags.extend(config.CC_FLAG_OVERRIDES.get(relative.as_posix(), []))
    language = "c" if source.suffix == ".c" else "c++"
    # Match add_mwcc_builds(): the source extension is the final language override.
    flags.append(f"-lang={language}")
    region = config.args.version
    defines = ["usa", "eur"] if region == "eur" else [region]
    # CW accepts non-trivial union members as an extension to C++03. Clang
    # requires C++11 to retain those declarations and their reference targets.
    arguments = [compiler, "--target=arm-none-eabi", "-fsyntax-only", "-nostdinc",
                 "-ffreestanding", "-std=gnu99" if language == "c" else "-std=gnu++11",
                 "-Wno-unknown-pragmas", "-DDQIX_IDE=1", "-U__MWERKS__",
                 "-include", str(root / "tools" / "ide" / "mwcc_compat.h")]
    for directory in config.includes:
        arguments.extend(["-I", str(Path(directory).resolve())])
    arguments.extend(clang_flags(flags))
    arguments.extend(f"-D{name}" for name in defines)
    arguments.append(str(source))
    return {"directory": str(root), "file": str(source), "arguments": arguments}


def write_database(config, compiler="clang", extra_sources=(), extra_build="game"):
    """Use configure.py's source enumeration, includes and per-library settings.

    Called in the repository root, like the ordinary configure.py invocation.
    No compiler, downloader, Ninja process or ROM extraction is executed.
    """
    if extra_build != "game" and extra_build not in config.LIBRARY_BUILDS:
        raise ValueError(f"unknown build family: {extra_build}")
    if not compiler.strip():
        raise ValueError("the Clang executable must not be empty")
    if os.path.dirname(compiler):
        compiler = str(Path(compiler).expanduser().resolve())
    sources = sorted(config.get_c_cpp_files([config.src_path, config.libs_path]))
    entries = {str(source.resolve()): compile_entry(config, source, compiler)
               for source in sources}
    for source in extra_sources:
        source = Path(source).resolve()
        if source.suffix not in (".c", ".cpp") or not source.is_file():
            raise ValueError(f"candidate must be an existing .c or .cpp file: {source}")
        # A tracked source keeps its real build settings, even if supplied twice.
        if str(source) not in entries:
            entries[str(source)] = compile_entry(config, source, compiler, extra_build)
    path = Path("compile_commands.json").resolve()
    temporary = None
    try:
        with tempfile.NamedTemporaryFile(mode="w", encoding="utf-8", newline="\n", dir=path.parent,
                                         prefix=path.name + ".", suffix=".tmp", delete=False) as output:
            temporary = Path(output.name)
            json.dump(list(entries.values()), output, indent=2)
            output.write("\n")
        temporary.replace(path)
    finally:
        if temporary is not None:
            temporary.unlink(missing_ok=True)
    return path, len(entries)
