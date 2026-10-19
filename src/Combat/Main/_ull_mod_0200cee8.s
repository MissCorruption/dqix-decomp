	.section .text
	.arm

	.global _ull_mod

// USA: func_0200cee8
_ull_mod:
	stmdb sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, #1
	orrs r5, r3, r2
	bne _L18
	ldmia sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
_L18:
	orrs r5, r1, r3
	bne . - 0x164
	mov r1, r2
	.word 0xeb000091
	cmp r4, #0
	movne r0, r1
	mov r1, #0
	ldmia sp!, {r4, r5, r6, r7, r11, ip, lr}
	bx lr
