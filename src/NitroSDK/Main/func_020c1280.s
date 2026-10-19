	.section .text
	.thumb

	.global Mat3x3_WriteRotationY

// USA: func_020c1280
Mat3x3_WriteRotationY:
	str r2, [r0]
	str r2, [r0, #0x20]
	mov r3, #0
	str r3, [r0, #4]
	str r3, [r0, #0xc]
	str r3, [r0, #0x14]
	str r3, [r0, #0x1c]
	neg r2, r1
	mov r3, #1
	lsl r3, r3, #0xc
	str r1, [r0, #0x18]
	str r2, [r0, #8]
	str r3, [r0, #0x10]
	bx lr
