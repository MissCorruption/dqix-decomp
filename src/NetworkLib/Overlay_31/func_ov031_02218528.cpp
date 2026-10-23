#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov031_02218528 { char* unknown_0_; char* unknown_4_; char* unknown_8_; int unknown_c_; };
extern "C" int func_ov031_0221883c(void* arg0, Struct_ov031_02218528* arg1, int arg2);
extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);

extern char data_ov031_02249ed0[];
extern char data_ov031_02249df8[];

// USA: func_ov031_02218528
extern "C" ARM int func_ov031_02218528(void* arg0, const char* arg1, const char* arg2) {
	char* var0 = (char*)arg0 + 0x1f8;
	Struct_ov031_02218528* var1 = (Struct_ov031_02218528*)(var0 + 0x1800);
	int var2 = strlen(arg2);
	var2 += (strlen(data_ov031_02249ed0) - 4) + strlen(arg1);

	int var3 = var1->unknown_8_ - var1->unknown_4_;
	if (var2 + 1 > var3) {
		int var4 = var2 - var3 + 1;
		if (func_ov031_0221883c(arg0, var1, var4) == 0) {
			return 1;
		}
	}

	char* var5 = strstr(var1->unknown_0_, data_ov031_02249df8);
	char var6 = var5[2];
	char* var7 = var5 + 2;
	int var8 = strlen(var7) + 1;
	memmove(var7 + var2, var7, var8);
	int var9 = func_020c7170(var7, var2 + 1, data_ov031_02249ed0, arg1, arg2);
	var7[var9] = var6;
	var1->unknown_4_ = var1->unknown_4_ + var2;
	return 0;
}
