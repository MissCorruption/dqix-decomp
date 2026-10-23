#include <globaldefs.h>

struct Struct_ov031_02207074_2 {
	char unknown_0_[4];
	unsigned short unknown_4_;
};

struct Struct_ov031_02207074 {
	char unknown_0_[0xf8];
	unsigned int unknown_f8_;
	char unknown_fc_[0x104 - 0xfc];
	Struct_ov031_02207074_2* unknown_104_;
};

struct Struct_ov031_02206fa4 {
	char unknown_0_[0x44];
	unsigned int unknown_44_;
	char unknown_48_[0x64 - 0x48];
	Struct_ov031_02207074* unknown_64_;
	char unknown_68_[0x73 - 0x68];
	signed char unknown_73_;
};

// USA: func_ov031_02207074
extern "C" ARM int func_ov031_02207074(Struct_ov031_02206fa4* arg0) {
	Struct_ov031_02207074* var0 = arg0->unknown_64_;
	int var1 = 0;
	if (var0) {
		signed char var2 = arg0->unknown_73_;
		if (var2 == 1) {
			Struct_ov031_02207074_2* var3 = var0->unknown_104_;
			if (var3) var1 = var3->unknown_4_;
		} else if (var2 == 0 || var2 == 4) {
			var1 = arg0->unknown_44_ - var0->unknown_f8_;
		}
	}
	return var1;
}
