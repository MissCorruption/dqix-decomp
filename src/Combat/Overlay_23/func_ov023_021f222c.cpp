#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov023_021f222c_2 {
	unsigned int unknown_0_0_ : 9;
	unsigned int unknown_1_1_ : 9;
	unsigned int unknown_2_2_ : 9;
	unsigned int unknown_3_3_ : 3;
	unsigned int unknown_3_6_ : 2;
};

union Struct_ov023_021f222c {
	struct Struct_ov023_021f222c_2 unknown_0_;
	unsigned int unknown1_0_;
};

struct Struct_ov023_021f1868_11 {
	union Struct_ov023_021f222c unknown_0_;
	void *unknown_4_;
	int unknown_8_;
	char unknown_c_[0x38];
#if defined(jpn)
	char unknown_44_[0x118];
#else
	char unknown_44_[0x200];
#endif
};

// USA: func_ov023_021f222c
extern "C" ARM void func_ov023_021f222c(struct Struct_ov023_021f1868_11 *arg0) {
	arg0->unknown_0_.unknown_0_.unknown_0_0_ = 0;
	arg0->unknown_0_.unknown_0_.unknown_1_1_ = 0;
	arg0->unknown_0_.unknown_0_.unknown_2_2_ = 0;
	arg0->unknown_0_.unknown_0_.unknown_3_3_ = 0;
	arg0->unknown_0_.unknown_0_.unknown_3_6_ = 0;
	arg0->unknown_4_ = 0;
	arg0->unknown_8_ = 0;
	memset(arg0->unknown_c_, 0, sizeof(arg0->unknown_c_));
	memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
	arg0->unknown_4_ = arg0->unknown_44_;
}
