#include <globaldefs.h>

struct MainStruct020e455c;
extern "C" void func_020e455c(struct MainStruct020e455c* obj);
extern "C" void func_020a1e54(int flag);

// USA: func_ov004_0216fa48
extern "C" ARM void func_ov004_0216fa48(struct MainStruct020e455c* obj) {
	func_020e455c(obj);
	if (*((unsigned char*)obj + 0xf) != 0) {
		func_020a1e54(1);
		*((unsigned char*)obj + 0xf) = 0;
	}
}
