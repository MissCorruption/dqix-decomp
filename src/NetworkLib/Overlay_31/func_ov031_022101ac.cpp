#include <globaldefs.h>

struct Struct_ov031_022101ac {
	char unknown_0_[0x30];
	int unknown_30_;
};

extern Struct_ov031_022101ac* data_ov031_0224e588;

// USA: func_ov031_022101ac
extern "C" ARM void func_ov031_022101ac(int arg0) {
	Struct_ov031_022101ac* var0 = data_ov031_0224e588;
	if (var0 != NULL) {
		var0->unknown_30_ = arg0;
	}
}
