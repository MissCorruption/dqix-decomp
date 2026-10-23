#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void*, int);
extern "C" int func_ov000_0215e9fc(int arg0, void* arg1, int arg2, int arg3);

struct Struct_ov024_021f18a0 { int unknown_0_; };

// USA: func_ov024_021f18a0
extern "C" ARM int func_ov024_021f18a0(struct Struct_ov024_021f18a0* arg0, int arg1, int arg2, int* arg3, void* arg4) {
	short var0[4];
	__clear(var0, 8);
	int var1 = func_ov000_0215e9fc(arg0->unknown_0_, var0, 4, 1);
	if (var1 <= 0) return 0;
	*arg3 = var1;
	memcpy(arg4, var0, 8);
	return 1;
}
