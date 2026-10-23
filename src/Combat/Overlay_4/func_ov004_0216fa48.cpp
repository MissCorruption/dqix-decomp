#include <globaldefs.h>

struct Struct_020e455c_2;
extern "C" void func_020e455c(struct Struct_020e455c_2* arg0);
extern "C" void func_020a1e54(int arg0);

// USA: func_ov004_0216fa48
extern "C" ARM void func_ov004_0216fa48(struct Struct_020e455c_2* arg0) {
	func_020e455c(arg0);
	if (*((unsigned char*)arg0 + 0xf) != 0) {
		func_020a1e54(1);
		*((unsigned char*)arg0 + 0xf) = 0;
	}
}
