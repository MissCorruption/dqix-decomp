// _ull_mod at 0x0200cee8 is hand-written library assembly, ported from the CW
// runtime sources named below. It is not un-decompiled C: no C form reaches it, because
// mwcc merged _ll_udiv (0x0200cedc) and _ull_mod onto one divide body -- _ll_udiv sets
// r4 = 0 and branches to _ull_mod + 0x8 wanting the quotient, _ull_mod sets r4 = 1 and
// falls into the same body wanting the remainder -- and _ull_mod then tail-jumps into
// _ll_sdiv's own interior, past that function's "do both operands fit in 32 bits" test.
// Three live entries into the middle of two sibling functions, selected by a register
// flag no caller sees, is not something a C signature can express.
//
// PROVENANCE: pokediamond arm9/asm/RUNTIME_ll_div.s `_ull_mod`, instruction for
// instruction with the ROM from entry to exit -- its r4 = 1, its `orrs r5, r3, r2`
// zero-denominator test, its `orrs r5, r1, r3` wide test, its `bl` into the 32-bit
// divider and its `cmp r4, #0` / `movne r0, r1` remainder select. sm64ds-decomp
// src/_ull_mod.c is the same body written as an mwcc `asm` block and is where the
// cross-function entry point is named `_ll_sdiv_L074`. MSL runtime.
//
// Assembly rather than an mwccarm `asm` block because the inline assembler cannot
// express this one: two of its branches leave the function, and mwcc's inline assembler
// has no way to name a callee's interior label. Mnemonics are the canonical ARM spellings
// mwasmarm accepts.

	.section .text
	.arm

	.global _ull_mod

// USA: func_0200cee8
_ull_mod:
	stmdb sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, #1
	orrs r5, r3, r2
	bne _L18
	ldmia sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
_L18:
	orrs r5, r1, r3
// 0x0200cda0 = _ll_sdiv (0x0200cd2c) + 0x74, the shared 64-bit core's entry once that
// function has normalised both operands' signs and proved neither is zero in its low
// word. Written as an assembler-time PC-relative displacement rather than `bne
// _ll_sdiv_L74` because config/usa/arm9/symbols.txt gives 0x0200cda0 no name, and a
// named branch to it would need a symbol added there.
	bne . - 0x164
	mov r1, r2
// _u32_div_f (0x0200d150) + 0x8: the denominator is already known non-zero here, so this
// entry skips that routine's own divide-by-zero check. That label is a config symbol, so the
// branch keeps its relocation and the linker resolves it.
//
// `.L_0200d158` is a dot-L label, i.e. file-local to _ll_sdiv_0200cd2c.s, so `.extern` on it can
// never resolve and the link fails with "No module for relocation". Encode the branch as the raw
// word instead: bl at 0x0200cee8+0x2c = 0x0200d114, ARM PC = +8 = 0x0200d11c, displacement to
// 0x0200d158 is 0x3c, so imm24 = 0x0f and the word is 0xeb000091. No relocation, exact bytes.
	.word 0xeb000091
	cmp r4, #0
	movne r0, r1
	mov r1, #0
	ldmia sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
