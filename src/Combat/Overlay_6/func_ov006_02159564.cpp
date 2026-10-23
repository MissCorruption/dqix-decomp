#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void func_ov006_0215f3d8(void *arg0);
extern "C" void func_ov006_0215f740(void *arg0);
extern "C" int func_ov006_021595b4(void *arg0);

// USA: func_ov006_02159564
extern "C" ARM int func_ov006_02159564(void *arg0) {
	*(void**)((char*)arg0 + R(0x3c, 0x44)) = (char*)arg0 + 0x364;
	func_ov006_0215f3d8(arg0);
	short *var0 = *(short**)((char*)arg0 + R(0x3c, 0x44));
	if (*(short*)((char*)arg0 + 0x300 + 0x5e) != *var0) {
		func_ov006_0215f740(arg0);
		return 0;
	}
	return func_ov006_021595b4(arg0) != 0;
}
