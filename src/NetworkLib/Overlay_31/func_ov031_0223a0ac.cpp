#include <globaldefs.h>

extern "C" int func_ov031_02239368(int arg0);
extern "C" ARM void func_ov031_022393e4(int arg0);
extern "C" ARM int func_020d472c(void* arg0);
extern "C" ARM void func_ov031_0223a040(short* arg0);

// USA: func_ov031_0223a0ac
extern "C" ARM int func_ov031_0223a0ac(short* arg0) {
	unsigned short var0 = *(unsigned short*)((char*)arg0 + 2);
	if (var0 != 0) {
		func_ov031_022393e4(var0);
		return func_ov031_02239368(0xa);
	}
	int var1 = func_020d472c((void*)func_ov031_0223a040);
	if (var1 != 0) {
		func_ov031_022393e4(var1);
		return func_ov031_02239368(0xa);
	}
	return func_ov031_02239368(1);
}
