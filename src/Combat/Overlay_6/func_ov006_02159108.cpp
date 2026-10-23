#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov006_02159108 {
	unsigned char unknown_0_[R(0x40, 0x48)];
	short** unknown_48_;
	unsigned char** unknown_4c_;
	unsigned short* unknown_50_;
	unsigned char unknown_54_[0x372 - R(0x4c, 0x54)];
	unsigned short unknown_372_[3];
	short unknown_378_[3];
	unsigned char unknown_37e_[0x38c - 0x37e];
	unsigned char unknown_38c_[3];
};

// USA: func_ov006_02159108
extern "C" ARM void func_ov006_02159108(struct Struct_ov006_02159108* arg0, int arg1, int arg2, int arg3) {
	short* var0 = arg0->unknown_48_[arg1];
	unsigned char* var1 = arg0->unknown_4c_[arg1];
	unsigned short var2 = arg0->unknown_50_[arg1];
	unsigned short var3;
	unsigned char var4;
	for (var3 = 0; var3 < var2; var3++) {
		if (arg2 == var0[var3]) {
			var1[var3] -= arg3;
		}
	}
	for (var4 = 0; var4 < 3; var4++) {
		if (arg0->unknown_378_[var4] <= 0) {
			arg0->unknown_372_[var4] = arg1;
			arg0->unknown_378_[var4] = arg2;
			arg0->unknown_38c_[var4] = arg3;
			return;
		}
	}
}
