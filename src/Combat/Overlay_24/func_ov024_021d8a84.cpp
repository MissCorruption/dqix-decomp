#include <globaldefs.h>

extern "C" int func_ov000_02156068(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov024_021d8a84 { void* unknown_0_; };

// USA: func_ov024_021d8a84
extern "C" ARM int func_ov024_021d8a84(struct Struct_ov024_021d8a84* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
	int var0 = func_ov000_02156068(arg0->unknown_0_, (short)arg2, 0, 1);
	if (var0) {
		return arg5 + 1;
	}
	return arg5;
}
