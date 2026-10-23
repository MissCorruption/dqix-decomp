#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov014_02188d48_4 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; };

extern "C" int func_ov014_0218934c(Struct_ov014_02188d48_4* arg0);
extern "C" void func_ov014_021891f0(Struct_ov014_02188d48_4* arg0, int arg1);

// USA: func_ov014_02189244
extern "C" ARM int func_ov014_02189244(Struct_ov014_02188d48_4* arg0, Struct_ov014_02188d48_4* arg1, char* arg2, int arg3) {
	*arg2 = 0;
	if (arg1 == NULL) return 0;
	memcpy(arg0, arg1, 0xc);
	arg0->unknown_c_ = (int)arg1 + 0xc;
	int var0 = func_ov014_0218934c(arg0);
	arg0->unknown_10_ = (int)arg1 + (var0 + 0xc);
	if ((unsigned int)arg0->unknown_8_ >> 31) {
		*arg2 = 1;
		return 1;
	}
	func_ov014_021891f0(arg0, arg3);
	arg0->unknown_8_ = (arg0->unknown_8_ & 0x7fffffff) | 0x80000000;
	arg1->unknown_8_ = (arg1->unknown_8_ & 0x7fffffff) | 0x80000000;
	return 1;
}
