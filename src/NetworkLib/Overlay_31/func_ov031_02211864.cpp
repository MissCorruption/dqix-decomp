#include <globaldefs.h>

struct Struct_ov031_0224e598_3 {
	int unknown_0_;
	int unknown_4_;
};
extern Struct_ov031_0224e598_3 data_ov031_0224e598;

// USA: func_ov031_02211864
extern "C" ARM void func_ov031_02211864(int arg0, int arg1) {
	if (arg1 > -10000) arg1 += -10000;
	if (data_ov031_0224e598.unknown_0_ != 9) {
		data_ov031_0224e598.unknown_0_ = arg0;
		data_ov031_0224e598.unknown_4_ = arg1;
	}
}
