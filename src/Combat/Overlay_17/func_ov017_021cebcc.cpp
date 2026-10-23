#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020e38e4 { unsigned int unknown_0_; unsigned char unknown_4_; };
struct Struct_020e385c { unsigned int unknown_0_; unsigned char unknown_4_; };

extern "C" void* func_020e3808(void);
extern "C" void* func_0202ae24(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* arg0);
extern "C" int func_020e38e4(struct Struct_020e38e4* arg0, int arg1, int arg2);
extern "C" struct Struct_020e385c* func_020e385c(struct Struct_020e385c* arg0, int arg1, int arg2);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021cebcc
extern "C" ARM void func_ov017_021cebcc(int arg0, int arg1, int arg2) {
	struct Struct_020e38e4* var0 = (struct Struct_020e38e4*)func_020e3808();
	void* var1 = func_0202ae24();

	unsigned char var2[0x14];
	var2[0] = 0x34;
	unsigned char* var3 = var2 + 4;
	var3[0] = arg0;
	*(int*)(var3 + 4) = arg2;
	var3[8] = arg1;

	if (func_0202c508(func_0202ae18()) != 0 && arg0 == 3) {
		var3[1] = func_020e38e4(var0, arg1, arg2);
		struct Struct_020e385c* var4 = func_020e385c((struct Struct_020e385c*)var0, arg1, arg2);
		if (var4 != NULL) {
			memcpy(var3 + 4, var4, 8);
		}
	}

	func_0205e330(var1, var2, 0);
}
