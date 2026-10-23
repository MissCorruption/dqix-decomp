#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02218710 {
	char* unknown_0_;
	char* unknown_4_;
	char* unknown_8_;
	int unknown_c_;
};

extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);
extern "C" int func_ov031_0221883c(void* arg0, Struct_ov031_02218710* arg1, int arg2);
extern const char data_ov031_02249ee8[];

// USA: func_ov031_02218710
extern "C" ARM int func_ov031_02218710(void* arg0, const char* arg1) {
	int var0;
	Struct_ov031_02218710* var1 = (Struct_ov031_02218710*)((char*)arg0 + 0x19f8);
	var0 = strlen(arg1);
	int var2 = var1->unknown_8_ - var1->unknown_4_;
	if (var0 > var2) {
		if (func_ov031_0221883c(arg0, var1, var0 - var2 + 1) == 0) {
			return 1;
		}
		var2 = var1->unknown_8_ - var1->unknown_4_;
	}

	int var3 = func_020c7170(var1->unknown_4_, var2, data_ov031_02249ee8, arg1);
	if (var3 != var0) {
		return 1;
	}

	var1->unknown_4_ = var1->unknown_4_ + var3;
	return 0;
}
