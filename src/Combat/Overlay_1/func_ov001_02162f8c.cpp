#include <globaldefs.h>
#include "Resource/Brightness.h"

struct Struct_02015438;

extern "C" void func_ov017_021d6134(void* arg0, int arg1);
extern "C" int func_02046b24(struct Struct_02015438** arg0);

// USA: func_ov001_02162f8c
extern "C" ARM int func_ov001_02162f8c(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02162f8c_1792 = 0x4f0 };
#else
    enum { Enum_ov001_02162f8c_1792 = 0x700 };
#endif
	unsigned int* var0 = (unsigned int*)GetGameResources();
	if (TestFlags00((GameResources*)var0, 0x10) != 0) {
		func_ov017_021d6134(arg0, 0);
		return 1;
	}
	struct Struct_02015438** var1 = *(struct Struct_02015438***)((char*)var0 + 0x3000 + Enum_ov001_02162f8c_1792);
	int var2 = func_02046b24(var1);
	int var3 = (var2 != 0x13);
	func_ov017_021d6134(arg0, var3 == 0);
	if (var3) {
		SetFlags00((GameResources*)var0, 0x10);
	}
	return 1;
}
