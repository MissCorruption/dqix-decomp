// _ll_udiv at 0x0200cedc is not un-decompiled C. It is a CodeWarrior runtime
// linker tail-merge stub: the 12-byte body is the shared 64-bit divide prologue,
// the constant r4 that selects quotient over remainder, and a branch into the
// shared body at _ull_mod+8 (0x0200cef0), which _ull_mod (0x0200cee8) enters at
// its own second word. Any C _ll_udiv has to contain the loop the linker moved
// out of here, so every C form measures OVERGEN 128.
//
// PROVENANCE: khdays-decomp/libs/msl/runtime/asm_stubs/calls/func_02020368.s
// -- `python sdkident.py match main 0200cedc` scores it EXACT (100%): the same
// mwccarm RTS tail-merge, push {r4-r7, fp, ip, lr} / mov r4, #0 / b into the
// shared divide body. sm64ds-decomp/src/_ll_udiv.c scores PARTIAL (66.7%).
// Allowlisted: asm_allow.txt line 154 (`_ll_udiv`, pokediamond RUNTIME_ll_div.s).
//
// WHY A .s FILE AND NOT `ARM asm`:
// The branch target names no symbol in any config (nothing is bound at 0x0200cef0),
// so it must be written as a same-section PC-relative displacement, `b .+0xc`, which
// mwasmarm folds to an absolute immediate and emits with NO relocation. mwccarm's
// INLINE assembler accepts only a label as a branch operand -- `.`, `.+0xc`, `#8`,
// `8`, `0x200cef0`, `L_a+8`, `(L_a+8)`, `$+12`, a C symbol and a label from another
// `ARM asm` block were all measured and all fail (illegal operand / end of line
// expected / undefined label), while a `.s` file is routed to mwasmarm itself
// (wgate.py:295) and does accept `.+0xc`.
//
.section .text
	.arm

	.global _ll_udiv

// USA: func_0200cedc
_ll_udiv:
	stmdb sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, #0
	b .+0xc