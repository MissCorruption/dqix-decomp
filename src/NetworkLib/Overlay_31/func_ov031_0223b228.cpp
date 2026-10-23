#include <globaldefs.h>

struct Struct_ov031_0223b228_2 {
	unsigned short unknown_0_;
	unsigned char unknown_2_[0x42];
};

struct Struct_ov031_0223b228 {
	unsigned char unknown_0_[0x100];
	Struct_ov031_0223b228_2 unknown_100_[3];
	unsigned char unknown_1cc_[0x34];
	unsigned short unknown_200_;
	unsigned short unknown_202_;
	unsigned char unknown_204_[4];
	void* unknown_208_[16];
	unsigned char unknown_248_[0x84b];
	unsigned char unknown_a93_;
	unsigned int unknown_a94_;
};

extern Struct_ov031_0223b228* data_ov031_02290d20;

// USA: func_ov031_0223b228
extern "C" ARM void func_ov031_0223b228(void) {
	int var0 = 0;
	do {
		void* var1 = *(void**)((char*)data_ov031_02290d20->unknown_208_ + var0 * sizeof(void*));
		if (var1 == 0) {
			continue;
		}
		Struct_ov031_0223b228_2* var2 = (Struct_ov031_0223b228_2*)((char*)data_ov031_02290d20->unknown_100_ + var0 * sizeof(Struct_ov031_0223b228_2));
		if (var0 != 1) {
			continue;
		}
		if (data_ov031_02290d20->unknown_a93_ == 1) {
			if (var2->unknown_0_ != 0x10) {
				return;
			}
			data_ov031_02290d20->unknown_a94_++;
			if ((data_ov031_02290d20->unknown_a94_ & 1) != 0) {
				continue;
			}
			data_ov031_02290d20->unknown_200_++;
			if (data_ov031_02290d20->unknown_200_ >= 0x24) {
				data_ov031_02290d20->unknown_200_ = 0;
			}
		} else {
			data_ov031_02290d20->unknown_202_ = 0xbc;
			if (var2->unknown_0_ != 0xbd) {
				continue;
			}
			data_ov031_02290d20->unknown_a93_ = 1;
			data_ov031_02290d20->unknown_200_ = 0;
			data_ov031_02290d20->unknown_a94_ = 0;
		}
	} while (++var0 < 16);
}
