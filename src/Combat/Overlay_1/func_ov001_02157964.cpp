#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov001_02157964_2 {
	int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_ov001_02157964 {
	struct Struct_ov001_02157964_2 unknown_0_[16];
	int unknown_c0_;
	int unknown_c4_;
};

// USA: func_ov001_02157964
extern "C" ARM int func_ov001_02157964(struct Struct_ov001_02157964* arg0, struct Struct_ov001_02157964_2 arg1) {
	if (arg0->unknown_c4_ >= 16) {
		return 1;
	}
	memcpy(&arg0->unknown_0_[arg0->unknown_c4_], &arg1, 0xc);
	arg0->unknown_c4_++;
	return 0;
}
