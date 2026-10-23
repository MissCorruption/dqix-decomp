#include <globaldefs.h>

struct Struct_ov031_02213f14_3 {
	unsigned char unknown_0_0_ : 4;
	unsigned char unknown_0_4_ : 4;
	unsigned char unknown_1_;
	unsigned char unknown_2_;
	unsigned char unknown_3_;
	char unknown_4_[0x20];
};

struct Struct_ov031_02213f14 {
	char unknown_0_[0xa];
	unsigned short unknown_a_;
	char unknown_c_[0xb4];
};

struct Struct_ov031_02213f14_2 {
	char unknown_0_[0x300];
	Struct_ov031_02213f14_3 unknown_300_[9];
	char unknown_444_[0x2c];
	Struct_ov031_02213f14 unknown_470_[11];
	char unknown_cb0_[0x5c];
	unsigned char unknown_d0c_0_ : 4;
	unsigned char unknown_d0c_4_ : 2;
	unsigned char unknown_d0c_6_ : 2;
	unsigned char unknown_d0d_;
	unsigned char unknown_d0e_;
	unsigned char unknown_d0f_;
	unsigned char unknown_d10_;
	unsigned char unknown_d11_;
	unsigned char unknown_d12_;
	unsigned char unknown_d13_;
};

extern "C" int func_ov031_02213800(Struct_ov031_02213f14* arg0);
extern "C" int func_ov031_022145b4(Struct_ov031_02213f14* arg0);
extern "C" int strncmp(const void*, const void*, unsigned int);

// USA: func_ov031_02213f14
extern "C" ARM unsigned char func_ov031_02213f14(Struct_ov031_02213f14_2* arg0) {
	Struct_ov031_02213f14* var0;
	int var1;
	int var2;

	var0 = &arg0->unknown_470_[arg0->unknown_d13_];
	var1 = 0;
	if (arg0->unknown_d0c_6_ == 0) {
		int var3;
		char* var4;
		char* var5;
		Struct_ov031_02213f14_3* var6;

		var3 = 0;
		if (var0->unknown_a_ == 0x20) {
			var1 = func_ov031_02213800(var0);
			if (var1 > 0) {
				var3++;
			} else {
				var1 = 0;
			}
		} else if (var0->unknown_a_ == 8) {
			var1 = func_ov031_022145b4(var0);
			if (var1 != 0) {
				var3++;
			} else {
				var1 = 0;
			}
		}
		var2 = 0;
		if (var2 < arg0->unknown_d10_) {
			var4 = (char*)arg0;
			var5 = arg0->unknown_300_[0].unknown_4_;
			var6 = arg0->unknown_300_;
			do {
				if (var0->unknown_a_ == *(unsigned char*)(var4 + 0x303) && strncmp(var0->unknown_c_, var5, var0->unknown_a_) == 0) {
					if (var3 == 0) {
						var1 = *(unsigned char*)(var4 + 0x301);
					} else {
						var6->unknown_0_4_ = 1;
						arg0->unknown_d0c_6_ = 1;
					}
					var3++;
				}
				var2++;
				var4 += 0x24;
				var5 += 0x24;
				var6++;
			} while (var2 < arg0->unknown_d10_);
		}
	} else {
		Struct_ov031_02213f14_3* var7;
		char* var8;
		int var9;

		var2 = 0;
		var9 = 0;
		if (var2 < arg0->unknown_d10_) {
			var8 = (char*)arg0;
			var7 = arg0->unknown_300_;
			do {
				if (var7->unknown_0_4_ == 1) {
					if (var9 == 0) {
						var7->unknown_0_4_ = 0;
						var1 = *(unsigned char*)(var8 + 0x301);
					}
					var9++;
				}
				var2++;
				var7++;
				var8 += 0x24;
			} while (var2 < arg0->unknown_d10_);
		}
		if (var9 == 1) {
			arg0->unknown_d0c_6_ = 0;
		}
	}
	return var1;
}
