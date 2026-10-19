	.section .text
	.arm

	.global _drdiv
	.global _ddiv
	.global .L_0200d484

_drdiv:
	eor r1, r1, r3
	eor r3, r1, r3
	eor r1, r1, r3
	eor r0, r0, r2
	eor r2, r0, r2
	eor r0, r0, r2

// USA: func_0200d34c
_ddiv:
	stmdb sp!, {r4, r5, r6, lr}
	ldr lr, [pc, #0x534]
	eor r4, r1, r3
	ands ip, lr, r1, lsr #19
	cmpne ip, lr
	beq _L3ac
	bic r1, r1, lr, lsl #20
	orr r1, r1, #0x100000
	add ip, ip, r4, lsr #31
_L024:
	ands r4, lr, r3, lsr #19
	cmpne r4, lr
	beq _L444
	bic r3, r3, lr, lsl #20
	orr r3, r3, #0x100000
_L038:
	sub ip, ip, r4
	cmp r1, r3
	cmpeq r0, r2
	bhs _L054
	adds r0, r0, r0
	adc r1, r1, r1
	sub ip, ip, #2
_L054:
	sub r4, pc, #0x24
	ldrb lr, [r4, r3, lsr #12]
	rsbs r2, r2, #0
	rsc r3, r3, #0
	mov r4, #0x20000000
	mla r5, lr, r3, r4
	mov r6, r3, lsl #0xa
	mov r5, r5, lsr #7
	mul lr, r5, lr
	orr r6, r6, r2, lsr #22
	mov lr, lr, lsr #0xd
	mul r5, lr, r6
	mov r6, r1, lsl #0xa
	orr r6, r6, r0, lsr #22
	mov r5, r5, lsr #0x10
	mul r5, lr, r5
	mov lr, lr, lsl #0xe
	add lr, lr, r5, lsr #16
	umull r5, r6, lr, r6
	umull r4, r5, r6, r2
	mla r5, r3, r6, r5
	mov r4, r4, lsr #0x1a
	orr r4, r4, r5, lsl #6
	add r4, r4, r0, lsl #2
	umull lr, r5, r4, lr
	mov r4, #0
	adds r5, r5, r6, lsl #24
	adc r4, r4, r6, lsr #8
	cmp ip, #0x800
	bge _L238
	add ip, ip, #0x7f0
	adds ip, ip, #0xc
	bmi _L250
	orr r1, r4, ip, lsl #31
	bic ip, ip, #1
	add r1, r1, ip, lsl #19
	tst lr, #0x80000000
	bne _L128
	rsbs r2, r2, #0
	mov r4, r4, lsl #1
	add r4, r4, r5, lsr #31
	mul lr, r2, r4
	mov r6, #0
	mov r4, r5, lsl #1
	orr r4, r4, #1
	umlal r6, lr, r4, r2
	rsc r3, r3, #0
	mla lr, r4, r3, lr
	cmp lr, r0, lsl #21
	bmi _L128
	mov r0, r5
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L128:
	adds r0, r5, #1
	adc r1, r1, #0
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
.L_0200d484:
	.word 0xfdfeffff
	.word 0xf9fafbfc
	.word 0xf5f6f7f8
	.word 0xf1f2f3f4
	.word 0xeeeff0f0
	.word 0xeaebeced
	.word 0xe7e8e9ea
	.word 0xe4e5e6e6
	.word 0xe1e2e2e3
	.word 0xdedfdfe0
	.word 0xdbdcdcdd
	.word 0xd8d9d9da
	.word 0xd5d6d7d7
	.word 0xd2d3d4d4
	.word 0xd0d0d1d2
	.word 0xcdcececf
	.word 0xcbcbcccc
	.word 0xc8c9c9ca
	.word 0xc6c6c7c8
	.word 0xc3c4c5c5
	.word 0xc1c2c2c3
	.word 0xbfbfc0c0
	.word 0xbdbdbebe
	.word 0xbabbbcbc
	.word 0xb8b9b9ba
	.word 0xb6b7b7b8
	.word 0xb4b5b5b6
	.word 0xb2b3b3b4
	.word 0xb0b1b1b2
	.word 0xafafafb0
	.word 0xadadaeae
	.word 0xababacac
	.word 0xa9aaaaaa
	.word 0xa7a8a8a9
	.word 0xa6a6a7a7
	.word 0xa4a4a5a5
	.word 0xa2a3a3a4
	.word 0xa1a1a2a2
	.word 0x9fa0a0a0
	.word 0x9e9e9e9f
	.word 0x9c9d9d9d
	.word 0x9b9b9b9c
	.word 0x999a9a9a
	.word 0x98989999
	.word 0x96979798
	.word 0x95959696
	.word 0x94949495
	.word 0x92939393
	.word 0x91919292
	.word 0x90909191
	.word 0x8f8f8f90
	.word 0x8d8e8e8e
	.word 0x8c8c8d8d
	.word 0x8b8b8c8c
	.word 0x8a8a8a8b
	.word 0x8989898a
	.word 0x88888888
	.word 0x86878787
	.word 0x85868686
	.word 0x84858585
	.word 0x83838484
	.word 0x82828383
	.word 0x81818282
	.word 0x80808181
_L238:
	movs r1, ip, lsl #0x1f
	orr r1, r1, #0x7f000000
	orr r1, r1, #0xf00000
	mov r0, #0
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L250:
	mvn r6, ip, asr #1
	cmp r6, #0x34
	bgt _L39c
	beq _L378
	cmp r6, #0x14
	bge _L298
	rsb r6, r6, #0x13
	mov lr, r0, lsl r6
	rsb r6, r6, #0x14
	mov r0, r5, lsr r6
	rsb r6, r6, #0x20
	orr r0, r0, r4, lsl r6
	rsb r6, r6, #0x20
	mov r4, r4, lsr r6
	orr r1, r4, ip, lsl #31
	mov ip, lr
	mov lr, #0
	b _L2c8
_L298:
	rsb r6, r6, #0x33
	mov lr, r1, lsl r6
	mov r1, ip, lsl #0x1f
	rsb r6, r6, #0x20
	orr ip, lr, r0, lsr r6
	rsb r6, r6, #0x20
	mov lr, r0, lsl r6
	mov r5, r5, lsr #0x15
	orr r5, r5, r4, lsl #11
	rsb r6, r6, #0x1f
	mov r0, r5, lsr r6
	mov r4, #0
_L2c8:
	rsbs r2, r2, #0
	mul r4, r2, r4
	mov r5, #0
	umlal r5, r4, r2, r0
	rsc r3, r3, #0
	mla r4, r0, r3, r4
	cmp r4, ip
	cmpeq r5, lr
	ldmeqia sp!, {r4, r5, r6, lr}
	bxeq lr
	adds r5, r5, r2
	adc r4, r4, r3
	cmp r4, ip
	bmi _L36c
	bne _L310
	cmp r5, lr
	beq _L35c
	blo _L36c
_L310:
	subs r5, r5, r2
	sbc r4, r4, r3
_L318:
	adds r5, r5, r5
	adc r4, r4, r4
	adds r5, r5, r2
	adc r4, r4, r3
	adds lr, lr, lr
	adc ip, ip, ip
	cmp r4, ip
	bmi _L35c
	ldmneia sp!, {r4, r5, r6, lr}
	bxne lr
	cmp r5, lr
	blo _L35c
	ldmneia sp!, {r4, r5, r6, lr}
	bxne lr
	tst r0, #1
	ldmeqia sp!, {r4, r5, r6, lr}
	bxeq lr
_L35c:
	adds r0, r0, #1
	adc r1, r1, #0
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L36c:
	adds r0, r0, #1
	adc r1, r1, #0
	b _L318
_L378:
	rsbs r2, r2, #0
	rsc r3, r3, #0
	cmp r1, r3
	cmpeq r0, r2
	mov r1, ip, lsl #0x1f
	mov r0, #0
	movne r0, #1
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L39c:
	mov r1, ip, lsl #0x1f
	mov r0, #0
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L3ac:
	orrs r5, r0, r1, lsl #1
	beq _L4d0
	cmp ip, lr
	beq _L414
	movs r1, r1, lsl #0xc
	beq _L3f0
	clz r5, r1
	movs r1, r1, lsl r5
	sub ip, ip, r5
	add r5, ip, #0x1f
	mov r1, r1, lsr #0xb
	orr r1, r1, r0, lsr r5
	rsb r5, r5, #0x20
	mov r0, r0, lsl r5
	mov ip, ip, lsl #1
	orr ip, ip, r4, lsr #31
	b _L024
_L3f0:
	mvn ip, #0x13
	clz r5, r0
	movs r0, r0, lsl r5
	sub ip, ip, r5
	mov r1, r0, lsr #0xb
	mov r0, r0, lsl #0x15
	mov ip, ip, lsl #1
	orr ip, ip, r4, lsr #31
	b _L024
_L414:
	orrs r5, r0, r1, lsl #12
	bne _L4f8
	bic r5, r3, #0x80000000
	cmp r5, lr, lsl #19
	bhs _L438
	and r5, r3, #0x80000000
	eor r1, r5, r1
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L438:
	orrs r5, r2, r3, lsl #12
	bne _L518
	b _L530
_L444:
	orrs r5, r2, r3, lsl #1
	beq _L4bc
	cmp r4, lr
	beq _L4a4
	movs r3, r3, lsl #0xc
	beq _L484
	clz r5, r3
	movs r3, r3, lsl r5
	sub r4, r4, r5
	add r5, r4, #0x1f
	mov r3, r3, lsr #0xb
	orr r3, r3, r2, lsr r5
	rsb r5, r5, #0x20
	mov r2, r2, lsl r5
	mov r4, r4, lsl #1
	b _L038
_L484:
	mvn r4, #0x13
	clz r5, r2
	movs r2, r2, lsl r5
	sub r4, r4, r5
	mov r3, r2, lsr #0xb
	mov r2, r2, lsl #0x15
	mov r4, r4, lsl #1
	b _L038
_L4a4:
	orrs r5, r2, r3, lsl #12
	bne _L518
	mov r1, ip, lsl #0x1f
	mov r0, #0
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L4bc:
	mov r1, ip, lsl #0x1f
	orr r1, r1, lr, lsl #19
	mov r0, #0
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L4d0:
	orrs r5, r2, r3, lsl #1
	beq _L530
	bic r5, r3, #0x80000000
	cmp r5, lr, lsl #19
	cmpeq r2, #0
	bhi _L518
	eor r1, r1, r3
	and r1, r1, #0x80000000
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L4f8:
	tst r1, #0x80000
	beq _L530
	bic r5, r3, #0x80000000
	cmp r5, lr, lsl #19
	cmpeq r2, #0
	bhi _L518
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L518:
	tst r3, #0x80000
	beq _L530
	mov r1, r3
	mov r0, r2
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
_L530:
	orr r1, r1, #0x7f000000
	orr r1, r1, #0xf80000
	ldmia sp!, {r4, r5, r6, lr}
	bx lr
	.word 0x00000ffe
