	.section .text
	.arm

	.global _frdiv
	.global _fdiv
	.global .L_0200c274

_frdiv:
	eor r0, r0, r1
	eor r1, r0, r1
	eor r0, r0, r1

// USA: func_0200c1c0
_fdiv:
	stmdb sp!, {lr}
	mov ip, #0xff
	ands r3, ip, r0, lsr #23
	cmpne r3, #0xff
	beq _L1d4
	ands ip, ip, r1, lsr #23
	cmpne ip, #0xff
	beq _L210
	orr r1, r1, #0x800000
	orr r0, r0, #0x800000
	bic r2, r0, #0xff000000
	bic lr, r1, #0xff000000
_L030:
	cmp r2, lr
	movlo r2, r2, lsl #1
	sublo r3, r3, #1
	teq r0, r1
	sub r0, pc, #0x94
	ldrb r1, [r0, lr, lsr #15]
	rsb lr, lr, #0
	mov r0, lr, asr #1
	mul r0, r1, r0
	add r0, r0, #0x80000000
	mov r0, r0, lsr #6
	mul r0, r1, r0
	mov r0, r0, lsr #0xe
	mul r1, lr, r0
	sub ip, r3, ip
	mov r1, r1, lsr #0xc
	mul r1, r0, r1
	mov r0, r0, lsl #0xe
	add r0, r0, r1, lsr #15
	umull r1, r0, r2, r0
	mov r3, r0
	orrmi r0, r0, #0x80000000
	adds ip, ip, #0x7e
	bmi _L2d8
	cmp ip, #0xfe
	bge _L38c
	add r0, r0, ip, lsl #23
	mov ip, r1, lsr #0x1c
	cmp ip, #7
	beq _L1b4
	add r0, r0, r1, lsr #31
	ldmia sp!, {lr}
	bx lr
.L_0200c274:
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
_L1b4:
	mov r1, r3, lsl #1
	add r1, r1, #1
	rsb lr, lr, #0
	mul r1, lr, r1
	cmp r1, r2, lsl #24
	addmi r0, r0, #1
	ldmia sp!, {lr}
	bx lr
_L1d4:
	eor lr, r0, r1
	and lr, lr, #0x80000000
	cmp r3, #0
	beq _L22c
	movs r0, r0, lsl #9
	bne _L374
	mov ip, r1, lsr #0x17
	mov r1, r1, lsl #9
	ands ip, ip, #0xff
	beq _L364
	cmp ip, #0xff
	blt _L364
	cmp r1, #0
	beq _L380
	b _L35c
_L210:
	eor lr, r0, r1
	and lr, lr, #0x80000000
	cmp ip, #0
	beq _L290
_L220:
	movs r1, r1, lsl #9
	bne _L35c
	b _L3ac
_L22c:
	movs r2, r0, lsl #9
	beq _L260
	clz r3, r2
	movs r2, r2, lsl r3
	rsb r3, r3, #0
	mov r2, r2, lsr #8
	ands ip, ip, r1, lsr #23
	beq _L2b8
	cmp ip, #0xff
	beq _L220
	orr r1, r1, #0x800000
	bic lr, r1, #0xff000000
	b _L030
_L260:
	mov ip, r1, lsr #0x17
	mov r1, r1, lsl #9
	ands ip, ip, #0xff
	beq _L284
	cmp ip, #0xff
	blt _L3ac
	cmp r1, #0
	beq _L3ac
	b _L35c
_L284:
	cmp r1, #0
	beq _L380
	b _L3ac
_L290:
	movs ip, r1, lsl #9
	beq _L364
	mov lr, ip
	clz ip, lr
	movs lr, lr, lsl ip
	rsb ip, ip, #0
	mov lr, lr, lsr #8
	orr r0, r0, #0x800000
	bic r2, r0, #0xff000000
	b _L030
_L2b8:
	movs ip, r1, lsl #9
	beq _L364
	mov lr, ip
	clz ip, lr
	movs lr, lr, lsl ip
	rsb ip, ip, #0
	mov lr, lr, lsr #8
	b _L030
_L2d8:
	and r0, r0, #0x80000000
	cmn ip, #0x18
	beq _L34c
	bmi _L3a4
	add r1, ip, #0x17
	mov r2, r2, lsl r1
	rsb ip, ip, #0
	mov r3, r3, lsr ip
	orr r0, r0, r3
	rsb lr, lr, #0
	mul r1, lr, r3
	cmp r1, r2
	ldmeqia sp!, {lr}
	bxeq lr
	add r1, r1, lr
	cmp r1, r2
	beq _L340
	addmi r0, r0, #1
	subpl r1, r1, lr
	add r1, lr, r1, lsl #1
	cmp r1, r2, lsl #1
	and r3, r0, #1
	addmi r0, r0, #1
	addeq r0, r0, r3
	ldmia sp!, {lr}
	bx lr
_L340:
	add r0, r0, #1
	ldmia sp!, {lr}
	bx lr
_L34c:
	cmn r2, lr
	addne r0, r0, #1
	ldmia sp!, {lr}
	bx lr
_L35c:
	mov r0, r1
	b _L374
_L364:
	mov r0, #0xff000000
	orr r0, lr, r0, lsr #1
	ldmia sp!, {lr}
	bx lr
_L374:
	mvn r0, #0x80000000
	ldmia sp!, {lr}
	bx lr
_L380:
	mvn r0, #0x80000000
	ldmia sp!, {lr}
	bx lr
_L38c:
	tst r0, #0x80000000
	mov r0, #0xff000000
	movne r0, r0, asr #1
	moveq r0, r0, lsr #1
	ldmia sp!, {lr}
	bx lr
_L3a4:
	ldmia sp!, {lr}
	bx lr
_L3ac:
	mov r0, lr
	ldmia sp!, {lr}
	bx lr
