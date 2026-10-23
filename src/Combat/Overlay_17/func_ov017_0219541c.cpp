#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0202b2f0;
extern "C" void* func_0202ae18(void);
extern "C" void func_0202c600(struct Struct_0202b2f0* arg0, int arg1);
extern "C" void func_ov017_02195214(void* arg0, void* arg1);

// USA: func_ov017_0219541c
extern "C" ARM void func_ov017_0219541c(void* arg0, int arg1, char* arg2) {
#if defined(jpn)
 enum {Enum_ov017_0219541c_241=0xd1, Enum_ov017_0219541c_16896=0x4000, Enum_ov017_0219541c_1052=0x16c};
#else
 enum {Enum_ov017_0219541c_241=0xf1, Enum_ov017_0219541c_16896=0x4200, Enum_ov017_0219541c_1052=0x41c};
#endif
	void* var0 = func_0202ae18();
	int var1 = arg1 - 1;
	unsigned char* var2;
	if (var1 < 0) return;
	if (var1 > 2) return;
	func_ov017_02195214((unsigned char*)arg0 + Enum_ov017_0219541c_241 + Enum_ov017_0219541c_16896 + var1 * 15, arg2);
	func_0202c600((struct Struct_0202b2f0*)var0, arg1);
	var2 = *(unsigned char**)((char*)arg0 + 0x4000 + Enum_ov017_0219541c_1052);
	if (var2[0] != 1) return;
	if (var2[2] != arg1) return;
	strcpy((char*)var2 + 4, arg2 + 2);
}
