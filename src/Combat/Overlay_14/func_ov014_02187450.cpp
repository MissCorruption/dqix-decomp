#include <globaldefs.h>

struct Struct_ov014_02187450_2 {
	char unknown_0_[0x1a];
	short unknown_1a_;
};

struct Struct_ov014_02187450 {
	char unknown_0_[0xdc];
	int* unknown_dc_;
};

// USA: func_ov014_02187450
extern "C" ARM int* func_ov014_02187450(struct Struct_ov014_02187450* arg0, struct Struct_ov014_02187450_2* arg1) {
	if (!arg1) return NULL;
	short var0 = arg1->unknown_1a_ - 1;
	if (var0 < 0) goto ret_null;
	if (var0 < 0x134) {
		return arg0->unknown_dc_ + var0;
	}
ret_null:
	return NULL;
}
