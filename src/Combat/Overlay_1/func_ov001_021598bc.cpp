#include <globaldefs.h>

struct Struct_ov001_021598bc { char unknown_0_[0x10]; int unknown_10_; };
struct Struct_ov001_021598bc_2 { char unknown_0_[0x64]; int unknown_64_; };

// USA: func_ov001_021598bc
extern "C" ARM int func_ov001_021598bc(Struct_ov001_021598bc* arg0, Struct_ov001_021598bc_2* arg1) {
	int var0 = arg1->unknown_64_;
	int var1 = arg0->unknown_10_;
	if (var0 >= var1) {
		arg1->unknown_64_ = 0;
		return 0;
	}
	arg1->unknown_64_ = var0 + 1;
	return 1;
}
