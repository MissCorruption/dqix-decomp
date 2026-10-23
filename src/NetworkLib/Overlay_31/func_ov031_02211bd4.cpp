#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02211bd4 {
	char unknown_0_[4];
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned short unknown_8_;
	unsigned short unknown_a_;
	unsigned char unknown_c_;
	char unknown_d_[0x10 - 0xd];
	int unknown_10_;
};

struct Struct_ov031_0224e5b4_2 { char unknown_0_[4]; Struct_ov031_02211bd4* unknown_4_; };
extern Struct_ov031_0224e5b4_2 data_ov031_0224e5b4;

extern "C" void func_ov031_02207ce0(int);

// USA: func_ov031_02211bd4
extern "C" ARM void func_ov031_02211bd4(Struct_ov031_02211bd4* arg0, unsigned short arg1, int arg2, int arg3) {
	if (data_ov031_0224e5b4.unknown_4_ != NULL) return;
	VectorizedMemset(arg0, 0, 0x64);
	arg0->unknown_8_ = arg1;
	arg0->unknown_a_ = 1;
	arg0->unknown_4_ = 1;
	arg0->unknown_6_ = 0;
	arg0->unknown_c_ = 0;
	arg0->unknown_10_ = 0;
	data_ov031_0224e5b4.unknown_4_ = arg0;
	func_ov031_02207ce0(arg3);
}
