#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d257c { unsigned char unknown_0_; unsigned char unknown_1_[3]; int unknown_4_; };
struct Struct_ov017_021d257c_2 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov017_021d257c unknown_4_; unsigned char unknown_c_[8]; };

// USA: func_ov017_021d257c
extern "C" ARM void func_ov017_021d257c(unsigned char arg0, int arg1) {
	Struct_ov017_021d257c_2 var0;
	void* var1 = func_0202ae24();
	var0.unknown_0_ = 0x1f;
	Struct_ov017_021d257c* var2 = &var0.unknown_4_;
	var2->unknown_0_ = arg0;
	var2->unknown_4_ = arg1;
	func_0205e330(var1, &var0, 0);
}
