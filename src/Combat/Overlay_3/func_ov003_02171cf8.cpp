#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov003_02171cf8_1840 = 0x62c };
enum { Enum_ov003_02171cf8_15176 = 0x3928 };
enum { Enum_ov003_02171cf8_14076 = 0x34ec };
enum { Enum_ov003_02171cf8_17556 = 0x41e4 };
#else
enum { Enum_ov003_02171cf8_1840 = 0x730 };
enum { Enum_ov003_02171cf8_15176 = 0x3b48 };
enum { Enum_ov003_02171cf8_14076 = 0x36fc };
enum { Enum_ov003_02171cf8_17556 = 0x4494 };
#endif


extern "C" void func_ov017_021b1e24(void* arg0, void* arg1);

struct Struct_ov003_02171cf8 {
	unsigned char unknown_0_;
	char unknown_1_[Enum_ov003_02171cf8_1840 - 0x1];
	unsigned char unknown_730_;
	unsigned char unknown_731_;
	unsigned char unknown_732_;
	unsigned char unknown_733_;
};

// USA: func_ov003_02171cf8
extern "C" ARM void func_ov003_02171cf8(struct Struct_ov003_02171cf8* arg0) {
	char* var0 = (char*)GetGameResources();
	char* var1 = *(char**)(var0 + Enum_ov003_02171cf8_15176);
	char* var2 = *(char**)(var0 + Enum_ov003_02171cf8_14076);
	func_ov017_021b1e24(var1, var2);
	if (*(int*)(var0 + Enum_ov003_02171cf8_17556) != 0) return;
	if (((unsigned char*)var1)[0x28] != 0) {
		arg0->unknown_730_ &= ~0x2;
		arg0->unknown_733_ = 1;
	}
	var0 = (char*)GetGameResources();
	*(int*)(var0 + Enum_ov003_02171cf8_17556) = 1;
	arg0->unknown_0_ = 0;
	arg0->unknown_731_ = 2;
	arg0->unknown_732_ = 3;
}
