	.section .text
	.arm

	.global _frsb
	.global _fsub

_frsb:
	eor r0, r0, r1
	eor r1, r0, r1
	eor r0, r0, r1

// USA: func_0200caa4
_fsub:
	eors r2, r0, r1
	eormi r1, r1, #0x80000000
	bmi . - 0x10e4
	subs ip, r0, r1
	eorlo ip, ip, #0x80000000
	sublo r0, r0, ip
	addlo r1, r1, ip
	mov r2, #0x80000000
	mov r3, r0, lsr #0x17
	orr r0, r2, r0, lsl #8
	ands ip, r3, #0xff
	cmpne ip, #0xff
	beq _L128
	mov ip, r1, lsr #0x17
	orr r1, r2, r1, lsl #8
	ands r2, ip, #0xff
	beq _L168
_L044:
	subs ip, r3, ip
	beq _L08c
	rsb r2, ip, #0x20
	movs r2, r1, lsl r2
	mov r1, r1, lsr ip
	orrne r1, r1, #1
	subs r0, r0, r1
	bpl _L0d0
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
_L08c:
	subs r0, r0, r1
	beq _L234
	mov r2, r3, lsl #0x17
	and r2, r2, #0x80000000
	bic r3, r3, #0x100
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
	cmp r3, #0
	bgt _L0c0
	rsb r3, r3, #9
	orr r0, r2, r0, lsr r3
	bx lr
_L0c0:
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
_L0d0:
	mov r2, r3, lsl #0x17
	and r2, r2, #0x80000000
	bic r3, r3, #0x100
	clz ip, r0
	movs r0, r0, lsl ip
	sub r3, r3, ip
	cmp r3, #0
	bgt _L0fc
	rsb r3, r3, #9
	orr r0, r2, r0, lsr r3
	bx lr
_L0fc:
	ands r1, r0, #0xff
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bxeq lr
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
_L128:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	ands r3, r3, #0xff
	beq _L190
	movs r0, r0, lsl #1
	bne _L268
	mov ip, r1, lsr #0x17
	mov r1, r1, lsl #9
	ands ip, ip, #0xff
	beq _L25c
	cmp ip, #0xff
	blt _L25c
	cmp r1, #0
	beq _L270
	b _L268
_L168:
	cmp ip, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	and r3, r3, #0xff
	ands ip, ip, #0xff
	beq _L1f8
_L180:
	eor r2, r2, #0x80000000
	movs r1, r1, lsl #1
	bne _L268
	b _L25c
_L190:
	movs r0, r0, lsl #1
	beq _L1c8
	mov r0, r0, lsr #1
	mov r3, #1
	mov ip, r1, lsr #0x17
	mov r1, r1, lsl #8
	ands ip, ip, #0xff
	beq _L1f8
	cmp ip, #0xff
	beq _L180
	orr r1, r1, #0x80000000
	orr r3, r3, r2, lsr #23
	orr ip, ip, r2, lsr #23
	b _L044
_L1c8:
	mov r3, r1, lsr #0x17
	mov r0, r1, lsl #9
	ands r2, r3, #0xff
	beq _L1ec
	cmp r2, #0xff
	blt _L214
	cmp r0, #0
	bne _L254
	b _L25c
_L1ec:
	cmp r0, #0
	beq _L234
	b _L214
_L1f8:
	movs r1, r1, lsl #1
	beq _L21c
	mov r1, r1, lsr #1
	mov ip, #1
	orr ip, ip, r2, lsr #23
	orr r3, r3, r2, lsr #23
	b _L044
_L214:
	mov r0, r1
	bx lr
_L21c:
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
_L234:
	mov r0, #0
	bx lr
	.word 0xe3500000
	.word 0xa2533001
	.word 0xe0800000
	.word 0xe1a004a0
	.word 0xe1800b83
	.word 0xe12fff1e
_L254:
	mvn r0, #0x80000000
	bx lr
_L25c:
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
_L268:
	mvn r0, #0x80000000
	bx lr
_L270:
	mvn r0, #0x80000000
	bx lr
