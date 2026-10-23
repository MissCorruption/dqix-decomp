#if defined(jpn)
#define R(j,u) (j)
#define func_ov004_02167b78 func_ov004_02168074
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov004_0216794c(short* arg0, short* arg1, short* arg2, unsigned char* arg3, int* arg4);
extern "C" void func_ov004_02167b78(void* arg0, int arg1);
extern "C" void func_ov004_02167adc(void* arg0);
extern "C" void func_ov011_021848a0(void* arg0, int arg1);

// USA: func_ov004_02167eb0
extern "C" ARM int func_ov004_02167eb0(void* arg0) {
	short var0, var1, var2;
	unsigned char var3;
	int var4;
	func_ov004_0216794c(&var0, &var1, &var2, &var3, &var4);
	func_ov004_02167b78(arg0, 0);
	func_ov004_02167adc(arg0);
	if (var3 != 0) {
		func_ov011_021848a0(arg0, 0x28);
	} else {
		func_ov011_021848a0(arg0, 0x33);
	}
	return 0;
}
