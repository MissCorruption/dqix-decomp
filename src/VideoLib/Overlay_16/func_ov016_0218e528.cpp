#include <globaldefs.h>

extern "C" void func_02000b9c(int);
extern "C" int func_ov016_0218e800(int, int, int);

// USA: func_ov016_0218e528
extern "C" ARM int func_ov016_0218e528(int arg0, int arg1, int arg2) {
	func_02000b9c(0x2000bdc);
	return func_ov016_0218e800(arg0, arg1, arg2);
}
