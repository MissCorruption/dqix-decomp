#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void);

// USA: func_ov004_0215e49c
extern "C" ARM void func_ov004_0215e49c(void* arg0, int arg1, int arg2) {
	char* var0 = (char*)func_ov004_0215e47c(arg0, arg1);
	if (var0 == NULL) {
		return;
	}
	int var1 = func_ov023_021f6f10();
	if (var1 == 8) {
		*(short*)(var0 + 0x38) = arg2;
	}
}
