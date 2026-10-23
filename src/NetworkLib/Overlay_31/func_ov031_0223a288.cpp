#include <globaldefs.h>

extern "C" int func_020d6830(int arg0, unsigned short* arg1, int arg2);

struct Struct_ov031_02290d18_25 { unsigned char unknown_0_[4]; unsigned char* unknown_4_; };
extern struct Struct_ov031_02290d18_25 data_ov031_02290d18;

// USA: func_ov031_0223a288
extern "C" ARM int func_ov031_0223a288(int arg0) {
	unsigned char* var0 = data_ov031_02290d18.unknown_4_;
	return func_020d6830((int)(var0 + 0x13e0), (unsigned short*)(var0 + 0x1c00), arg0);
}
