#include <globaldefs.h>

struct Struct_ov031_02248eb4 {
	unsigned char unknown_0_[8];
	int unknown_8_;
	int unknown_c_;
};

extern struct Struct_ov031_02248eb4 data_ov031_02248eb4;
extern void* data_ov031_02290c94;

extern "C" int func_ov031_02223fdc(void);
extern "C" void func_ov031_022274c0(int);
extern "C" void func_ov031_0222d1b8(void);
extern "C" int func_ov031_02237b2c(int, int, int, int, int);
extern "C" void func_ov031_0222d6b0(void);
extern "C" void func_ov031_02227520(int*, int*);
extern "C" void func_ov031_0222d418(void);

// USA: func_ov031_0222d0e0
extern "C" ARM void func_ov031_0222d0e0(void) {
	int var0[2];
	var0[0] = data_ov031_02248eb4.unknown_8_;
	var0[1] = data_ov031_02248eb4.unknown_c_;

	if (func_ov031_02223fdc() != 0) return;

	unsigned char var1 = *((unsigned char*)data_ov031_02290c94 + 0x2a);
	if (var1 == 0) {
		func_ov031_022274c0((int)func_ov031_0222d1b8);
		return;
	}
	if (var1 == 2) {
		func_ov031_02237b2c(6, 3, 1, -1, 0);
		func_ov031_022274c0((int)func_ov031_0222d6b0);
		return;
	}

	int var2;
	func_ov031_02227520(NULL, &var2);
	func_ov031_02237b2c(var0[var2], 2, 1, -1, 0);
	func_ov031_022274c0((int)func_ov031_0222d418);
}
