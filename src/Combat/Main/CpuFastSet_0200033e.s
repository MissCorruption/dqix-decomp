	.section .text
	.thumb

#if defined(eur)
	.global data_0200033c
data_0200033c:
	.short 0xd186
#elif defined(jpn)
	.global data_02000510
data_02000510:
	.short 0xd043
#else
	.global data_0200033c
data_0200033c:
	.short 0xdc80
#endif

	.global CpuFastSet
CpuFastSet:
	swi 0xc
	bx lr

#if defined(eur)
	.global data_02000342
data_02000342:
	.short 0x9c27
#elif defined(jpn)
	.global data_02000516
data_02000516:
	.short 0x36e6
#else
	.global data_02000342
data_02000342:
	.short 0xff76
#endif
