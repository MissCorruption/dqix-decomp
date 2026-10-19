	.section .text
	.arm

	.global DecompressC

// USA: func_020ca95c
DecompressC:
	stmdb sp!, {r4, r5, r6, r7, r8}
	ldr r3, [r0]
	ldr r4, [r0, #4]
	ldrb r5, [r0, #0xb]
	ldrh r6, [r0, #0xc]
_L014:
	cmp r4, #0
	ble _L098
	tst r5, #0x80
	bne _L04c
_L024:
	cmp r6, #0
	ble _L074
	sub r6, r6, #1
	ldrb r7, [r1], #1
	sub r4, r4, #1
	swpb r8, r7, [r3]
	add r3, r3, #1
	subs r2, r2, #1
	beq _L098
	b _L024
_L04c:
	cmp r6, #0
	ble _L074
	ldrb r7, [r1], #1
_L058:
	sub r4, r4, #1
	swpb r8, r7, [r3]
	add r3, r3, #1
	subs r6, r6, #1
	bgt _L058
	subs r2, r2, #1
	beq _L098
_L074:
	ldrb r5, [r1], #1
	and r6, r5, #0x7f
	tst r5, #0x80
	bne _L088
	b _L08c
_L088:
	add r6, r6, #2
_L08c:
	add r6, r6, #1
	subs r2, r2, #1
	bne _L014
_L098:
	str r3, [r0]
	str r4, [r0, #4]
	strb r5, [r0, #0xb]
	strh r6, [r0, #0xc]
	mov r0, r4
	ldmia sp!, {r4, r5, r6, r7, r8}
	bx lr
