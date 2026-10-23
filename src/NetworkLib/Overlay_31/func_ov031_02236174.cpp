#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0221b158(void* arg0);
extern "C" void func_ov031_02236570(int arg0);

union Struct_ov031_02236174 {
	unsigned char unknown_0_[0xf0];
	struct {
		unsigned char unknown1_0_[0xc0];
		unsigned char unknown_c0_[4];
		unsigned char unknown_c4_[4];
		unsigned char unknown_c8_[8];
		unsigned char unknown_d0_;
	};
};

struct Struct_ov031_02236174_2 {
	Struct_ov031_02236174 unknown_0_;
	unsigned char unknown_f0_[4];
	unsigned char unknown_f4_;
	unsigned char unknown_f5_;
	unsigned char unknown_f6_;
	unsigned char unknown_f7_[9];
};

struct Struct_ov031_02290cfc_3 { Struct_ov031_02236174_2* unknown_0_; };
extern Struct_ov031_02290cfc_3 data_ov031_02290cfc;

// USA: func_ov031_02236174
extern "C" ARM void func_ov031_02236174(void) {
	Struct_ov031_02236174_2* var0 = &data_ov031_02290cfc.unknown_0_[4];
	Struct_ov031_02236174* var1 = &data_ov031_02290cfc.unknown_0_[var0->unknown_f4_].unknown_0_;

	*var1 = var0->unknown_0_;

	if (var0->unknown_f5_ != 0) {
		VectorizedMemset(var1->unknown_c0_, 0, 4);
		VectorizedMemset(var1->unknown_c4_, 0, 4);
		var1->unknown_d0_ = 0;
	} else {
		VectorizedInvertedMemcpy(var0->unknown_0_.unknown_c0_, var1->unknown_c0_, 4);
		VectorizedInvertedMemcpy(var0->unknown_0_.unknown_c4_, var1->unknown_c4_, 4);
		var1->unknown_d0_ = func_ov031_0221b158(var0->unknown_f0_);
	}

	if (var0->unknown_f6_ != 0) {
		VectorizedMemset(var1->unknown_c8_, 0, 8);
	} else {
		VectorizedInvertedMemcpy(var0->unknown_0_.unknown_c8_, var1->unknown_c8_, 8);
	}

	func_ov031_02236570(var0->unknown_f4_);
}
