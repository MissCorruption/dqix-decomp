#include <globaldefs.h>

extern "C" int func_ov031_0221b780(int arg0, int arg1, int arg2); // WaitAndRegisterHandler2_0221b780
extern "C" int func_ov031_0221b7fc(int arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov031_0221b848(void);

struct Struct_ov031_0224e6a0_2 {
	unsigned char unknown_0_[8];
	int unknown_8_;
};
extern Struct_ov031_0224e6a0_2 data_ov031_0224e6a0;

// USA: func_ov031_0221b024
extern "C" ARM int func_ov031_0221b024(int arg0, int* arg1, int arg2) {
	int var0 = arg0;
	int var1 = 0;
	int var2 = data_ov031_0224e6a0.unknown_8_;

	do {
		if (arg1[var1] != 0) {
			do {
				func_ov031_0221b780(var2, 0x100, var0);
			} while (func_ov031_0221b7fc(var0, var2, 0x100, arg2) == 0);
		}
		var1++;
		var0 += 0x100;
		var2 += 0x100;
	} while (var1 < 4);

	return func_ov031_0221b848() != 0;
}
