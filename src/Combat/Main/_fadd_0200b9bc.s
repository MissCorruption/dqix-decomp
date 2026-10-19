	.section .text
	.arm

	.global _fadd

// USA: func_0200b9bc
_fadd:
	eors r2, r0, r1
	eormi r1, r1, #0x80000000
	bmi . + 0x10ec
	subs ip, r0, r1
	sublo r0, r0, ip
	addlo r1, r1, ip
	mov r2, #0x80000000
	mov r3, r0, lsr #0x17
	orr r0, r2, r0, lsl #8
	ands ip, r3, #0xff
	cmpne ip, #0xff
	beq _L0a0
	mov ip, r1, lsr #0x17
	orr r1, r2, r1, lsl #8
	ands r2, ip, #0xff
	beq _L0e0
_L040:
	subs ip, r3, ip
	beq _L058
	rsb r2, ip, #0x20
	movs r2, r1, lsl r2
	mov r1, r1, lsr ip
	orrne r1, r1, #1
_L058:
	adds r0, r0, r1
	blo _L078
	and r1, r0, #1
	orr r0, r1, r0, rrx
	add r3, r3, #1
	and r2, r3, #0xff
	cmp r2, #0xff
	beq _L1e8
_L078:
	ands r1, r0, #0xff
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
_L0a0:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	ands r3, r3, #0xff
	beq _L104
	movs r0, r0, lsl #1
	bne _L214
	mov ip, r1, lsr #0x17
	mov r1, r1, lsl #9
	ands ip, ip, #0xff
	beq _L208
	cmp ip, #0xff
	blt _L208
	cmp r1, #0
	beq _L208
	b _L214
_L0e0:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	and r3, r3, #0xff
	ands ip, ip, #0xff
	beq _L160
_L0f8:
	movs r1, r1, lsl #1
	bne _L214
	b _L208
_L104:
	movs r0, r0, lsl #1
	beq _L13c
	mov r3, #1
	mov r0, r0, lsr #1
	mov ip, r1, lsr #0x17
	mov r1, r1, lsl #8
	ands ip, ip, #0xff
	beq _L160
	cmp ip, #0xff
	beq _L0f8
	orr r1, r1, #0x80000000
	orr r3, r3, r2, lsr #23
	orr ip, ip, r2, lsr #23
	b _L040
_L13c:
	mov r3, r1, lsr #0x17
	mov r0, r1, lsl #9
	ands r3, r3, #0xff
	beq _L1c8
	cmp r3, #0xff
	blt _L1c8
	cmp r0, #0
	beq _L208
	b _L200
_L160:
	movs r1, r1, lsl #1
	beq _L1d0
	mov r1, r1, lsr #1
	mov ip, #1
	orr r3, r3, r2, lsr #23
	orr ip, ip, r2, lsr #23
	cmp r0, #0
	bmi _L040
	adds r0, r0, r1
	blo _L194
	and r1, r0, #1
	orr r0, r1, r0, rrx
	add ip, ip, #1
_L194:
	cmp r0, #0
	subge ip, ip, #1
	ands r1, r0, #0xff
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, ip, lsl #23
	bxeq lr
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
_L1c8:
	mov r0, r1
	bx lr
_L1d0:
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
_L1e8:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
_L200:
	mvn r0, #0x80000000
	bx lr
_L208:
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
_L214:
	mvn r0, #0x80000000
	bx lr
