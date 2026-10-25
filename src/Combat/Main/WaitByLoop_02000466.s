	.section .text
	.thumb

#if defined(eur)
#elif defined(jpn)
#else
	.global data_02000464
data_02000464:
	.short 0x932c
#endif

	.global WaitByLoop
WaitByLoop:
	swi 3
	bx lr

#if defined(eur)
#elif defined(jpn)
#else
	.global data_0200046a
data_0200046a:
	.short 0x6e48
#endif
