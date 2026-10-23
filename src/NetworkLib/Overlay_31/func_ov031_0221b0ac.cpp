#include <globaldefs.h>

extern "C" int func_ov031_0221b780(int arg0, int arg1, int arg2);
extern "C" int func_ov031_0221b7fc(int arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov031_0221b848(void);
extern "C" unsigned short func_020d1cc8(const unsigned short* arg0, const unsigned char* arg1, unsigned int arg2);

struct Struct_ov031_0224e6a0_2 {
	unsigned char unknown_0_[8];
	int unknown_8_;
};
extern Struct_ov031_0224e6a0_2 data_ov031_0224e6a0;

struct Struct_ov031_0221b0ac {
	unsigned char unknown_0_[0xfe];
	unsigned short unknown_fe_;
};

struct Struct_ov031_0221b0ac_2 {
	Struct_ov031_0221b0ac unknown_0_[4];
	unsigned char unknown_400_[0x100];
	unsigned short unknown_500_[0x100];
};

// USA: func_ov031_0221b0ac
extern "C" ARM int func_ov031_0221b0ac(int arg0) {
	Struct_ov031_0221b0ac_2* var0 = (Struct_ov031_0221b0ac_2*)arg0;
	int var1;
	int var2 = data_ov031_0224e6a0.unknown_8_;

	for (var1 = 0; var1 < 4; var1++) {
		Struct_ov031_0221b0ac* var3 = &var0->unknown_0_[var1];
		int var4 = var2 + var1 * 0x100;
		var0->unknown_0_[var1].unknown_fe_ = func_020d1cc8(var0->unknown_500_, var3->unknown_0_, 0xfe);
		do {
			func_ov031_0221b780(var4, 0x100, (int)var3);
		} while (func_ov031_0221b7fc((int)var3, var4, 0x100, (int)var0->unknown_400_) == 0);
	}

	return func_ov031_0221b848() != 0;
}
