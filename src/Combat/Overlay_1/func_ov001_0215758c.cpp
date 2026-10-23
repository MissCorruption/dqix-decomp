#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov001_0215758c_2 {
	int unknown_0_, unknown_4_, unknown_8_;
};

struct Struct_ov001_0215758c {
	struct Struct_ov001_0215758c_2 unknown_0_[16];
	struct Struct_ov001_0215758c_2 unknown_c0_[16];
	int unknown_180_;
};

// USA: func_ov001_0215758c
extern "C" ARM int func_ov001_0215758c(struct Struct_ov001_0215758c* arg0, struct Struct_ov001_0215758c_2 arg1, struct Struct_ov001_0215758c_2 arg2) {
	if (arg0->unknown_180_ >= 16) {
		return 1;
	}
	memcpy(&arg0->unknown_0_[arg0->unknown_180_], &arg1, 0xc);
	memcpy(&arg0->unknown_c0_[arg0->unknown_180_], &arg2, 0xc);
	arg0->unknown_180_++;
	return 0;
}
