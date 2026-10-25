	.section .text
	.thumb

#if defined(jpn)
	.global data_020001b4
data_020001b4:
	.short 0xe867
#endif

	.global CpuSet
CpuSet:
	swi 0xb
	bx lr

#if defined(jpn)
	.global data_020001ba
data_020001ba:
	.short 0xea6a
#endif
