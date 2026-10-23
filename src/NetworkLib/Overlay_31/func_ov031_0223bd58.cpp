#include <globaldefs.h>

extern "C" int func_ov031_0223b61c(int, int*, int);
extern int data_ov031_02290d2c[];

// USA: func_ov031_0223bd58
extern "C" ARM void func_ov031_0223bd58(int arg0, int arg1) {
	int var0;
	int var1 = func_ov031_0223b61c(arg1, &var0, 4);
	data_ov031_02290d2c[arg0] = var1;
}
