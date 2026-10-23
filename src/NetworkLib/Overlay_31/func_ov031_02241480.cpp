#include <globaldefs.h>

extern "C" int func_ov031_022072ac(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov031_02241480 {
	int unknown_0_;
	int unknown_4_;
};

// USA: func_ov031_02241480
extern "C" ARM int func_ov031_02241480(struct Struct_ov031_02241480 *arg0, int arg1, int arg2, int arg3, int arg4) {
	int var0 = func_ov031_022072ac(arg1, arg2, arg3, arg4);
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
