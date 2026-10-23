#include <globaldefs.h>

struct Struct_ov001_02156ba0_2 {
	unsigned int unknown_0_;
	unsigned int unknown_4_;
	unsigned int unknown_8_[4][3];
};

struct Struct_ov001_02156ba0 {
	struct Struct_ov001_02156ba0_2 unknown_0_[16];
	unsigned int unknown_380_;
	unsigned int unknown_384_;
	unsigned int unknown_388_;
	unsigned int unknown_38c_[3];
	unsigned int unknown_398_;
};

// USA: func_ov001_02156ba0
extern "C" ARM void func_ov001_02156ba0(struct Struct_ov001_02156ba0* arg0) {
	int var0, var1;
	for (var0 = 0; var0 < 16; var0++) {
		arg0->unknown_0_[var0].unknown_0_ = 0;
		arg0->unknown_0_[var0].unknown_4_ = 0;
		for (var1 = 0; var1 < 3; var1++) {
			arg0->unknown_0_[var0].unknown_8_[0][var1] = 0;
			arg0->unknown_0_[var0].unknown_8_[1][var1] = 0;
			arg0->unknown_0_[var0].unknown_8_[2][var1] = 0;
			arg0->unknown_0_[var0].unknown_8_[3][var1] = 0;
		}
	}
	arg0->unknown_380_ = 0;
	arg0->unknown_384_ = 0;
	arg0->unknown_388_ = 0;
	arg0->unknown_398_ = 0;
}
