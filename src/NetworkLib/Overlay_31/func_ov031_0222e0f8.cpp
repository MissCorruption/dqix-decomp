#include <globaldefs.h>

typedef void (*Type_ov031_02226fe4)(void*);
struct Struct_ov031_02248f0c { Type_ov031_02226fe4 unknown_0_[5]; };
extern Struct_ov031_02248f0c data_ov031_02248f0c;

extern "C" bool func_ov031_02237eb0(void);

struct Struct_ov031_0222e0f8 {
	unsigned char unknown_0_[4];
	int* unknown_4_;
	unsigned char unknown_8_[0x15 - 8];
	unsigned char unknown_15_;
};
extern Struct_ov031_0222e0f8* data_ov031_02290c98;

extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_0222d9a4(void);
extern "C" void func_ov031_0222dee0(void);

// USA: func_ov031_0222e0f8
extern "C" ARM void func_ov031_0222e0f8(void) {
	Struct_ov031_02248f0c var0 = data_ov031_02248f0c;

	if (func_ov031_02237eb0()) return;

	Struct_ov031_0222e0f8* var1 = data_ov031_02290c98;
	if (var1->unknown_15_ == 0) {
		*var1->unknown_4_ &= 0xc1fffcff;
		func_ov031_022274c0((int)func_ov031_0222d9a4);
		return;
	}

	int var2;
	func_ov031_02227520(&var2, NULL);
	var1 = data_ov031_02290c98;
	var0.unknown_0_[var2]((char*)var1 + 8);
	func_ov031_022274c0((int)func_ov031_0222dee0);
}
