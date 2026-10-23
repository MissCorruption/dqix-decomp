#include <globaldefs.h>

struct Struct_ov031_02212bcc { unsigned char unknown_0_[4]; void* unknown_4_; unsigned char unknown_8_[0x48 - 8]; int unknown_48_; };
struct Struct_ov031_0224e5c0 { Struct_ov031_02212bcc* unknown_0_; };
extern Struct_ov031_0224e5c0 data_ov031_0224e5c0;
extern "C" void func_ov031_022128b8(void);
extern "C" int func_ov031_0223e8ac(void* arg0);

// USA: func_ov031_02212bcc
extern "C" ARM int func_ov031_02212bcc(void* arg0) {
	Struct_ov031_02212bcc* var0 = data_ov031_0224e5c0.unknown_0_;
	if (var0 == NULL) return 0;
	var0->unknown_4_ = arg0;
	if (data_ov031_0224e5c0.unknown_0_->unknown_48_ == 0) {
		func_ov031_022128b8();
	} else {
		func_ov031_0223e8ac((void*)func_ov031_022128b8);
	}
	return 1;
}
