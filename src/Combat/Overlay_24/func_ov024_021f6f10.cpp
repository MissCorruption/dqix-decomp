#include <globaldefs.h>

// USA: func_ov024_021f6f10
extern "C" ARM int func_ov024_021f6f10(void* arg0) {
	void* var0 = *(void**)((char*)arg0 + 0x8);
	if (var0 != NULL) {
		unsigned int var1 = *(unsigned short*)((char*)var0 + 0xa);
		unsigned int var2 = (var1 << 0x15) >> 0x1c;
		if (var2 == 0xc) {
			*(float*)((char*)arg0 + 0x1c) = *(float*)((char*)arg0 + 0x14) * 1.5f;
			*(float*)((char*)arg0 + 0x20) = *(float*)((char*)arg0 + 0x18) * 1.5f;
		}
	}
	return 1;
}
