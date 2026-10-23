#include <globaldefs.h>

struct Struct_ov017_021c8f3c_2 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned short unknown_a_;
	unsigned short unknown_c_;
};
extern "C" void func_ov017_021c90b4(Struct_ov017_021c8f3c_2* arg0, Struct_ov017_021c8f3c_2* arg1);

struct Struct_ov017_021d451c {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned short unknown_2_;
	Struct_ov017_021c8f3c_2 unknown_4_;
	unsigned char unknown_12_[0x1e - 0x12];
};

extern "C" void func_ov017_021d46a4(Struct_ov017_021d451c* arg0, Struct_ov017_021d451c* arg1);

// USA: func_ov017_021d451c
extern "C" ARM void func_ov017_021d451c(Struct_ov017_021d451c* arg0, Struct_ov017_021c8f3c_2* arg1) {
	Struct_ov017_021d451c* var0 = NULL;
	Struct_ov017_021d451c* var1 = NULL;
	int var2;
	for (var2 = 0; var2 < 0x30; var2++) {
		if (arg1->unknown_0_ == arg0[var2].unknown_2_) {
			var0 = &arg0[var2];
			break;
		}
		if (var1 == NULL && arg0[var2].unknown_0_ == 0) {
			var1 = &arg0[var2];
		}
	}
	if (var0 != NULL) {
		func_ov017_021c90b4(&var0->unknown_4_, arg1);
		var0->unknown_2_ = arg1->unknown_0_;
		var0->unknown_0_ |= 0x1;
		func_ov017_021d46a4(arg0, var0);
		return;
	}
	if (var1 == NULL) {
		return;
	}
	func_ov017_021c90b4(&var1->unknown_4_, arg1);
	var1->unknown_2_ = arg1->unknown_0_;
	var1->unknown_0_ |= 0x1;
	func_ov017_021d46a4(arg0, var1);
}
