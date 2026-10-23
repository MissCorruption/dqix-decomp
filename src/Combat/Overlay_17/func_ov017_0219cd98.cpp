#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_0219cd98_14012 = 0x34ac };
#else
enum { Enum_ov017_0219cd98_14012 = 0x36bc };
#endif

extern "C" void* func_ov017_0219c6f4(void*);

// USA: func_ov017_0219cd98
extern "C" ARM void func_ov017_0219cd98(void* arg0) {
	void* var0 = *(void**)((char*)arg0 + Enum_ov017_0219cd98_14012);
	if (!var0) return;
	void* var1 = func_ov017_0219c6f4(var0);
	if (var1) *((unsigned char*)var1 + 0x2) = 1;
}
