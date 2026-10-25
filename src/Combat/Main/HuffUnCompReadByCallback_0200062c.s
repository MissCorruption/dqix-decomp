	.section .text
	.thumb

#if defined(eur)
	.global data_020004b0
data_020004b0:
	.short 0x2dc6
#elif defined(jpn)
	.global data_02000140
data_02000140:
	.short 0xaa57
#endif

	.global HuffUnCompReadByCallback
HuffUnCompReadByCallback:
	swi 0x13
	bx lr

#if defined(eur)
	.global data_02000630
data_02000630:
	.short 0x42e2
#elif defined(jpn)
	.global data_02000146
data_02000146:
	.short 0x30c8
#endif
