#include <globaldefs.h>

struct Struct_ov023_021fb878 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
};

struct Struct_ov023_021fb878_2 {
	char unknown_0_[0xa8];
	unsigned int unknown_a8_;
	unsigned int unknown_ac_;
};

// USA: func_ov023_021fb878
extern "C" ARM void func_ov023_021fb878(struct Struct_ov023_021fb878_2 *arg0, struct Struct_ov023_021fb878 *arg1) {
	arg0->unknown_a8_ = arg1->unknown_0_;
	arg0->unknown_ac_ = arg1->unknown_4_;
}
