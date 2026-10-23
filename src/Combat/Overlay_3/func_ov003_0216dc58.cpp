#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0216dc58_4800 = 0x1150 };
enum { Enum_ov003_0216dc58_4900 = 0x11b4 };
#else
enum { Enum_ov003_0216dc58_4800 = 0x12c0 };
enum { Enum_ov003_0216dc58_4900 = 0x1324 };
#endif

extern "C" void __clear(void* arg0, int arg1);

struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);

extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

extern "C" int func_02042058(char* arg0, const char* arg1);

struct Struct_0205d5d0;
#if defined(jpn)
#endif
// USA: func_ov003_0216dc58
extern "C" ARM void func_ov003_0216dc58(char* arg0) {
	char var0[0x100];
	char var1[0x40];
	int var2;
	__clear(var0, 0x100);
	__clear(var1, 0x40);
	if (*(int*)(arg0 + 0x10) == 2) {
		int var3 = func_0205d794(*(struct Struct_0205c570**)(arg0 + Enum_ov003_0216dc58_4800));
		func_02041c08(var0, var3, 8, 5, 5, 5);
	}
	var2 = func_020e0434((struct Struct_0201099c_3*)(arg0 + Enum_ov003_0216dc58_4900), 0x5c);
	func_02042058(var0, (const char*)var2);
#if defined(jpn)
	func_0205d5d0((struct Struct_0205d5d0*)(*(void**)(arg0 + Enum_ov003_0216dc58_4800)), 0, (int)var0, 1);
#else
	func_0205d5d0((struct Struct_0205d5d0*)(*(void**)(arg0 + Enum_ov003_0216dc58_4800)), 0, (int)var0, 1, 0);
#endif
}
