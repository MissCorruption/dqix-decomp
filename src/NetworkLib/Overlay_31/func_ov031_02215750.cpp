#include <globaldefs.h>

extern "C" void func_ov031_022157f8(int arg0, void* arg1);
extern "C" void func_ov031_022158fc(void* arg0, void* arg1);

// USA: func_ov031_02215750
extern "C" ARM void func_ov031_02215750(int arg0, void* arg1) {
	unsigned int var0[6];
	func_ov031_022157f8(arg0, var0);
	func_ov031_022158fc(var0, arg1);
}
