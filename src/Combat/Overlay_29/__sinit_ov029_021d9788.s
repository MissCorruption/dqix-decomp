	.section .text
	.arm

	.global __sinit_ov029_021d9788
	.extern func_ov029_021d9824
	.extern data_ov029_021da7a8, data_ov029_021da820, data_ov029_021da898

// USA: func_ov029_021d9788
__sinit_ov029_021d9788:
	stmdb sp!, {lr}
	add r0, pc, #4
	bl func_ov029_021d9824
	ldmia sp!, {pc}
	.word data_ov029_021da7a8, 0x021dbb48
	.word data_ov029_021da820, 0x021dbb48
	.word data_ov029_021da898, 0x021dbb48
	.word 0x021da910, 0x021dbb48
	.word 0, 0

	.section .ctor, 4
	.global .p__sinit_ov029_021d9788
.p__sinit_ov029_021d9788:
	.word __sinit_ov029_021d9788
