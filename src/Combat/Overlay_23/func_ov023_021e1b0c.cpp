#include <globaldefs.h>

struct Struct_ov023_021e1b0c_2 {
    Struct_ov023_021e1b0c_2* unknown_0_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_0_ : 1;
    unsigned char unknown_e_1_ : 1;
    unsigned char unknown_e_2_ : 6;
    unsigned char unknown_f_;
};

struct Struct_ov023_021e1b0c {
    Struct_ov023_021e1b0c_2* unknown_0_;
    Struct_ov023_021e1b0c_2* unknown_4_;
    short unknown_8_;
};

extern "C" Struct_ov023_021e1b0c_2* func_ov023_021e1bac(Struct_ov023_021e1b0c* arg0, int arg1, int arg2, int arg3);

// USA: func_ov023_021e1b0c
extern "C" ARM void func_ov023_021e1b0c(void* arg0, int arg1, int arg2, int arg3) {
    Struct_ov023_021e1b0c* var0 = (Struct_ov023_021e1b0c*)arg0;
	Struct_ov023_021e1b0c_2* var1 = func_ov023_021e1bac(var0, arg1, arg2, arg3);
	if (var1 == 0) return;
	var0->unknown_0_ = var1;
	while (var1 != 0) {
		Struct_ov023_021e1b0c_2* var2 = func_ov023_021e1bac(var0, arg1, arg2, arg3);
		var1->unknown_0_ = var2;
		var1 = var2;
	}
}
