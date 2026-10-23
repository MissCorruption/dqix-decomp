#include <globaldefs.h>

#if defined(jpn)
static const int kBufferOffset = 0x4208;
#else
static const int kBufferOffset = 0x44b8;
#endif

// USA: func_ov017_02197324
extern "C" ARM void func_ov017_02197324(unsigned char* arg0, unsigned short arg1) {
	unsigned short* var0 = (unsigned short*)(arg0 + kBufferOffset);
	for (int var1 = 0; var1 < 4; var1++, var0++) {
		if (*var0 == arg1) {
			*var0 = 0;
			return;
		}
	}
}
