#include <globaldefs.h>

struct Struct_ov014_02188ba0 {
	int unknown_0_;
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
	char* unknown_10_;
};

// USA: func_ov014_02188ba0
extern "C" ARM char* func_ov014_02188ba0(struct Struct_ov014_02188ba0* arg0, char* arg1, char* arg2) {
	int var0 = 1;
	int var1 = (int)(arg1 - (char*)0);
	if (var1 != -1 && arg0->unknown_10_ != NULL) {
		var0 = 0;
	}
	if (var0 == 0) {
		arg2 = arg0->unknown_10_ + var1;
	}
	return arg2;
}
