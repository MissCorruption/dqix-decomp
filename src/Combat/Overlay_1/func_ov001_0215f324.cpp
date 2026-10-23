#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_02012fe4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_0215f324
extern "C" ARM int func_ov001_0215f324(void* arg0) {
	unsigned short var0 = *(unsigned short*)((char*)func_02012fe4(arg0) + 2);
	func_ov017_021d6134(arg0, var0);
	return 1;
}
