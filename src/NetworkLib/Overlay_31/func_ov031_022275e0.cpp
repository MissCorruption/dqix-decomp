#include <globaldefs.h>

extern "C" int func_ov031_0223cf4c(int, int);
extern "C" ARM void *func_ov031_0223beec(int, int, int);
extern int data_ov031_02290c40;

// USA: func_ov031_022275e0
extern "C" ARM void func_ov031_022275e0(void) {
	data_ov031_02290c40 = func_ov031_0223cf4c(0x64, 4);
	*(int*)(data_ov031_02290c40 + 0x60) = (int)func_ov031_0223beec(8, data_ov031_02290c40, 0xc);
}
