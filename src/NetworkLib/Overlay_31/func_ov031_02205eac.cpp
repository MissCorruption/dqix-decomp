#include <globaldefs.h>

extern "C" int func_ov031_02205ebc(int arg0);

struct Struct_ov031_02205eac {
	char unknown_0_[0x4];
	int unknown_4_;
};

// USA: func_ov031_02205eac
extern "C" ARM int func_ov031_02205eac(Struct_ov031_02205eac* arg0) {
	return func_ov031_02205ebc(arg0->unknown_4_);
}
