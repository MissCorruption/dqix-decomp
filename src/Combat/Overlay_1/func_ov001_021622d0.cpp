#include <globaldefs.h>

extern "C" void* func_02012fe4(void* arg0);
extern "C" void func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_021622d0
extern "C" ARM int func_ov001_021622d0(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_021622d0_1060 = 0x444 };
#else
    enum { Enum_ov001_021622d0_1060 = 0x424 };
#endif
	int var0 = *(int*)((char*)func_02012fe4(arg0) + Enum_ov001_021622d0_1060);
	func_ov017_021d6134(arg0, var0);
	return 1;
}
