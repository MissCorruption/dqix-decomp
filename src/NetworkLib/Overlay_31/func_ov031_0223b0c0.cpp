#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_ov031_0223a2b0(void* arg0);
extern "C" int func_ov031_02239be8(void);
extern "C" unsigned short func_ov031_02239bd4(void);
extern "C" int func_ov031_0223a288(int arg0);

struct Struct_ov031_0223b0c0 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned char unknown_4_[0x40];
};

struct Struct_ov031_0223b0c0_2 {
	unsigned char unknown_0_[0x100];
	unsigned char unknown_100_[2][0x44];
	unsigned char unknown_188_[0x204 - 0x188];
	int unknown_204_;
	int unknown_208_[2];
	unsigned char unknown_210_[0xa90 - 0x210];
	unsigned char unknown_a90_;
	unsigned char unknown_a91_;
	unsigned char unknown_a92_;
	unsigned char unknown_a93_;
	unsigned char unknown_a94_[0xab0 - 0xa94];
	Struct_ov031_0223b0c0* unknown_ab0_;
};

extern Struct_ov031_0223b0c0_2* data_ov031_02290d20;

// USA: func_ov031_0223b0c0
extern "C" ARM void func_ov031_0223b0c0(unsigned short arg0, unsigned short arg1, const void* arg2) {
	if (data_ov031_02290d20->unknown_a93_ == 1) {
		data_ov031_02290d20->unknown_ab0_->unknown_0_ = arg0;
		data_ov031_02290d20->unknown_ab0_->unknown_2_ = arg1;
		VectorizedInvertedMemcpy(arg2, data_ov031_02290d20->unknown_ab0_->unknown_4_, 0x40);
	} else {
		data_ov031_02290d20->unknown_204_++;
		data_ov031_02290d20->unknown_ab0_->unknown_0_ = 0xbc;
		data_ov031_02290d20->unknown_ab0_->unknown_4_[0] = data_ov031_02290d20->unknown_a92_;
	}

	if (func_ov031_02239be8() != 5) {
		return;
	}
	if (func_ov031_0223a2b0(data_ov031_02290d20) == 0) {
		data_ov031_02290d20->unknown_204_ += 4;
		return;
	}

	if (data_ov031_02290d20->unknown_a93_ == 0) {
		data_ov031_02290d20->unknown_204_++;
	} else {
		data_ov031_02290d20->unknown_204_ = 0;
		if (func_ov031_02239bd4() != 3) {
			data_ov031_02290d20->unknown_a90_ = 0x1b;
			return;
		}
	}

	unsigned short var0 = 0;
	do {
		int var1 = func_ov031_0223a288(var0);
		if (var1 != 0) {
			VectorizedInvertedMemcpy((const void*)var1, data_ov031_02290d20->unknown_100_[var0], 0x44);
			data_ov031_02290d20->unknown_208_[var0] = 1;
		} else {
			data_ov031_02290d20->unknown_208_[var0] = 0;
		}
	} while (++var0 < 2);
}
