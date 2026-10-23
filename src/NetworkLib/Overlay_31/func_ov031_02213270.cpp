#include <globaldefs.h>

struct Struct_ov031_0224e5c4_5 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_;
	void* unknown_c_;
	unsigned int unknown_10_;
};

extern Struct_ov031_0224e5c4_5 data_ov031_0224e5c4;

struct Struct_ov031_02213270 {
	unsigned int unknown_0_;
	int (*unknown_4_)(unsigned int, int, int);
	unsigned char unknown_8_;
};

extern "C" void* func_ov031_022133f8(unsigned int);

// USA: func_ov031_02213270
extern "C" ARM void func_ov031_02213270(unsigned int arg0, int arg1, int arg2) {
	struct Struct_ov031_02213270* var0 = (struct Struct_ov031_02213270*)func_ov031_022133f8(1);
	if (var0 == NULL) return;
	if (!(var0->unknown_8_ & arg0)) return;
	var0->unknown_8_ &= ~arg0;
	var0->unknown_4_(arg0, arg1, arg2);
	if (arg0 == 1) {
		data_ov031_0224e5c4.unknown_c_ = NULL;
	}
}
