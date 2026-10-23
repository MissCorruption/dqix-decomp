#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_02189d68 func_ov012_0218a804
#define data_ov009_0218ac04 data_ov009_0218bb6c
#define data_ov013_02187d94 data_ov013_02188cd0
#define func_ov008_02187b20 func_ov008_021888fc
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov013_02185900 func_ov013_02186aec
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov009_021847c4 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_, unknown_14_, unknown_18_, unknown_1c_; };

extern "C" void func_ov009_021847c4(struct Struct_ov009_021847c4 *arg0);

extern const short data_ov009_0218ac04[] = {
	1, 64, 48, 128, 32, 0, 48, 1, 2,
	2, 32, 40, 32, 72, 40, 0, 5, 1,
	3, 32, 40, 32, 32, 40, 40, 5, 2,
	4, 32, 40, 32, 32, 40, 40, 5, 2,
	5, 32, 40, 32, 32, 40, 40, 5, 2,
	7, 40, 40, 32, 32, 48, 40, 4, 2,
	6, 40, 40, 32, 32, 48, 40, 4, 2,
	8, 24, 56, 16, 16, 16, 16, 11, 6,
	-1,
};

// USA: func_ov009_02188d9c
extern "C" ARM void func_ov009_02188d9c(void *arg0) {
	int *var0 = (int*)((char*)arg0 + R(0xbf0,0xc2c));
	int var1;

	func_ov009_021847c4((struct Struct_ov009_021847c4*)var0);

	var1 = 0;
	while (data_ov009_0218ac04[var1] >= 0) {
		if (*(signed char*)((char*)arg0 + R(0xc1c,0xc58)) == data_ov009_0218ac04[var1]) {
			int var2 = var1 + 1;
			int var3 = var1 + 2;
			int var4 = var1 + 3;
			int var5 = var1 + 4;
			int var6 = var1 + 5;
			int var7 = var1 + 6;
			int var8 = var1 + 7;
			int var9 = var1 + 8;
			var0[0] = data_ov009_0218ac04[var2];
			var0[1] = data_ov009_0218ac04[var3];
			var0[2] = data_ov009_0218ac04[var4];
			var0[3] = data_ov009_0218ac04[var5];
			var0[4] = data_ov009_0218ac04[var6];
			var0[5] = data_ov009_0218ac04[var7];
			var0[6] = data_ov009_0218ac04[var8];
			var0[7] = data_ov009_0218ac04[var9];
			return;
		}
		var1 += 9;
	}
}
