#include <globaldefs.h>

struct Struct_ov031_022491e4 { int unknown_0_, unknown_4_, unknown_8_; };

extern struct Struct_ov031_022491e4 data_ov031_022491e4;
extern "C" int func_ov031_0223c054(int);
extern "C" void func_ov031_02227520(int*, int*);
extern "C" int func_ov031_02237b2c(int, int, int, int, int);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_02234260(void);

// USA: func_ov031_022341d8
extern "C" ARM void func_ov031_022341d8(void) {
	struct Struct_ov031_022491e4 var0 = data_ov031_022491e4;

	if (func_ov031_0223c054(1) != 0) return;
	if (func_ov031_0223c054(0) != 0) return;

	int var1;
	func_ov031_02227520(NULL, &var1);
	int* var2 = (int*)&var0;
	func_ov031_02237b2c(var2[var1], 1, 1, -1, 0);
	func_ov031_022274c0((int)func_ov031_02234260);
}
