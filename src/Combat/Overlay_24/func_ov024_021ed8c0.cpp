#include <globaldefs.h>
#include "std_library_functions.h"
#include "Util/Random.h"

extern "C" int func_ov000_02154f30(struct Random* arg0, int arg1, int arg2, short* arg3);

struct Struct_ov024_021ed8c0 {
	char unknown_0_[0x1c];
	unsigned int unknown_1c_0_ : 14;
	unsigned int unknown_1d_6_ : 5;
	unsigned int unknown_1e_3_ : 13;
};

struct Struct_ov024_021fec5c { short unknown_0_[8]; };
extern struct Struct_ov024_021fec5c data_ov024_021fec5c;

// USA: func_ov024_021ed8c0
extern "C" ARM void func_ov024_021ed8c0(struct Random** arg0, int arg1, struct Struct_ov024_021ed8c0* arg2, int* arg3, short* arg4) {
	struct Random* var0 = *arg0;
	int var1 = 1;
	switch (arg2->unknown_1d_6_) {
	case 0:
	case 10:
		break;
	case 3:
		var1 = NextRandomBetween(var0, 3, 4);
		break;
	case 4:
		var1 = 2;
		break;
	case 5:
		var1 = 4;
		break;
	case 7:
		var1 = 7;
		break;
	case 8:
		var1 = 3;
		break;
	}

	short var2 = 0;
	struct Struct_ov024_021fec5c var3 = data_ov024_021fec5c;
	for (int var4 = 0; var4 < var1; var4++) {
		int var5 = func_ov000_02154f30(*arg0, arg1, *arg3, arg4);
		if (var5 < 0) break;
		var3.unknown_0_[var2] = var5;
		var2++;
	}
	*arg3 = var2;
	memcpy(arg4, var3.unknown_0_, sizeof(var3));
}
