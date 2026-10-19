	.section .text
	.arm

	.global func_ov016_0218f6b8

// USA: func_ov016_0218f6b8
func_ov016_0218f6b8:
	stmdb sp!, {r4, r5, r6, r7, r8, sb, sl, fp, ip, lr}
	ldr r8, [r0, #0xc]
	ldr sb, [r0, #0x10]
	ldr sl, [r0, #0x14]
	ldr r3, [r0, #0x18]
	mov r4, #0x100
	rsb r5, sb, r4, lsl #1
	sub r6, r4, sb, lsr #1
	sub r7, r8, sb
	mov r7, r7, lsl #1
	stmdb sp!, {r5, r6, r7, r8, sb, sl}
	ldr r1, [r0, #4]
	ldr r2, [r0, #8]
	ldr r0, [r0]
	add r3, r3, #0x100
	add lr, r2, r8
_L040:
	str sl, [sp, #-4]!
	ldr sl, [sp, #0x14]
_L048:
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	ldrb r5, [r1], #0x80
	ldrb r6, [r1], #-0x7f
	ldrb r4, [r0], #1
	sub r5, r5, #0x80
	sub r6, r6, #0x80
	add r7, r3, r6
	sub r6, r5, r6
	add r6, r6, r3
	sub r5, r6, r5, lsl #1
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	sub r4, r4, #4
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #1
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [r2], #4
	sub r4, r4, #4
	ldrb r8, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	ldrb r4, [r0], #-0xff
	add r8, fp, r8, lsl #5
	add r8, r8, ip, lsl #10
	orr r8, r8, #0x8000
	ldrb sb, [r7, r4]
	ldrb fp, [r6, r4]
	ldrb ip, [r5, r4]
	add r8, r8, sb, lsl #21
	add r8, r8, fp, lsl #16
	add r8, r8, ip, lsl #26
	orr r8, r8, #0x80000000
	str r8, [lr], #4
	subs sl, sl, #0x10
	bgt _L048
	ldr sl, [sp], #4
	ldr r5, [sp]
	ldr r6, [sp, #4]
	ldr r7, [sp, #8]
	add r0, r0, r5
	add r1, r1, r6
	add r2, r2, r7
	add lr, lr, r7
	subs sl, sl, #2
	bgt _L040
	add sp, sp, #0x18
	ldmia sp!, {r4, r5, r6, r7, r8, sb, sl, fp, ip, pc}
