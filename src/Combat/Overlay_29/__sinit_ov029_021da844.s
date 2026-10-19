	.section .text
	.arm

	.global __sinit_ov029_021da844
	.extern func_ov029_021d9824
	.extern func_ov024_021dbc64

// USA: func_ov029_021da844
__sinit_ov029_021da844:
	stmdb sp!, {lr}
	add r0, pc, #4
	bl func_ov029_021d9824
	ldmia sp!, {pc}
	.word 0x021db5cc, 0x021dbb64
	.word 0x021db6b0, 0x021dbb10
	.word 0x021db6e8, 0x021dbbf4
	.word 0x021db7fc, func_ov024_021dbc64
	.word 0x021db984, 0x021dbb40
	.word 0x021db9e4, 0x021dbb40
	.word 0x021db658, 0x021dbb38
	.word 0, 0

	.section .ctor, 4
	.global .p__sinit_ov029_021da844
.p__sinit_ov029_021da844:
	.word __sinit_ov029_021da844
