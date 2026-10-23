#include <globaldefs.h>

struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void* func_020d6c00(void);
extern "C" void func_020daf9c(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021a3544_3 {
	char unknown_0_[0x1];
	unsigned char unknown_1_;
	char unknown_2_[6];
	unsigned char unknown_8_;
};

typedef unsigned char (*Type_0200f3a4)(Struct_ov017_021a3544_3* self);

struct Struct_ov017_021d6ad8 {
	Type_0200f3a4 unknown_0_[5];
};

extern Struct_ov017_021d6ad8 data_ov017_021d6ad8;

// USA: func_ov017_021aef0c
extern "C" ARM void func_ov017_021aef0c(Struct_ov017_021a3544_3* arg0, void* arg1) {
	Struct_ov017_021d6ad8 var0 = data_ov017_021d6ad8;
	arg0->unknown_8_ = var0.unknown_0_[arg0->unknown_8_](arg0);

	if (arg0->unknown_1_ != 0) {
		func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x800000);
		func_020daf9c(0, 1, 0, 1);
	}
}
