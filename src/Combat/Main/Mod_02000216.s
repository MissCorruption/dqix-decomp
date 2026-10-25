	.section .text
	.thumb

#if defined(eur)
	.global data_02000214
data_02000214:
	.short 0x5922
#elif defined(jpn)
#else
	.global data_02000214
data_02000214:
	.short 0x0f64
#endif

	.global Mod
Mod:
	swi 9
	add r0, r1, #0
	bx lr

#if defined(jpn)
	.global data_020003aa
data_020003aa:
	.short 0x1eaf
#endif
