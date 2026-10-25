	.section .text
	.thumb

#if defined(eur)
	.global data_02000268
data_02000268:
	.short 0x5c51
#elif defined(jpn)
#else
	.global data_02000268
data_02000268:
	.short 0x66d3
#endif

	.global BitUnPack
BitUnPack:
	swi 0x10
	bx lr

#if defined(eur)
	.global data_0200026e
data_0200026e:
	.short 0xf73a
#elif defined(jpn)
#else
	.global data_0200026e
data_0200026e:
	.short 0xe958
#endif
