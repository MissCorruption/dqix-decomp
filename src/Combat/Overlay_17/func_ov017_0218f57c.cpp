#include <globaldefs.h>

#pragma optimize_for_size off
// USA: func_ov017_0218f57c
extern "C" ARM void func_ov017_0218f57c(void* arg0, int arg1) {
#if defined(jpn)
	enum { Enum_ov017_0218f57c_336 = 0x144 };
#else
	enum { Enum_ov017_0218f57c_336 = 0x150 };
#endif
	void* var0 = *(void**)((char*)arg0 + Enum_ov017_0218f57c_336);
	if (!var0) return;
	unsigned char* var1 = (unsigned char*)var0 + 0x56b;
	*var1 = (*var1 & ~0xf) | ((unsigned char)arg1 & 0xf);
}
