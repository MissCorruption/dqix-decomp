	.section .text
	.thumb

#if defined(jpn)
	.global data_02000648
data_02000648:
	.short 0x20bc
#endif

	.global SoftReset
SoftReset:
	swi 0
	bx lr

#if defined(jpn)
	.global data_0200064e
data_0200064e:
	.short 0x6b47
#endif
