	.section .text
	.thumb

#if defined(eur)
	.global data_0200038c
data_0200038c:
	.short 0xbb7a
#elif defined(jpn)
	.global data_02000214
data_02000214:
	.short 0x1d82
#else
	.global data_0200038c
data_0200038c:
	.short 0x7a26
#endif

	.global RLUnCompReadByCallbackWrite16bit
RLUnCompReadByCallbackWrite16bit:
	swi 0x15
	bx lr

#if defined(eur)
	.global data_02000392
data_02000392:
	.short 0x7439
#elif defined(jpn)
	.global data_0200021a
data_0200021a:
	.short 0x64d9
#else
	.global data_02000392
data_02000392:
	.short 0xbc97
#endif
