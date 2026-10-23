#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2*, int, unsigned int*, unsigned int*);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_0223701c(void*);

struct Struct_ov031_02236f88 { void* unknown_0_[5]; int unknown_14_; };
struct Struct_ov031_02290d04_11 { void* unknown_0_; Struct_ov031_02236f88* unknown_4_; void* unknown_8_; void* unknown_c_; };
extern Struct_ov031_02290d04_11 data_ov031_02290d04;

// USA: func_ov031_02236f88
extern "C" ARM void func_ov031_02236f88(void* arg0) {
	unsigned int var0, var1;
	func_ov031_0223bd28((Struct_ov031_02222f44_2*)data_ov031_02290d04.unknown_4_->unknown_0_[4], 0, &var0, &var1);
	var0 = var0 - 8;
	if ((int)var0 > 0x98) {
		func_ov031_0223bbd8(data_ov031_02290d04.unknown_4_->unknown_0_[4], -1, var0, 0x21);
		return;
	}
	var0 = 0x98;
	func_ov031_0223bbd8(data_ov031_02290d04.unknown_4_->unknown_0_[4], -1, var0, 0x21);
	func_ov031_0223e2b8(arg0, (int)func_ov031_0223701c);
}
