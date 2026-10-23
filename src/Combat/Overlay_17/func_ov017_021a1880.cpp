#include <globaldefs.h>

#if defined(jpn)
#define func_ov023_021e3134 func_ov023_021e348c
#endif

extern "C" void func_ov023_021e3134(void*);

// USA: func_ov017_021a1880
extern "C" ARM void func_ov017_021a1880(void* arg0) {
	unsigned char var0 = *((unsigned char*)arg0 + 0x22);
	if (var0 <= 1) return;
	void* var1 = *(void**)((char*)arg0 + 0x1c);
	if (!var1) return;
	func_ov023_021e3134(var1);
}
