#include <globaldefs.h>

struct Struct_ov031_02211d54 { unsigned char unknown_0_[0xc]; unsigned char unknown_c_; };
struct Struct_ov031_0224e5b4_4 { void* unknown_0_; Struct_ov031_02211d54* unknown_4_; };
extern Struct_ov031_0224e5b4_4 data_ov031_0224e5b4;

extern "C" void func_ov031_02211ca0(void);
extern "C" int func_ov031_02211f24(void);
extern "C" void func_ov031_022130e8(int, int, int, int, int);

// USA: func_ov031_02211d54
extern "C" ARM void func_ov031_02211d54(int arg0, int arg1, int arg2, int arg3, int arg4) {
	func_ov031_02211ca0();
	if (data_ov031_0224e5b4.unknown_4_ != NULL) {
		data_ov031_0224e5b4.unknown_4_->unknown_c_ = 1;
	}
	if (func_ov031_02211f24() == 2) {
		func_ov031_022130e8(arg0, arg1, arg2, arg3, arg4);
	}
}
