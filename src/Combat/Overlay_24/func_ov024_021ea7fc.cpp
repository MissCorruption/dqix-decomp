#include <globaldefs.h>

struct Struct_ov024_021e6a90_7 {
	unsigned int unknown_0_;
	unsigned int unknown_4_0_:12;
	unsigned int unknown_5_4_:20;
	unsigned int unknown_8_0_:29;
	unsigned int unknown_b_5_:1;
	unsigned int unknown_b_6_:2;
};

// USA: func_ov024_021ea7fc
extern "C" ARM int func_ov024_021ea7fc(void* arg0, struct Struct_ov024_021e6a90_7* arg1, int arg2) {
	if (arg2 == 0) return 0;
	if (arg1->unknown_b_5_) {
		if (arg1->unknown_4_0_ != 0x1f9) return 0;
	}
	if (arg1->unknown_4_0_ == 0x70) return 0;
	if (arg1->unknown_4_0_ == 0x48) return 0;
	return 1;
}
