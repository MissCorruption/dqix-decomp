	.section .text
	.thumb

#if defined(eur)
	.global data_02000730
data_02000730:
	.short 0xb277
#elif defined(jpn)
	.global data_0200070c
data_0200070c:
	.short 0x6bb8
#else
	.global data_02000730
data_02000730:
	.short 0x3acc
#endif

	.global Sqrt
Sqrt:
	swi 0xd
	bx lr

#if defined(eur)
	.global data_02000736
data_02000736:
	.short 0xd963
#elif defined(jpn)
	.global data_02000712
data_02000712:
	.short 0xda66
#else
	.global data_02000736
data_02000736:
	.short 0x1c2f
#endif
