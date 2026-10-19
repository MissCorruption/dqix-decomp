// _dadd at 0x0200ab28 -- double-precision add, MSL (mwccarm) runtime.
//
// PROVENANCE: pokediamond/arm9/asm/RUNTIME_d_add.s -- _dadd. The MSL runtime ships this
// routine as assembly, not as compilable C; sm64ds-decomp carries the same block in
// src/_dadd.c (as `asm double _dadd(double, double)`), but that build is a different
// library revision: it pushes {r0,r1,r2,r3,r4,lr}, reads and updates the FP status word
// through func_0207322c and leaves through func_0206dd7c / func_0206dcd4 on a trap.
// Our block has none of that -- no stack frame beyond {r4,lr}, no calls at all, and it
// returns the 0x7ff00000 infinity pattern directly -- so it is pokediamond's build that
// matches, and pokediamond writes it exactly as transcribed below.
//
// WHY .s AND NOT AN `ARM asm` BLOCK: two constructs the mwccarm inline assembler cannot
// express are both required by these bytes. (`.arm` below is this file's `ARM`.)
//
//  1. The differing-sign path tail-jumps into a SIBLING routine's interior. `bmi` at
//     +0x0c goes to 0x0200b618, which is _dsub (0x0200b608) + 0x10 -- _dsub's
//     magnitude-subtract core, the mirror of the core at +0x10 here. (_dsub repays it:
//     its own +0x0c branches to 0x0200ab38, _dadd + 0x10.) Nothing in
//     config/usa/arm9/symbols.txt names that interior address, and `config/` is not ours
//     to edit, so there is no symbol for the branch to name. The inline assembler refuses
//     every spelling of the destination: `b 0x0200b618`, `bmi (0x2b7)` and `bmi . + 0x2b7`
//     are all "illegal operand"; `bmi _dsub + 0x10` and `bmi L_x + 0x2b7` are "end of
//     line expected". `bmi _dsub` does assemble, but it is genuinely wrong rather than
//     merely unprovable: it encodes a displacement to 0x0200b608, four instructions short
//     of the ROM's target, so it links to a different address and fails the overlay
//     checksum. wgate agrees -- RELOC-WRONG at +0x0c, "want callee@0x200b618". So the
//     displacement is encoded directly, 0xADC words past the instruction:
//       .word 0x4a0002b7   ==   bmi #0x0200b618
//     It carries no relocation, so it links to exactly the bytes the ROM holds.
//  2. The 0x7ff00000 infinity pattern lives in a literal pool word at the end of the
//     routine, at +0x314. The inline assembler has no `.word`. (`ldr r1, =0x7ff00000` is
//     its inline equivalent and was measured working -- it makes mwcc lay the single pool
//     word at +0x314 and compute both `ldr [pc,#..]` offsets, 0x50 and 0xc. See
//     _dadd.cpp, the inline-asm variant, which is byte-exact everywhere except the branch
//     above. This file has to be `.s` for that one word plus the one displacement.)
//
// Everything else is a plain mnemonic. One `.text` section, 0x318 bytes, no relocations.

	.section .text
	.arm

	.global _dadd

	// USA: func_0200ab28
_dadd:
	stmdb sp!, {r4, lr}
	eors ip, r1, r3
	eormi r3, r3, #0x80000000
	.word 0x4a0002b7		// bmi _dsub + 0x10 (0x0200b618)
	subs ip, r0, r2
	sbcs lr, r1, r3
	bhs L_002c
	adds r2, r2, ip
	adc r3, r3, lr
	subs r0, r0, ip
	sbc r1, r1, lr
L_002c:
	mov lr, #0x80000000
	mov ip, r1, lsr #0x14
	orr r1, lr, r1, lsl #0xb
	orr r1, r1, r0, lsr #0x15
	mov r0, r0, lsl #0xb
	movs r4, ip, lsl #0x15
	cmnne r4, #0x200000
	beq L_0128
	mov r4, r3, lsr #0x14
	orr r3, lr, r3, lsl #0xb
	orr r3, r3, r2, lsr #0x15
	mov r2, r2, lsl #0xb
	movs lr, r4, lsl #0x15
	beq L_0170
L_0064:
	subs r4, ip, r4
	beq L_00bc
	cmp r4, #0x20
	ble L_00a0
	cmp r4, #0x38
	movge r4, #0x3f
	sub r4, r4, #0x20
	rsb lr, r4, #0x20
	orrs lr, r2, r3, lsl lr
	mov r2, r3, lsr r4
	orrne r2, r2, #1
	adds r0, r0, r2
	adcs r1, r1, #0
	blo L_00e4
	b L_00c8
L_00a0:
	rsb lr, r4, #0x20
	movs lr, r2, lsl lr
	rsb lr, r4, #0x20
	mov r2, r2, lsr r4
	orr r2, r2, r3, lsl lr
	mov r3, r3, lsr r4
	orrne r2, r2, #1
L_00bc:
	adds r0, r0, r2
	adcs r1, r1, r3
	blo L_00e4
L_00c8:
	add ip, ip, #1
	and r4, r0, #1
	movs r1, r1, rrx
	orr r0, r4, r0, rrx
	mov lr, ip, lsl #0x15
	cmn lr, #0x200000
	beq L_02f4
L_00e4:
	movs r2, r0, lsl #0x15
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #0x15
	add r1, r1, r1
	mov r1, r1, lsr #0xc
	orr r1, r1, ip, lsl #0x14
	tst r2, #0x80000000
	ldmeqia sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, lr}
	bxeq lr
L_0118:
	adds r0, r0, #1
	adc r1, r1, #0
	ldmia sp!, {r4, lr}
	bx lr
L_0128:
	cmp ip, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bics ip, ip, #0x800
	beq L_0194
	orrs r4, r0, r1, lsl #1
	bne L_02d0
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #0x15
	mov r2, r2, lsl #0xb
	movs r4, r4, lsl #0x15
	beq L_02bc
	cmn r4, #0x200000
	bne L_02bc
	orrs r4, r2, r3, lsl #1
	beq L_02bc
	b L_02d0
L_0170:
	cmp r4, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bic ip, ip, #0x800
	bics r4, r4, #0x800
	beq L_0200
	orrs r4, r2, r3, lsl #1
	bne L_02d0
	b L_02bc
L_0194:
	orrs r4, r0, r1, lsl #1
	beq L_01d4
	mov ip, #1
	bic r1, r1, #0x80000000
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #0x15
	mov r2, r2, lsl #0xb
	movs r4, r4, lsl #0x15
	cmnne r4, #0x200000
	mov r4, r4, lsr #0x15
	orr r4, r4, lr, lsr #0x14
	beq L_0170
	orr r3, r3, #0x80000000
	orr ip, ip, lr, lsr #0x14
	b L_0064
L_01d4:
	mov ip, r3, lsr #0x14
	mov r1, r3, lsl #0xb
	orr r1, r1, r2, lsr #0x15
	mov r0, r2, lsl #0xb
	movs r4, ip, lsl #0x15
	beq L_0288
	cmn r4, #0x200000
	bne L_0288
	orrs r4, r0, r1, lsl #1
	beq L_02bc
	b L_02d4
L_0200:
	orrs r4, r2, r3, lsl #1
	beq L_0298
	mov r4, #1
	bic r3, r3, #0x80000000
	cmp r1, #0
	bpl L_0224
	orr ip, ip, lr, lsr #0x14
	orr r4, r4, lr, lsr #0x14
	b L_0064
L_0224:
	adds r0, r0, r2
	adcs r1, r1, r3
	blo L_0244
	add ip, ip, #1
	and r4, r0, #1
	movs r1, r1, rrx
	mov r0, r0, rrx
	orr r0, r0, r4
L_0244:
	cmp r1, #0
	subges ip, ip, #1
	movs r2, r0, lsl #0x15
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #0x15
	add r1, r1, r1
	orr r1, lr, r1, lsr #0xc
	orr r1, r1, ip, lsl #0x14
	ldmeqia sp!, {r4, lr}
	bxeq lr
	tst r2, #0x80000000
	ldmeqia sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, lr}
	bxeq lr
L_0288:
	mov r1, r3
	mov r0, r2
	ldmia sp!, {r4, lr}
	bx lr
L_0298:
	cmp r1, #0
	subges ip, ip, #1
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #0x15
	add r1, r1, r1
	orr r1, lr, r1, lsr #0xc
	orr r1, r1, ip, lsl #0x14
	ldmia sp!, {r4, lr}
	bx lr
L_02bc:
	ldr r1, [pc, #0x50]
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, lr}
	bx lr
L_02d0:
	mov r1, r3
L_02d4:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, lr}
	bx lr
L_02e4:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, lr}
	bx lr
L_02f4:
	cmp ip, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	ldr r1, [pc, #0xc]
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, lr}
	bx lr

	.balign 4
L_0314:
	.word 0x7ff00000