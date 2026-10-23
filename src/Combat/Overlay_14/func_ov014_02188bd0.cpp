#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov014_021845ec;
extern "C" int func_ov014_02188d10(struct Struct_ov014_021845ec* arg0);

struct Struct_ov014_021844c4 {
	char unknown_0_[0x14];
	short unknown_14_;
	int unknown_18_;
	int unknown_1c_;
};

// USA: func_ov014_02188bd0
extern "C" ARM int func_ov014_02188bd0(struct Struct_ov014_021844c4* arg0) {
	memset(arg0, 0, 0x14);
	arg0->unknown_14_ = -1;
	arg0->unknown_18_ = -1;
	return func_ov014_02188d10((struct Struct_ov014_021845ec*)arg0);
}
