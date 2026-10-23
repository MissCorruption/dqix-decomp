#include <globaldefs.h>

struct Struct_ov031_022415e0 {
	int unknown_0_;
	int unknown_4_;
};

extern "C" void func_ov031_022415c8(void* arg0, const void* arg1, unsigned int arg2);
extern "C" int func_ov031_022414cc(Struct_ov031_022415e0* arg0, int arg1, void* arg2, int arg3, int arg4);
extern char data_ov031_02291a04[0x400];

// USA: func_ov031_022415e0
extern "C" ARM int func_ov031_022415e0(Struct_ov031_022415e0* arg0, int arg1, int* arg2, char* arg3, int arg4) {
	int var0 = arg4;
	while (var0 > 0) {
		if (arg0->unknown_4_ != 0) {
			return -1;
		}
		int var1 = 0x400 - *arg2;
		if (var0 <= var1) {
			var1 = var0;
		}
		func_ov031_022415c8(data_ov031_02291a04 + *arg2, arg3, var1);
		arg3 += var1;
		*arg2 += var1;
		var0 -= var1;
		if (*arg2 == 0x400) {
			int var2 = func_ov031_022414cc(arg0, arg1, data_ov031_02291a04, 0x400, 0);
			if (var2 <= 0) {
				return var2;
			}
			*arg2 -= var2;
		}
	}
	return arg4;
}
