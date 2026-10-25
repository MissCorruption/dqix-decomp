	.section .text
	.thumb

#if defined(jpn)
	.global data_020000e0
data_020000e0:
	.short 0xa769
#endif

	.global LZ77UnCompReadNormalWrite8bit
LZ77UnCompReadNormalWrite8bit:
	swi 0x11
	bx lr

#if defined(jpn)
	.global data_020000e6
data_020000e6:
	.short 0x0cf9
#endif
