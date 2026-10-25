	.section .text
	.thumb

#if defined(eur)
	.global data_02000438
data_02000438:
	.short 0xb260
#elif defined(jpn)
	.global data_020002d0
data_020002d0:
	.short 0x6350
#endif

	.global VBlankIntrWait
VBlankIntrWait:
	mov r2, #0
	swi 5
	bx lr

#if defined(eur)
#elif defined(jpn)
#else
	.global data_02000416
data_02000416:
	.short 0xde4d
#endif
