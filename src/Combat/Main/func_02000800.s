	.section .text
	.arm

	.extern data_027e0000
	.extern func_01ff8000
	.extern main
	.global Entry

// USA: func_02000800
Entry:
	mov ip, #0x4000000
	str ip, [ip, #0x208]
_L008:
	ldrh r0, [ip, #6]
	cmp r0, #0
	bne _L008
	bl . + 0x29c
	mov r0, #0x13
	msr cpsr_c, r0
	ldr r0, [pc, #0x108]
	add r0, r0, #0x3fc0
	mov sp, r0
	mov r0, #0x12
	msr cpsr_c, r0
	ldr r0, [pc, #0xf4]
	add r0, r0, #0x3fc0
	sub r0, r0, #0x40
	sub sp, r0, #4
	tst sp, #4
	beq _L050
	b _L054
_L050:
	sub sp, sp, #4
_L054:
	ldr r1, [pc, #0xd8]
	sub r1, r0, r1
	mov r0, #0x1f
	msr cpsr_fsxc, r0
	sub sp, r1, #4
	mov r0, #0
	ldr r1, [pc, #0xbc]
	mov r2, #0x4000
	bl . + 0xe0
	mov r0, #0
	ldr r1, [pc, #0xb4]
	mov r2, #0x400
	bl . + 0xd0
	mov r0, #0x200
	ldr r1, [pc, #0xa8]
	mov r2, #0x400
	bl . + 0xc0
	ldr r1, [pc, #0xa0]
	ldr r0, [r1, #0x14]
	bl . + 0xd0
	bl . + 0x178
	ldr r0, [pc, #0x90]
	ldr r1, [r0, #0xc]
	ldr r2, [r0, #0x10]
	mov r3, r1
	mov r0, #0
_L0bc:
	cmp r1, r2
	blo _L0c8
	b _L0cc
_L0c8:
	str r0, [r1], #4
_L0cc:
	blo _L0bc
	bic r1, r3, #0x1f
_L0d4:
	mcr p15, 0, r0, c7, c10, 4
	mcr p15, 0, r1, c7, c5, 1
	mcr p15, 0, r1, c7, c14, 1
	add r1, r1, #0x20
	cmp r1, r2
	blt _L0d4
	ldr r1, [pc, #0x50]
	str r0, [r1]
	ldr r1, [pc, #0x34]
	add r1, r1, #0x3fc0
	add r1, r1, #0x3c
	ldr r0, [pc, #0x40]
	str r0, [r1]
	bl . + 0xcf88
	bl . + 0x28c
	bl . + 0xe4b8
	ldr r1, [pc, #0x30]
	ldr lr, [pc, #0x30]
	tst sp, #4
	bne _L128
	b _L12c
_L128:
	sub sp, sp, #4
_L12c:
	bx r1
	.word data_027e0000
	.word 0x00000400
	.word 0x05000000
	.word 0x07000000
	.word 0x02000ba0
	.word 0x027fff9c
	.word func_01ff8000
	.word main
	.word 0xffff0000
