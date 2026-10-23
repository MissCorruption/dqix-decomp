#include <globaldefs.h>

extern "C" int func_020d5004(int arg0);
extern "C" void func_ov027_021dd0cc(int arg0, int arg1);

struct Struct_ov027_021e33e0_11 {
	unsigned char unknown_0_[8];
	unsigned char* unknown_8_;
};

extern Struct_ov027_021e33e0_11 data_ov027_021e33e0;

// USA: func_ov027_021dcc48
extern "C" ARM int func_ov027_021dcc48(void) {
	int var0 = func_020d5004(*(int*)(data_ov027_021e33e0.unknown_8_ + 0x508));
	func_ov027_021dd0cc(1, var0);
	if (var0 == 2) var0 = 0;
	return var0;
}
