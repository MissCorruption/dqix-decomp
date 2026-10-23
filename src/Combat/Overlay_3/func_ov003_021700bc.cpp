#include <globaldefs.h>

extern "C" void* func_02012fe4(void);
extern "C" int func_ov003_0216ffbc(void* param);

struct S021700bc { char pad[0x170]; void* field170; };

// USA: func_ov003_021700bc
extern "C" ARM void func_ov003_021700bc(S021700bc* param) {
#if defined(jpn)
	param->field170 = (char*)func_02012fe4() + 0x860;
#else
	param->field170 = (char*)func_02012fe4() + 0x840;
#endif
	func_ov003_0216ffbc(param);
}
