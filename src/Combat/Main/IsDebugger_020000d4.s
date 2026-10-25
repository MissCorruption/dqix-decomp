	.section .text
	.thumb

#if defined(jpn)
	.global data_020006a0
data_020006a0:
	.short 0x01aa
#endif

	.global IsDebugger
IsDebugger:
	swi 0xf
	bx lr

#if defined(jpn)
	.global data_020006a6
data_020006a6:
	.short 0x0042
#endif
