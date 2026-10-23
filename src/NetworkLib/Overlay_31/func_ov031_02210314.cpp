#include <globaldefs.h>

struct Struct_ov031_02210314 {
	char unknown_0_[0xa0c];
	int unknown_a0c_;
};

extern Struct_ov031_02210314* data_ov031_0224e588;

// USA: func_ov031_02210314
extern "C" ARM void func_ov031_02210314(int arg0) {
	Struct_ov031_02210314* var0 = data_ov031_0224e588;
	if (var0 != NULL) {
		var0->unknown_a0c_ = arg0;
	}
}
