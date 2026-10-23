#include <globaldefs.h>

struct Struct_ov014_02185c90_3 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	int unknown_4_;
	int unknown_8_;
	void* unknown_c_;
};

extern "C" int func_ov014_02188b18(void* arg0);
extern "C" void* func_ov014_021892d4(struct Struct_ov014_02185c90_3* arg0, int arg1, int (*arg2)(void*));

// USA: func_ov014_021893c4
extern "C" ARM void* func_ov014_021893c4(struct Struct_ov014_02185c90_3* arg0, int arg1) {
	if (arg1 < 0) return arg0->unknown_c_;
	return func_ov014_021892d4(arg0, arg1, func_ov014_02188b18);
}
