	.section .text
	.arm

	.global __sinit_ov029_021d9a24
	.extern func_ov029_021d9824

// USA: func_ov029_021d9a24
__sinit_ov029_021d9a24:
	stmdb sp!, {lr}
	add r0, pc, #4
	bl func_ov029_021d9824
	ldmia sp!, {pc}
	.word 0x021dab94, 0x021dbb6c
	.word 0x021dab0c, 0x021dbb64
	.word 0, 0

	.section .ctor, 4
	.global .p__sinit_ov029_021d9a24
.p__sinit_ov029_021d9a24:
	.word __sinit_ov029_021d9a24
