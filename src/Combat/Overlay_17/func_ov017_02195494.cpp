#include <globaldefs.h>

extern "C" void func_ov017_02195214(int arg0, void* arg1);

// USA: func_ov017_02195494
extern "C" ARM void func_ov017_02195494(void* arg0, int arg1, int arg2) {
	int var0 = arg1 - 1;
	if (var0 < 0 || var0 > 2) return;
	void* var1 = (char*)arg0
#if defined(jpn)
        + 0x40d1
#else
        + 0x42f1
#endif
        + var0 * 15;
	func_ov017_02195214(arg2, var1);
}
