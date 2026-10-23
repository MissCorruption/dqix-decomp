#include <globaldefs.h>
#include "Util/Random.h"

extern "C" void* func_ov000_02153710(void*, short);
extern "C" int func_ov000_02159dbc(void*, short);

struct Struct_ov024_021d98b8 { struct Random* unknown_0_; };

// USA: func_ov024_021d98b8
extern "C" ARM int func_ov024_021d98b8(struct Struct_ov024_021d98b8* arg0, unsigned short arg1, int arg2, int arg3, int arg4, int arg5) {
#if defined(jpn)
 enum { Enum_ov024_021d98b8_2384=0x8b8 };
#else
 enum { Enum_ov024_021d98b8_2384=0x950 };
#endif
	int var0 = 0;
	if (arg1 <= 3) {
		var0 = 1;
	}
	float var1;
	if (var0) {
		char* var2 = (char*)func_ov000_02153710(arg0->unknown_0_, (short)arg1);
		if (var2 == NULL) {
			return arg5;
		}
		int var3 = *(int*)(var2 + Enum_ov024_021d98b8_2384);
		unsigned short var4 = *(unsigned short*)(var2 + var3 * 2 + 0x16c);
		var1 = var4;
	} else {
		int var5 = func_ov000_02159dbc(arg0->unknown_0_, (short)arg1);
		var1 = var5;
	}
	float var6;
	struct Random* var7;
	float var8 = 90.0f + var1 * (var1 / 22.0f);
	var7 = arg0->unknown_0_;
	float var9 = NextRandomFloatBetween(var7, -0.1f, 0.1f);
	var6 = var8 + var8 * var9;
	float var10 = NextRandomFloatBetween(var7, 0.9f, 1.1f);
	float var11 = 200.0f * var10;
	if (var6 < var11) {
		var6 = var11;
	}
	return (int)var6;
}
