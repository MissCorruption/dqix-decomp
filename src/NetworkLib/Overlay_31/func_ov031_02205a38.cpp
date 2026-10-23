#include <globaldefs.h>

struct Struct_ov031_02205a38_2 {
	char unknown_0_[0xfe];
	signed char unknown_fe_;
};

struct Struct_ov031_02205a38 {
	char unknown_0_[0x64];
	Struct_ov031_02205a38_2* unknown_64_;
	char unknown_68_[0x73 - 0x68];
	signed char unknown_73_;
};

extern "C" int func_ov031_02205ef8(Struct_ov031_02205a38* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_ov031_02205e60(Struct_ov031_02205a38* arg0);

struct Struct_ov031_02205a38_3;
extern "C" int func_ov031_02205ad4(Struct_ov031_02205a38_3* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_ov031_02205a38
extern "C" ARM int func_ov031_02205a38(Struct_ov031_02205a38* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
	Struct_ov031_02205a38_2* var0 = arg0->unknown_64_;
	bool var1 = ((arg6 & 2) != 0) && (var0 != NULL);
	signed char var2;
	if (var1) {
		var2 = var0->unknown_fe_;
		var0->unknown_fe_ = 1;
	}
	int var3;
	if (arg0->unknown_73_ == 1) {
		var3 = func_ov031_02205ef8(arg0, arg1, arg2, arg3, arg4, arg5);
	} else {
		var3 = func_ov031_02205ad4((Struct_ov031_02205a38_3*)arg0, arg1, arg2, arg3, arg4, arg5);
		if (var3 >= 0) {
			func_ov031_02205e60(arg0);
		}
	}
	if (var1) {
		var0->unknown_fe_ = var2;
	}
	return var3;
}
