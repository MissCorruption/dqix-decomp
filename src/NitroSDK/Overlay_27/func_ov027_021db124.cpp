#include <globaldefs.h>

struct Struct_ov027_021dd940_8 {
	char unknown_0_[0x1c];
	int unknown_1c_;
	char unknown_20_[0x24 - 0x20];
	unsigned char unknown_24_;
	unsigned char unknown_25_;
	unsigned char unknown_26_;
};

extern Struct_ov027_021dd940_8 data_ov027_021dd940;

// USA: func_ov027_021db124
extern "C" ARM void func_ov027_021db124(void) {
	*(unsigned short*)((unsigned char*)data_ov027_021dd940.unknown_1c_ + 0x4b0) = 1;
	data_ov027_021dd940.unknown_26_ = ((unsigned char*)data_ov027_021dd940.unknown_1c_)[0x4b4];
	data_ov027_021dd940.unknown_24_ = 5;
}
