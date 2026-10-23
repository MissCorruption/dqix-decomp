#include <globaldefs.h>

extern "C" int func_ov027_021dcef8(int arg0, int arg1, int arg2, int arg3, unsigned short arg4);

extern "C" void func_ov027_021dbdec(void);

struct Struct_ov027_021e33e0_15 {
	unsigned char unknown_0_[8];
	unsigned char* unknown_8_;
};

extern Struct_ov027_021e33e0_15 data_ov027_021e33e0;

// USA: func_ov027_021dcf44
#pragma optimize_for_size off
extern "C" ARM int func_ov027_021dcf44(int arg0, int arg1, int arg2) {
	unsigned char* var0 = data_ov027_021e33e0.unknown_8_;
	unsigned short var1 = (unsigned short)arg1;
	unsigned short var2 = (unsigned short)arg2;
	if (*(unsigned short*)(var0 + 0x528) == 0 || *(unsigned short*)(var0 + 0x526) == 1) {
		return 1;
	}
	unsigned short var3 = *(unsigned short*)(var0 + 0x524);
	switch (var3) {
	case 1: {
		unsigned short var4 = (*(unsigned short*)(var0 + 0x52c) == 0) ? 0x3e8 : 0;
		int var5 = func_ov027_021dcef8(*(int*)(var0 + 0x508), arg0, var1, var4, var2);
		if (var5 == 2) {
			data_ov027_021e33e0.unknown_8_[0x50c] = 1;
		}
		if (var5 == 2) {
			var5 = 0;
		}
		return var5;
	}
	case 2: {
		int var6 = func_ov027_021dcef8((int)&func_ov027_021dbdec, arg0, var1, 0, var2);
		if (var6 == 2) {
			data_ov027_021e33e0.unknown_8_[0x50c] = 1;
		}
		if (var6 == 2) {
			var6 = 0;
		}
		return var6;
	}
	default:
		return 1;
	}
}
