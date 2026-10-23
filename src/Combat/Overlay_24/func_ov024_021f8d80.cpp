#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov024_021f8d80_3 {
	unsigned short unknown_0_;
	char unknown_2_[0x14 - 2];
	unsigned int unknown_14_;
};
struct Struct_ov024_021f8d80 {
	char unknown_0_[0x138];
	struct Struct_ov024_021f8d80_3* unknown_138_;
};
struct Struct_ov024_021f8d80_2 {
	char unknown_0_[0x10];
	unsigned int unknown_10_;
};

// USA: func_ov024_021f8d80
extern "C" ARM int func_ov024_021f8d80(void* arg0, int* arg1, struct Struct_ov024_021f8d80_2* arg2, struct Struct_ov024_021f8d80** arg3, int arg4, float* arg5, float* arg6, int arg7) {
	int var0[8];
	__clear(var0, sizeof(var0));
	for (int var1 = 0; var1 < arg4; var1++) {
		struct Struct_ov024_021f8d80_3* var2 = arg3[var1]->unknown_138_;
		unsigned int var3 = var2->unknown_14_;
		if ((arg2->unknown_10_ & 0x400) && (var3 & 0x200)) {
			var0[var1] = -1;
		} else if (var3 & 8) {
			var0[var1] = 1;
		} else if (var3 & 0x20) {
			var0[var1] = 2;
		} else if (var3 & 0x10) {
			var0[var1] = 3;
		} else if (var2->unknown_0_ <= arg6[var1]) {
			var0[var1] = 5;
		} else {
			var0[var1] = 4;
		}
	}
	int var4 = 0;
	for (int var5 = 1; var5 < arg4; var5++) {
		if (var0[var5] > var0[var4]) {
			var4 = var5;
		} else if (var0[var5] == var0[var4]) {
			int var6 = arg3[var5]->unknown_138_->unknown_0_;
			int var7 = arg3[var4]->unknown_138_->unknown_0_;
			int var8 = 0;
			int var9 = var6 - (int)arg5[var5] * arg7;
			int var10 = var7 - (int)arg5[var4] * arg7;
			if (var9 <= 0) {
				if (var10 > 0) {
					var8 = 1;
				} else if (var6 > var7) {
					var8 = 1;
				}
			} else if (var9 < var10) {
				var8 = 1;
			}
			if (var8) var4 = var5;
		}
	}
	*arg1 = var4;
	return var0[var4] >= 0;
}
