#include <globaldefs.h>

extern "C" int func_ov031_02207380(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov031_022414cc {
	int unknown_0_;
	int unknown_4_;
};

// USA: func_ov031_022414cc
extern "C" ARM int func_ov031_022414cc(struct Struct_ov031_022414cc *arg0, int arg1, int arg2, int arg3, int arg4) {
	int var0 = func_ov031_02207380(arg1, arg2, arg3, arg4);
	if (var0 >= 0) {
		return var0;
	}
	if (arg0->unknown_4_ != 0) {
		return 0xfffffc16;
	}
	if (var0 == ~0x37) {
		return 0;
	}
	return ~0x3e8;
}
