	.section .text
	.thumb

#if defined(eur)
	.global data_020006a8
data_020006a8:
	.short 0xc31f
#elif defined(jpn)
	.global data_02000428
data_02000428:
	.short 0xa307
#else
	.global data_020006a8
data_020006a8:
	.short 0xce16
#endif

	.global Div
Div:
	swi 9
	bx lr

#if defined(eur)
	.global data_020006ae
data_020006ae:
	.short 0x170c
#elif defined(jpn)
	.global data_0200042e
data_0200042e:
	.short 0xafd2
#else
	.global data_020006ae
data_020006ae:
	.short 0xbe35
#endif
