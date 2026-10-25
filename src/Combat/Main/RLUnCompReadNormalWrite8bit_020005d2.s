	.section .text
	.thumb

#if defined(eur)
#elif defined(jpn)
	.global data_020005dc
data_020005dc:
	.short 0x7fd6
#else
	.global data_020005d0
data_020005d0:
	.short 0x82d3
#endif

	.global RLUnCompReadNormalWrite8bit
RLUnCompReadNormalWrite8bit:
	swi 0x14
	bx lr

#if defined(eur)
#elif defined(jpn)
	.global data_020005e2
data_020005e2:
	.short 0x9b1e
#else
	.global data_020005d6
data_020005d6:
	.short 0xbd9d
#endif
