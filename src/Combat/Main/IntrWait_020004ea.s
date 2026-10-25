	.section .text
	.thumb

#if defined(eur)
#elif defined(jpn)
#else
	.global data_020004e8
data_020004e8:
	.short 0x3bf4
#endif

	.global IntrWait
IntrWait:
	mov r2, #0
	swi 4
	bx lr

#if defined(eur)
	.global data_020004f0
data_020004f0:
	.short 0xca00
#elif defined(jpn)
	.global data_020004a2
data_020004a2:
	.short 0x56a8
#endif
