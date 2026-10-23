#include <globaldefs.h>

extern "C" void func_ov031_02211acc(void);

struct Struct_ov031_0224e598_2 {
	int unknown_0_;
	int unknown_4_;
};
extern Struct_ov031_0224e598_2 data_ov031_0224e598;

// USA: func_ov031_02211820
extern "C" ARM void func_ov031_02211820(void) {
	func_ov031_02211acc();
	if (data_ov031_0224e598.unknown_0_ != 9) {
		data_ov031_0224e598.unknown_0_ = 0;
		data_ov031_0224e598.unknown_4_ = 0;
	}
}
