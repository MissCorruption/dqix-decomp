	.section .text
	.arm

	.global func_ov016_0219000c
	.global .L_021903ec
	.global .L_0219043c
	.global .L_0219070c

// USA: func_ov016_0219000c
func_ov016_0219000c:
	b _L810
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
_L010:
	mov r6, #0x20
	add r7, r3, #0x200
	mov r8, #0
	mov sb, #0
	mov sl, #0
	mov fp, #0
_L028:
	stmia r7!, {r8, sb, sl, fp}
	subs r6, r6, #1
	bne _L028
	mov pc, lr
	.word 0x00000000
	.word 0x00000000
_L040:
	stmdb sp!, {r1, r3, r4}
	add r3, r3, #0x200
	rsb ip, r6, #0x7f
	add r4, r4, ip, lsl #2
	ldr r2, [r4], #4
	mov r1, #2
	mov r2, r2, asr #4
	str r2, [r3], #4
	ldr r2, [r4], #4
	ldr r7, [r4], #4
	ldr r8, [r4], #4
	ldr sb, [r4], #4
	ldr sl, [r4], #4
	ldr fp, [r4], #4
	mul ip, r2, r1
	add r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, r7, r1
	add r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, r8, r1
	add r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, sb, r1
	add r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, sl, r1
	add r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, fp, r1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mov ip, #0x72
_L0d8:
	ldmia r4!, {r6, r7, r8, sb, sl, fp}
	mov r6, r6, asr #1
	mov r7, r7, asr #1
	mov r8, r8, asr #1
	mov sb, sb, asr #1
	mov sl, sl, asr #1
	mov fp, fp, asr #1
	stmia r3!, {r6, r7, r8, sb, sl, fp}
	subs ip, ip, #6
	bne _L0d8
	ldr r2, [r4], #4
	ldr r7, [r4], #4
	ldr r8, [r4], #4
	ldr sb, [r4], #4
	ldr sl, [r4], #4
	ldr fp, [r4], #4
	mul ip, r2, r1
	sub r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, r7, r1
	sub r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, r8, r1
	sub r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, sb, r1
	sub r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, sl, r1
	sub r1, r1, #1
	mov ip, ip, asr #4
	str ip, [r3], #4
	mul ip, fp, r1
	ldr r2, [r4], #4
	mov ip, ip, asr #4
	str ip, [r3], #4
	mov r2, r2, asr #4
	str r2, [r3], #4
	ldmia sp!, {r1, r3, r4}
	mov pc, lr
	.word 0x00000000
	.word 0x00000000
_L190:
	add r1, r3, #0x200
	add r1, r1, r7, lsl #2
	rsb r7, r6, #0
	mov r6, r6, lsl #1
	sub r7, r7, r6
_L1a4:
	ldrh r5, [r0], #2
	mov fp, #0xe
_L1ac:
	ldr sl, [r1]
	mov r2, r5, lsr fp
	and r2, r2, #3
	mla r2, r6, r2, r7
	add sl, sl, r2
	str sl, [r1], sb
	subs fp, fp, #2
	bge _L1ac
	subs r8, r8, #1
	bne _L1a4
	ldmia sp!, {r1, pc}
	.word 0x00000000
	.word 0x00000000
_L1e0:
	add r1, r3, #0x200
	add r1, r1, r7, lsl #2
	rsb r7, r6, #0
	mov r6, r6, lsl #1
	sub r7, r7, r6, lsl #1
	sub r7, r7, r6
	mov sb, #0
	mov r8, #8
_L200:
	ldrh r5, [r0], #2
	mov fp, #0xd
_L208:
	ldr sl, [r1]
	mov r2, r5, lsr fp
	and r2, r2, #7
	mla r2, r6, r2, r7
	add sl, sl, r2
	str sl, [r1], #0xc
	subs fp, fp, #3
	bge _L208
	and r5, r5, #1
	orr sb, r5, sb, lsl #1
	subs r8, r8, #1
	bne _L200
	ldr sl, [r1]
	mov r2, sb, lsr #5
	and r2, r2, #7
	mla r2, r6, r2, r7
	add sl, sl, r2
	str sl, [r1], #0xc
	ldr sl, [r1]
	mov r2, sb, lsr #2
	and r2, r2, #7
	mla r2, r6, r2, r7
	add sl, sl, r2
	str sl, [r1]
	ldmia sp!, {r1, pc}
	.word 0x00000000
_L270:
	stmdb sp!, {r3, r4, lr}
	ldmia r2, {r5, r6, r7, r8, sb, sl, fp, ip}
	add r3, r1, #0x70
	ldrb r4, [r3]
	add r2, r1, #0x8c0
	add r4, r2, r4, lsl #4
	bl .L_021903ec
	add r3, r1, #0x71
	ldrb r4, [r3]
	add r2, r1, #0xcc0
	add r4, r2, r4, lsl #4
	bl .L_021903ec
	add r3, r1, #0x72
	ldrb r4, [r3]
	add r2, r1, #0x10c0
	add r4, r2, r4, lsl #4
	bl .L_021903ec
	add r2, r1, #8
	stmia r2, {r5, r6, r7, r8, sb, sl, fp, ip}
	mul r3, r5, r6
	add r5, r5, r3, asr #15
	mul r3, r6, r7
	mul r4, r5, r7
	add r5, r5, r3, asr #15
	add r6, r6, r4, asr #15
	mul r3, r7, r8
	mul r4, r5, r8
	add r5, r5, r3, asr #15
	mul r3, r6, r8
	add r7, r7, r4, asr #15
	add r6, r6, r3, asr #15
	mul r3, r8, sb
	mul r4, r5, sb
	add r5, r5, r3, asr #15
	add r8, r8, r4, asr #15
	mul r3, r7, sb
	mul r4, r6, sb
	add r6, r6, r3, asr #15
	add r7, r7, r4, asr #15
	mul r3, sb, sl
	mul r4, r5, sl
	add r5, r5, r3, asr #15
	add sb, sb, r4, asr #15
	mul r3, r8, sl
	mul r4, r6, sl
	add r6, r6, r3, asr #15
	mul r3, r7, sl
	add r8, r8, r4, asr #15
	add r7, r7, r3, asr #15
	mul r3, sl, fp
	mul r4, r5, fp
	add r5, r5, r3, asr #15
	add sl, sl, r4, asr #15
	mul r3, sb, fp
	mul r4, r6, fp
	add r6, r6, r3, asr #15
	add sb, sb, r4, asr #15
	mul r3, r8, fp
	mul r4, r7, fp
	add r7, r7, r3, asr #15
	add r8, r8, r4, asr #15
	mul r3, fp, ip
	mul r4, r5, ip
	add r5, r5, r3, asr #15
	add fp, fp, r4, asr #15
	mul r3, sl, ip
	mul r4, r6, ip
	add r6, r6, r3, asr #15
	add sl, sl, r4, asr #15
	mul r3, sb, ip
	mul r4, r7, ip
	add r7, r7, r3, asr #15
	mul r3, r8, ip
	add sb, sb, r4, asr #15
	add r8, r8, r3, asr #15
	mov r5, r5, asr #1
	rsb r5, r5, #0
	mov r6, r6, asr #1
	rsb r6, r6, #0
	mov r7, r7, asr #1
	rsb r7, r7, #0
	mov r8, r8, asr #1
	rsb r8, r8, #0
	mov sb, sb, asr #1
	rsb sb, sb, #0
	mov sl, sl, asr #1
	rsb sl, sl, #0
	mov fp, fp, asr #1
	rsb fp, fp, #0
	mov ip, ip, asr #1
	rsb ip, ip, #0
	ldmia sp!, {r3, r4, pc}
.L_021903ec:
	ldrsh r0, [r4], #2
	ldrsh r3, [r4], #2
	ldrsh r2, [r4], #2
	add r5, r5, r0
	add r6, r6, r3
	add r7, r7, r2
	ldrsh r0, [r4], #2
	ldrsh r3, [r4], #2
	ldrsh r2, [r4], #2
	add r8, r8, r0
	add sb, sb, r3
	add sl, sl, r2
	ldrsh r0, [r4], #2
	ldrsh r3, [r4], #2
	add fp, fp, r0
	add ip, ip, r3
	mov pc, lr
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
.L_0219043c:
	stmdb sp!, {r1, r3, r4, lr}
	add lr, r1, #0x78
	ldr r1, [r1, #0x74]
_L43c:
	str r2, [sp, #-4]!
	ldr r4, [r0], #4
	ldr r3, [lr, #0x1c]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #0x18]
	mla r4, r5, r3, r4
	ldr r3, [lr, #0x14]
	mla r4, r6, r2, r4
	ldr r2, [lr, #0x10]
	mla r4, r7, r3, r4
	ldr r3, [lr, #0xc]
	mla r4, r8, r2, r4
	ldr r2, [lr, #8]
	mla r4, sb, r3, r4
	ldr r3, [lr, #4]
	mla r4, sl, r2, r4
	ldr r2, [lr]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #0x1c]
	mla r4, r5, r3, r4
	ldr r3, [lr, #0x18]
	mla r4, r6, r2, r4
	ldr r2, [lr, #0x14]
	mla r4, r7, r3, r4
	ldr r3, [lr, #0x10]
	mla r4, r8, r2, r4
	ldr r2, [lr, #0xc]
	mla r4, sb, r3, r4
	ldr r3, [lr, #8]
	mla r4, sl, r2, r4
	ldr r2, [lr, #4]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #4]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr, #4]
	mov r4, r4, lsl #0xe
	ldr r2, [lr]
	mla r4, r5, r3, r4
	ldr r3, [lr, #0x1c]
	mla r4, r6, r2, r4
	ldr r2, [lr, #0x18]
	mla r4, r7, r3, r4
	ldr r3, [lr, #0x14]
	mla r4, r8, r2, r4
	ldr r2, [lr, #0x10]
	mla r4, sb, r3, r4
	ldr r3, [lr, #0xc]
	mla r4, sl, r2, r4
	ldr r2, [lr, #8]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #8]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr, #8]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #4]
	mla r4, r5, r3, r4
	ldr r3, [lr]
	mla r4, r6, r2, r4
	ldr r2, [lr, #0x1c]
	mla r4, r7, r3, r4
	ldr r3, [lr, #0x18]
	mla r4, r8, r2, r4
	ldr r2, [lr, #0x14]
	mla r4, sb, r3, r4
	ldr r3, [lr, #0x10]
	mla r4, sl, r2, r4
	ldr r2, [lr, #0xc]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #0xc]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr, #0xc]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #8]
	mla r4, r5, r3, r4
	ldr r3, [lr, #4]
	mla r4, r6, r2, r4
	ldr r2, [lr]
	mla r4, r7, r3, r4
	ldr r3, [lr, #0x1c]
	mla r4, r8, r2, r4
	ldr r2, [lr, #0x18]
	mla r4, sb, r3, r4
	ldr r3, [lr, #0x14]
	mla r4, sl, r2, r4
	ldr r2, [lr, #0x10]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #0x10]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr, #0x10]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #0xc]
	mla r4, r5, r3, r4
	ldr r3, [lr, #8]
	mla r4, r6, r2, r4
	ldr r2, [lr, #4]
	mla r4, r7, r3, r4
	ldr r3, [lr]
	mla r4, r8, r2, r4
	ldr r2, [lr, #0x1c]
	mla r4, sb, r3, r4
	ldr r3, [lr, #0x18]
	mla r4, sl, r2, r4
	ldr r2, [lr, #0x14]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #0x14]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr, #0x14]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #0x10]
	mla r4, r5, r3, r4
	ldr r3, [lr, #0xc]
	mla r4, r6, r2, r4
	ldr r2, [lr, #8]
	mla r4, r7, r3, r4
	ldr r3, [lr, #4]
	mla r4, r8, r2, r4
	ldr r2, [lr]
	mla r4, sb, r3, r4
	ldr r3, [lr, #0x1c]
	mla r4, sl, r2, r4
	ldr r2, [lr, #0x18]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #0x18]
	str r4, [r1], #4
	ldr r4, [r0], #4
	ldr r3, [lr, #0x18]
	mov r4, r4, lsl #0xe
	ldr r2, [lr, #0x14]
	mla r4, r5, r3, r4
	ldr r3, [lr, #0x10]
	mla r4, r6, r2, r4
	ldr r2, [lr, #0xc]
	mla r4, r7, r3, r4
	ldr r3, [lr, #8]
	mla r4, r8, r2, r4
	ldr r2, [lr, #4]
	mla r4, sb, r3, r4
	ldr r3, [lr]
	mla r4, sl, r2, r4
	ldr r2, [lr, #0x1c]
	mla r4, fp, r3, r4
	mla r4, ip, r2, r4
	mov r4, r4, asr #0xe
	str r4, [lr, #0x1c]
	str r4, [r1], #4
	ldr r2, [sp], #4
	subs r2, r2, #8
	bne _L43c
	ldr r4, [sp]
	str r1, [r4, #0x74]
	ldmia sp!, {r1, r3, r4, pc}
	.word 0x00000000
	.word 0x00000000
.L_0219070c:
	stmdb sp!, {r0, lr}
	ldr r0, [r2], #4
	ldr lr, [r2], #4
	add r5, r5, r0
	add r6, r6, lr
	ldr r0, [r2], #4
	ldr lr, [r2], #4
	add r7, r7, r0
	add r8, r8, lr
	ldr r0, [r2], #4
	ldr lr, [r2], #4
	add sb, sb, r0
	add sl, sl, lr
	ldr r0, [r2], #4
	ldr lr, [r2], #4
	add fp, fp, r0
	add ip, ip, lr
	mov r5, r5, asr #1
	mov r6, r6, asr #1
	mov r7, r7, asr #1
	mov r8, r8, asr #1
	mov sb, sb, asr #1
	mov sl, sl, asr #1
	mov fp, fp, asr #1
	mov ip, ip, asr #1
	ldmia sp!, {r0, pc}
	.word 0x00000000
	.word 0x00000000
_L770:
	stmdb sp!, {r1, r4, lr}
	ldr r2, [r1, #0x6c]
	cmp r2, #1
	add r0, r3, #0x200
	str r4, [r1, #0x74]
	addne r3, r1, #0x28
	addne r4, r3, #0x20
	addeq r4, r1, #0x28
	addeq r3, r4, #0x20
	stmia r3, {r5, r6, r7, r8, sb, sl, fp, ip}
	mov r2, r4
	bl .L_0219070c
	stmdb sp!, {r5, r6, r7, r8, sb, sl, fp, ip}
	mov r2, r4
	bl .L_0219070c
	mov r2, #0x20
	bl .L_0219043c
	ldmia sp!, {r5, r6, r7, r8, sb, sl, fp, ip}
	mov r2, #0x20
	bl .L_0219043c
	mov r2, r3
	bl .L_0219070c
	mov r2, #0x20
	bl .L_0219043c
	ldmia r3, {r5, r6, r7, r8, sb, sl, fp, ip}
	mov r2, #0x20
	bl .L_0219043c
	ldmia sp!, {r1, r4, pc}
_L7e0:
	add r8, r1, #0x8c0
	ldr r7, [r8, #0xc30]
	mov sb, #1
	str r7, [r1, #0x68]
	mov r7, #8
	str sb, [r1, #0x6c]
	add r8, r1, #0x78
	mov sb, #0
_L800:
	str sb, [r8], #4
	subs r7, r7, #1
	bne _L800
	mov pc, lr
_L810:
	stmdb sp!, {r4, r5, r6, r7, r8, sb, sl, fp, ip, lr}
	mov r1, r0
	ldr r0, [r0]
	ldrh r5, [r0], #2
	mov r6, r5, lsr #9
	cmp r6, #0x7f
	bleq _L920
	blne _L960
	ldr r7, [r1, #0x6c]
	eor r7, r7, #1
	str r7, [r1, #0x6c]
	add r3, r1, #0x1000
	ldr r2, [r1, #4]
	mov r0, #0x80
	ldr r5, [pc, #0x168]
	ldr r6, [pc, #0x168]
	ldr r3, [r3, #0x4f4]
_L854:
	ldr r7, [r4], #4
	cmp r7, r5
	movgt r7, r5
	cmp r7, r6
	movlt r7, r6
	strh r7, [r2], r3
	subs r0, r0, #1
	bne _L854
	ldrb r0, [r1, #0x73]
	add r2, pc, #0xe
	ldrb r0, [r2, r0]
	ldmia sp!, {r4, r5, r6, r7, r8, sb, sl, fp, ip, lr}
	bx lr
	.word 0x10040c05
	.word 0x0e141403
	.word 0x00000a0c
	.word 0x00000000
	.word 0x00000000
	.word 0x00000000
_L8a0:
	stmdb sp!, {r1, lr}
	add ip, r1, #0x70
	mov r6, r5, lsr #6
	and r6, r6, #7
	and r5, r5, #0x3f
	strb r5, [ip], #1
	ldrh r5, [r0], #2
	add r8, r1, #0x14c0
	mov r7, r5, lsr #0xe
	and r7, r7, #3
	add r6, r8, r6, lsl #1
	ldrsh r8, [r6]
	ldr r6, [r1, #0x68]
	mov fp, r5, lsr #0xc
	mul r6, r8, r6
	mov sl, r5, lsr #6
	mov r6, r6, asr #0xd
	str r6, [r1, #0x68]
	and sl, sl, #0x3f
	strb sl, [ip], #1
	and r5, r5, #0x3f
	strb r5, [ip]
	ands fp, fp, #3
	strb fp, [r1, #0x73]
	beq _L1e0
	sub sl, pc, #0x86
	add sl, sl, fp, lsl #1
	ldrb r8, [sl]
	ldrb sb, [sl, #1]
	b _L190
	.word 0x00000000
	.word 0x00000000
_L920:
	stmdb sp!, {r1, lr}
	bl _L7e0
	add r4, r1, #0xc0
	add r3, r4, #0x400
	bl _L010
	bl _L8a0
	add r2, r1, #0x8c0
	add r2, r2, #0xc10
	bl _L270
	add r2, r1, #0x48
	stmia r2, {r5, r6, r7, r8, sb, sl, fp, ip}
	str r4, [r1, #0x74]
	add r0, r3, #0x200
	mov r2, #0x80
	bl .L_0219043c
	ldmia sp!, {r1, pc}
_L960:
	stmdb sp!, {r1, lr}
	mov r7, #0x400
	ldr r2, [r1, #0x6c]
	add r8, r1, #0xc0
	mla r3, r2, r7, r8
	eor r2, r2, #1
	mla r4, r2, r7, r8
	mov r8, r3
	add r7, r4, #0x200
	mov r2, #0x20
_L988:
	ldmia r7!, {sb, sl, fp, ip}
	stmia r8!, {sb, sl, fp, ip}
	subs r2, r2, #1
	bne _L988
	cmp r6, #0x7e
	bleq _L010
	blne _L040
	bl _L8a0
	add r2, r1, #8
	bl _L270
	bl _L770
	ldmia sp!, {r1, pc}
	.word 0x00007fff
	.word 0xffff8000
