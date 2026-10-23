#include <globaldefs.h>

struct Struct_ov031_0224e1c0_4 {
	char unknown_0_[8];
	int unknown_8_;
};

extern Struct_ov031_0224e1c0_4 data_ov031_0224e1c0;

// USA: func_ov031_02205000
extern "C" ARM void func_ov031_02205000(void) {
	data_ov031_0224e1c0.unknown_8_ |= 0x2;
}
