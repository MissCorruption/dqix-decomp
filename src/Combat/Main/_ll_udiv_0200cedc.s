.section .text
	.arm

	.global _ll_udiv

// USA: func_0200cedc
_ll_udiv:
	stmdb sp!, {r4, r5, r6, r7, r11, ip, lr}
	mov r4, #0
	b .+0xc
