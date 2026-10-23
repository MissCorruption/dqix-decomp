#include <globaldefs.h>

extern "C" void func_ov031_0223bf48(int, void*);
extern char* data_ov031_02290d9c;

// USA: func_ov031_0223e2c0
extern "C" ARM void func_ov031_0223e2c0(int arg0, void* arg1) {
	int var0 = *(int*)(data_ov031_02290d9c + (arg0 << 0x6) + 0x4);
	func_ov031_0223bf48(var0, arg1);
}
