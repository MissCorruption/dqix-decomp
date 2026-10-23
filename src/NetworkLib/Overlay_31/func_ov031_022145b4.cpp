#include <globaldefs.h>

struct Struct_ov031_022145b4 {
	char unknown_0_[0xd0c];
	unsigned char unknown_d0c_0_ : 4;
};

extern "C" struct Struct_ov031_022145b4* func_ov031_022133f8(int arg0);
extern "C" int strncmp(const void*, const void*, unsigned int);

extern char data_ov031_02245fe0[8];

// USA: func_ov031_022145b4
extern "C" ARM int func_ov031_022145b4(char* arg0) {
	unsigned int var0 = func_ov031_022133f8(0x10)->unknown_d0c_0_;
	if (var0 == 0 || var0 == 6) {
		if (strncmp(arg0 + 0xc, data_ov031_02245fe0, 8) == 0) {
			return 8;
		}
	}
	return 0;
}
