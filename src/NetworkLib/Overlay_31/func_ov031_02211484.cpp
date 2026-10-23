#include <globaldefs.h>

struct Struct_ov031_02211484 {
	int unknown_0_;
	char unknown_4_[0xc];
	int unknown_10_;
};

extern Struct_ov031_02211484* data_ov031_0224e590;

// USA: func_ov031_02211484
extern "C" ARM int func_ov031_02211484(int arg0, unsigned int arg1) {
	Struct_ov031_02211484* var0 = data_ov031_0224e590;
	if (var0 == NULL) return 0;
	if (var0->unknown_0_ != 2) return 0;
	if (var0->unknown_10_ != 0) return 0;
	if (arg0) {
		if (arg1 < 1 || arg1 > 0xff) return 0;
	} else {
		if (arg1 < 1 || arg1 > 0xf) return 0;
	}
	return 1;
}
