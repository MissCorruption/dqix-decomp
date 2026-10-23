#include <globaldefs.h>

extern "C" int func_ov004_0215e47c(int arg0, int arg1);
extern "C" void func_ov023_021fc71c(int arg0, int arg1, int arg2);

extern unsigned char data_ov004_021707e8;

// USA: func_ov004_02162a9c
extern "C" ARM int func_ov004_02162a9c(int arg0) {
	int var0 = func_ov004_0215e47c(arg0, 0x82);
	if (var0 != 0) func_ov023_021fc71c(var0, *(int*)((char*)&data_ov004_021707e8 + 0x1c), 1);
	return 0;
}
