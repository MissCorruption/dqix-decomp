#include <globaldefs.h>

extern "C" ARM int func_ov031_02222e0c(void);
extern "C" int func_ov031_02236878(int arg0);
extern "C" ARM void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0222a598(void);

struct Struct_ov031_02290c74 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
};

extern Struct_ov031_02290c74 data_ov031_02290c74;

// USA: func_ov031_0222a540
extern "C" ARM void func_ov031_0222a540(void) {
	int var0 = func_ov031_02222e0c();
	if (var0 != 0) {
		if (var0 != 1) return;
		data_ov031_02290c74.unknown_1_ = 1;
		func_ov031_02236878(6);
	} else {
		data_ov031_02290c74.unknown_1_ = 0;
		func_ov031_02236878(7);
	}
	func_ov031_022274c0((int)func_ov031_0222a598);
}
