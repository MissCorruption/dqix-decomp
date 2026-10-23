#include <globaldefs.h>

struct Struct_020b1d70;
extern "C" int func_020c7170(char*, unsigned long, const char*, ...);
extern "C" int func_ov031_0223dd60(unsigned short* arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov031_0223c8d4(Struct_020b1d70* arg0, int arg1, int arg2, int arg3, int arg4, unsigned short* arg5, int arg6);
extern const char data_ov031_0224bb7c[];

struct Struct_ov031_02230088 { unsigned char unknown_0_[0x14]; Struct_020b1d70* unknown_14_; };
struct Struct_ov031_02290ca0_13 { unsigned char unknown_0_[8]; Struct_ov031_02230088* unknown_8_; };
extern Struct_ov031_02290ca0_13 data_ov031_02290ca0;

// USA: func_ov031_02230088
extern "C" ARM void func_ov031_02230088(unsigned char* arg0, int arg1) {
	unsigned short var0[0x10];
	unsigned char var1[0x10];
	func_020c7170((char*)var1, 0x10, data_ov031_0224bb7c, arg0[0], arg0[1], arg0[2], arg0[3]);
	func_ov031_0223dd60(var0, var1, 0x10);
	func_ov031_0223c8d4(data_ov031_02290ca0.unknown_8_->unknown_14_, 0x5f, arg1 * 0x1d + 8, 2, 7, var0, 1);
}
