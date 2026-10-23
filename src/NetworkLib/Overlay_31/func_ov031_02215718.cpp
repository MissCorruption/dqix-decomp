#include <globaldefs.h>

extern "C" void func_ov031_022157f8(int arg0, void *arg1);
extern "C" int func_02001aec(void *arg0, void *arg1, int arg2);
extern char data_ov031_02249b3c;

// USA: func_ov031_02215718
extern "C" ARM int func_ov031_02215718(int arg0) {
	unsigned int var0[6];
	func_ov031_022157f8(arg0, var0);
	return func_02001aec(var0, &data_ov031_02249b3c, 8) == 0;
}
