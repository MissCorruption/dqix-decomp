	.section .text
	.arm

	.global func_0200c76c

// USA: func_0200c76c
func_0200c76c:
	cmp r1, #0
	bne _L010
	movs r0, r0
	b . - 0xbc
_L010:
	mov r3, #0x20
	bmi _L030
	clz ip, r1
	movs r1, r1, lsl ip
	sub r3, r3, ip
	orr r1, r1, r0, lsr r3
	rsb r2, r3, #0x20
	mov r0, r0, lsl r2
_L030:
	cmp r0, #0
	orrne r1, r1, #1
	add r3, r3, #0x9e
	ands r2, r1, #0xff
	add r0, r1, r1
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bxeq lr
	tst r2, #0x80
	bxeq lr
	ands r1, r2, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
