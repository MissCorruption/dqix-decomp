#include <globaldefs.h>

int fix32cos(int);
int fix32sin(int);
extern "C" void func_ov017_0218db14(void* arg0, int* arg1, int arg2, int arg3, unsigned char arg4);

// USA: func_ov017_0218da48
extern "C" ARM void func_ov017_0218da48(void* arg0, int arg1, int arg2, int arg3, unsigned char arg4) {
	int var0[3];
	int var1 = fix32cos(arg1);
	int var2 = fix32sin(arg1);
	var0[0] = var2;
	var0[1] = 0;
	var0[2] = var1;
	func_ov017_0218db14(arg0, var0, arg2, arg3, arg4);
}
