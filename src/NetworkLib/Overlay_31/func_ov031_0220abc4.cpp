#include <globaldefs.h>

struct Struct_ov031_0220abc4 {
	unsigned int unknown_0_[4];
};

extern "C" ARM void func_ov031_0220abac(void* arg0, const void* arg1, unsigned int arg2);

extern unsigned char data_ov031_02249764[];
extern unsigned int data_ov031_022497e4[];

#define MD5_F(x, y, z) ((z) ^ ((x) & ((y) ^ (z))))
#define MD5_G(x, y, z) ((y) ^ ((z) & ((x) ^ (y))))
#define MD5_H(x, y, z) ((x) ^ (y) ^ (z))
#define MD5_I(x, y, z) ((y) ^ ((x) | ~(z)))
#define MD5_ROTL(v, s) (((v) << (s)) | ((v) >> (32 - (s))))
#define MD5_STEP(f, a, b, c, d, j, s) \
	a += f(b, c, d) + var4[data_ov031_02249764[var5 + (j)]] + data_ov031_022497e4[var5 + (j)]; \
	a = b + MD5_ROTL(a, s)

// USA: func_ov031_0220abc4
extern "C" ARM void func_ov031_0220abc4(Struct_ov031_0220abc4* arg0, const void* arg1) {
	unsigned int var0 = arg0->unknown_0_[0];
	unsigned int var1 = arg0->unknown_0_[1];
	unsigned int var2 = arg0->unknown_0_[2];
	unsigned int var3 = arg0->unknown_0_[3];
	unsigned int var4[16];
	int var5;
	int var6;

	func_ov031_0220abac(var4, arg1, 0x40);
	var5 = 0;

	var6 = 0;
	do {
		MD5_STEP(MD5_F, var0, var1, var2, var3, 0, 7);
		MD5_STEP(MD5_F, var3, var0, var1, var2, 1, 12);
		MD5_STEP(MD5_F, var2, var3, var0, var1, 2, 17);
		MD5_STEP(MD5_F, var1, var2, var3, var0, 3, 22);
		var5 += 4;
		var6++;
	} while (var6 < 4);

	var6 = 0;
	do {
		MD5_STEP(MD5_G, var0, var1, var2, var3, 0, 5);
		MD5_STEP(MD5_G, var3, var0, var1, var2, 1, 9);
		MD5_STEP(MD5_G, var2, var3, var0, var1, 2, 14);
		MD5_STEP(MD5_G, var1, var2, var3, var0, 3, 20);
		var5 += 4;
		var6++;
	} while (var6 < 4);

	var6 = 0;
	do {
		MD5_STEP(MD5_H, var0, var1, var2, var3, 0, 4);
		MD5_STEP(MD5_H, var3, var0, var1, var2, 1, 11);
		MD5_STEP(MD5_H, var2, var3, var0, var1, 2, 16);
		MD5_STEP(MD5_H, var1, var2, var3, var0, 3, 23);
		var5 += 4;
		var6++;
	} while (var6 < 4);

	var6 = 0;
	do {
		MD5_STEP(MD5_I, var0, var1, var2, var3, 0, 6);
		MD5_STEP(MD5_I, var3, var0, var1, var2, 1, 10);
		MD5_STEP(MD5_I, var2, var3, var0, var1, 2, 15);
		MD5_STEP(MD5_I, var1, var2, var3, var0, 3, 21);
		var5 += 4;
		var6++;
	} while (var6 < 4);

	arg0->unknown_0_[0] += var0;
	arg0->unknown_0_[1] += var1;
	arg0->unknown_0_[2] += var2;
	arg0->unknown_0_[3] += var3;
}
