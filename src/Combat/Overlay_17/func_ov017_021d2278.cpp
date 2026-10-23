#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0202c1a4 {
	char unknown_0_[0x1038];
	signed char unknown_1038_[16];
};
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void* func_0205ec34(void* arg0);

struct Struct_ov017_021d2278 {
	unsigned short unknown_0_0_ : 4;
	unsigned short unknown_0_4_ : 2;
	unsigned short unknown_0_6_ : 10;
};

// USA: func_ov017_021d2278
extern "C" ARM void func_ov017_021d2278(void* arg0, char* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
	signed char var0 = func_0202c1a4(arg4);
	struct Struct_ov017_021d2278* var1 = (struct Struct_ov017_021d2278*)(arg1 + 0x12);
	if (var0 != var1->unknown_0_4_) return;
	int var2 = var1->unknown_0_6_ * 14;
	unsigned char var3 = var1->unknown_0_0_;
	char* var4 = (char*)func_0205ec34((void*)(int)var1->unknown_0_0_);
	memcpy(var4 + 0x2cc + (unsigned char)var2, arg1 + 4, var3);
}
