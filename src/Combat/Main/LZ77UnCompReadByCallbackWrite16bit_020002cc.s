	.section .text
	.thumb

#if defined(eur)
	.global data_02000108
data_02000108:
	.short 0x9876
#endif

	.global LZ77UnCompReadByCallbackWrite16bit
LZ77UnCompReadByCallbackWrite16bit:
	swi 0x12
	bx lr

#if defined(eur)
	.global data_020002d0
data_020002d0:
	.short 0x3cc3
#endif
