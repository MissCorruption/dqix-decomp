#include <globaldefs.h>

typedef void (*Type_ov017_021d4bc8)(void*, int);

struct Struct_ov017_021d4bc8_2 { unsigned char unknown_0_[4]; int unknown_4_; Type_ov017_021d4bc8* unknown_8_; };
struct Struct_ov017_021d4bc8 { unsigned char unknown_0_[4]; int unknown_4_; unsigned char unknown_8_[1]; };

// USA: func_ov017_021d4bc8
extern "C" ARM void func_ov017_021d4bc8(Struct_ov017_021d4bc8_2* arg0, Struct_ov017_021d4bc8* arg1, int arg2) {
	int var0 = arg1->unknown_4_;
	if (var0 < 0) return;
	if (var0 >= arg0->unknown_4_) return;
	Type_ov017_021d4bc8 var1 = arg0->unknown_8_[var0];
	if (!var1) return;
	var1(&arg1->unknown_8_, arg2 - 1);
}
