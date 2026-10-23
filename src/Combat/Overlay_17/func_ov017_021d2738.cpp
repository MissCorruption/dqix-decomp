#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d2738 { unsigned char unknown_0_; unsigned char unknown_1_; };
struct Struct_ov017_021d2738_2 { unsigned char unknown_0_; unsigned char unknown_1_[3]; Struct_ov017_021d2738 unknown_4_; unsigned char unknown_6_[14]; };

// USA: func_ov017_021d2738
extern "C" ARM void func_ov017_021d2738(unsigned char arg0, unsigned char arg1) {
	Struct_ov017_021d2738_2 var0;
	void* var1 = func_0202ae24();
	var0.unknown_0_ = 0x21;
	Struct_ov017_021d2738* var2 = &var0.unknown_4_;
	var2->unknown_0_ = arg0;
	var2->unknown_1_ = arg1;
	func_0205e330(var1, &var0, 0);
}
