#include <globaldefs.h>

extern "C" void func_ov031_02211864(int arg0, int arg1);
extern "C" void func_ov031_0221038c(int arg0);
extern void* data_ov031_0224e588;

// USA: func_ov031_02210358
extern "C" ARM void func_ov031_02210358(int arg0, int arg1) {
	void* var0 = data_ov031_0224e588;
	if (var0 != NULL) {
		if (*(int*)((char*)var0 + 4) == 2) return;
	}
	func_ov031_02211864(arg0, arg1);
	func_ov031_0221038c(2);
}
