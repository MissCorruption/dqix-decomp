	.section .text
	.thumb

#if defined(eur)
	.global data_02000068
data_02000068:
	.short 0x6cc2
#elif defined(jpn)
#else
	.global data_02000068
data_02000068:
	.short 0xd5bb
#endif

	.global GetCRC16
GetCRC16:
	swi 0xe
	bx lr

#if defined(eur)
	.global data_0200006e
data_0200006e:
	.short 0x332c
#elif defined(jpn)
#else
	.global data_0200006e
data_0200006e:
	.short 0xca0a
#endif
