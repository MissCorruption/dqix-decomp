#include <globaldefs.h>

extern "C" bool func_ov031_02237eb0();
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" void func_ov031_0222ce24();
extern "C" void func_ov031_0222d1b8();

struct Struct_ov031_02248eb4_2 {
	char unknown_0_[0x10];
	void (*unknown_10_)(void*);
	void (*unknown_14_)(void*);
};
extern Struct_ov031_02248eb4_2 data_ov031_02248eb4;

struct Struct_ov031_0222d474 {
	char unknown_0_[4];
	unsigned int* unknown_4_;
	char unknown_8_[0x2a - 8];
	unsigned char unknown_2a_;
};
extern Struct_ov031_0222d474* data_ov031_02290c94;

// USA: func_ov031_0222d474
extern "C" ARM void func_ov031_0222d474() {
	void (*var0[2])(void*);
	var0[0] = data_ov031_02248eb4.unknown_10_;
	var0[1] = data_ov031_02248eb4.unknown_14_;
	if (func_ov031_02237eb0()) {
		return;
	}
	Struct_ov031_0222d474* var1 = data_ov031_02290c94;
	if (var1->unknown_2a_ == 0) {
		*var1->unknown_4_ &= 0xc1fffcff;
		func_ov031_022274c0((int)func_ov031_0222ce24);
		return;
	}
	int var2;
	func_ov031_02227520(&var2, (int*)0);
	var1 = data_ov031_02290c94;
	void (*var3)(void*) = var0[var2];
	var3((char*)var1 + 8);
	func_ov031_022274c0((int)func_ov031_0222d1b8);
}
