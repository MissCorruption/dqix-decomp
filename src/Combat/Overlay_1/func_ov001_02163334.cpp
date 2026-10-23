#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);
extern "C" int func_0206dfb0(int, unsigned char*, int);

// USA: func_ov001_02163334
extern "C" ARM int func_ov001_02163334(void* arg0) {
	unsigned char* var0 = (unsigned char*)func_0205ec34();
	int var1 = func_ov017_021d60f4(arg0);
	int var2 = var0[0x332];
	int var3 = func_0206dfb0((int)var0, var0 + var2 * 0x1c + 3, var1);
	if (var3 != 0) {
		func_ov017_021d6134((char*)arg0 + 8, 1);
	} else {
		func_ov017_021d6134((char*)arg0 + 8, 0);
	}
	return 1;
}
