	.section .text
	.arm

	.global __sinit_ov029_021da374
	.extern func_ov029_021d9824

// USA: func_ov029_021da374
__sinit_ov029_021da374:
	stmdb sp!, {lr}
	add r0, pc, #4
	bl func_ov029_021d9824
	ldmia sp!, {pc}
	.word 0x021db37c, 0x021dbb48
	.word 0x021db3f4, 0x021dbb48
	.word 0x021dad94, 0x021dbb48
	.word 0x021dae0c, 0x021dbb48
	.word 0x021db06c, 0x021dbb48
	.word 0x021db0e4, 0x021dbb48
	.word 0x021db484, 0x021dbb48
	.word 0x021db4fc, 0x021dbb48
	.word 0, 0

	.section .ctor, 4
	.global .p__sinit_ov029_021da374
.p__sinit_ov029_021da374:
	.word __sinit_ov029_021da374
