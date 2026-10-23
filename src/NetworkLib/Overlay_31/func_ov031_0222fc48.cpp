#include <globaldefs.h>

struct Struct_ov031_0222fc48 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_;
	unsigned char unknown_7_;
};

struct Struct_ov031_02290ca0_10 {
	unsigned char unknown_0_[8];
	struct Struct_ov031_0222fc48* unknown_8_;
};

extern struct Struct_ov031_02290ca0_10 data_ov031_02290ca0;

extern "C" char* func_ov031_02235c70(void);
extern "C" int func_ov031_0222fd9c(int arg0);
extern "C" void func_ov031_0222fe30(int arg0, int arg1, int arg2);

// USA: func_ov031_0222fc48
extern "C" ARM void func_ov031_0222fc48(int arg0, int arg1) {
	unsigned char* var0 = (unsigned char*)func_ov031_02235c70();
	int var1;
	int var2;

	switch (arg0) {
	case 0:
	case 1:
		var1 = 0;
		var2 = var1;
		if (func_ov031_0222fd9c(var1) == 0) var2 = 2;
		break;
	case 2: {
		int var3 = 0;
		int var4;
		var2 = var3;
		if (var0[0xf5] != 0) {
			var1 = 1;
			var4 = 4;
		} else {
			var1 = 2;
			var4 = 3;
		}
		struct Struct_ov031_0222fc48* var5 = data_ov031_02290ca0.unknown_8_;
		if (var5->unknown_4_ != 0) var2 = 1;
		if (var5->unknown_5_ != 0) var3 = 1;
		func_ov031_0222fe30(var4, var3, arg1);
		break;
	}
	case 3:
	case 4:
	case 5:
		var1 = 0;
		var2 = var0[0xf5] != 0 ? 2 : var1;
		break;
	case 6: {
		int var6;
		int var7 = 0;
		var2 = var7;
		if (var0[0xf6] != 0) {
			var1 = 1;
			var6 = 4;
		} else {
			if (var0[0xf5] == 0) var2 = 2;
			var1 = 2;
			var6 = 3;
		}
		struct Struct_ov031_0222fc48* var8 = data_ov031_02290ca0.unknown_8_;
		if (var8->unknown_6_ != 0) var2 = 1;
		if (var8->unknown_7_ != 0) var7 = 1;
		func_ov031_0222fe30(var6, var7, arg1);
		break;
	}
	case 7:
	case 8:
		var1 = 0;
		var2 = var0[0xf6] != 0 ? 2 : var1;
		break;
	default:
		var1 = 0;
		var2 = 2;
		break;
	}

	func_ov031_0222fe30(var1, var2, arg1);
}
