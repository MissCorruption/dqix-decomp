#include <globaldefs.h>

#if defined(jpn)
static const int frameReadIndexOffset = 0xc0;
static const int frameBufferCountOffset = 0xa4;
#else
static const int frameReadIndexOffset = 0xc4;
static const int frameBufferCountOffset = 0xa8;
#endif

// USA: func_ov016_0218f2f0
extern "C" ARM int func_ov016_0218f2f0(void* arg0) {
	char* var0 = (char*)arg0;
	unsigned int var1 = *(unsigned int*)(var0 + 0x9c);
	unsigned int var2 = *(unsigned int*)(var0 + 0xa0);
	if (var1 >= var2) return 0;
	*(unsigned int*)(var0 + 0x9c) = var1 + 1;
	unsigned int var3 = *(unsigned int*)(var0 + frameReadIndexOffset) + 1;
	*(unsigned int*)(var0 + frameReadIndexOffset) = var3;
	if (var3 == *(unsigned int*)(var0 + frameBufferCountOffset)) {
		*(unsigned int*)(var0 + frameReadIndexOffset) = 0;
	}
	return 1;
}
