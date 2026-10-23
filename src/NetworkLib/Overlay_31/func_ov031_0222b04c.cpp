#include <globaldefs.h>

extern "C" int func_ov031_02222e0c(void);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_0222b36c(void);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0222b094(void);

extern char data_ov031_02290c80;

// USA: func_ov031_0222b04c
extern "C" ARM void func_ov031_0222b04c(void) {
	if (func_ov031_02222e0c() == -2) return;
	void* var0 = func_ov031_0223e218((void*)1, (void*)func_ov031_0222b36c, (void*)0, 0x78);
	*(int*)((&data_ov031_02290c80) + 4) = (int)var0;
	func_ov031_022274c0((int)func_ov031_0222b094);
}
