#include <globaldefs.h>

struct Struct_ov031_0222b918_2 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
};
struct Struct_ov031_0222b918 {
	unsigned char unknown_0_[0x10];
	Struct_ov031_0222b918_2* unknown_10_[5];
	Struct_ov031_0222b918_2* unknown_24_[5];
	unsigned char unknown_38_[0x42 - 0x38];
	unsigned short unknown_42_[3];
	unsigned short unknown_48_[4];
	unsigned char unknown_50_[0x51 - 0x50];
	unsigned char unknown_51_;
};
struct Struct_ov031_02290c8c_4 {
	unsigned char unknown_0_[2];
	unsigned short unknown_2_;
	Struct_ov031_0222b918* unknown_4_;
};
extern Struct_ov031_02290c8c_4 data_ov031_02290c8c;
extern const unsigned char data_ov031_02248eac[3];
extern const unsigned char data_ov031_02248eb0[4];

extern "C" ARM Struct_ov031_0222b918_2* func_ov031_0223be44(int arg0, int arg1);
extern "C" int func_ov031_0223bdb0(int, int, void*);

// USA: func_ov031_0222b918
extern "C" ARM void func_ov031_0222b918(void) {
	int var0;
	int var1;
	var0 = data_ov031_02290c8c.unknown_4_->unknown_51_;
	if (var0 > 5) {
		var0 = 5;
	}
	for (var1 = 0; var1 < var0; var1++) {
		data_ov031_02290c8c.unknown_4_->unknown_10_[var1] = func_ov031_0223be44(0, 0x2e);
		data_ov031_02290c8c.unknown_4_->unknown_24_[var1] = func_ov031_0223be44(0, 0x18);
	}
	for (var1 = 0; var1 < sizeof(data_ov031_02248eac); var1++) {
		func_ov031_0223bdb0(0, data_ov031_02248eac[var1], data_ov031_02290c8c.unknown_4_->unknown_10_[0]);
		data_ov031_02290c8c.unknown_4_->unknown_42_[var1] = data_ov031_02290c8c.unknown_4_->unknown_10_[0]->unknown_4_ & 0x3ff;
	}
	for (var1 = 0; var1 < sizeof(data_ov031_02248eb0); var1++) {
		func_ov031_0223bdb0(0, data_ov031_02248eb0[var1], data_ov031_02290c8c.unknown_4_->unknown_24_[0]);
		data_ov031_02290c8c.unknown_4_->unknown_48_[var1] = data_ov031_02290c8c.unknown_4_->unknown_24_[0]->unknown_4_ & 0x3ff;
	}
	for (var1 = 0; var1 < var0; var1++) {
		data_ov031_02290c8c.unknown_4_->unknown_10_[var1]->unknown_4_ = (data_ov031_02290c8c.unknown_4_->unknown_10_[var1]->unknown_4_ & ~0xc00) | 0xc00;
		data_ov031_02290c8c.unknown_4_->unknown_24_[var1]->unknown_4_ = (data_ov031_02290c8c.unknown_4_->unknown_24_[var1]->unknown_4_ & ~0xc00) | 0xc00;
	}
}
