#if defined(jpn)
#define R(j,u) (j)
#define data_ov015_02193d14 data_ov015_02194844
#define data_ov015_02193d2c data_ov015_0219485c
#define data_ov015_02193d38 data_ov015_02194868
#define data_ov027_021dd8e0 data_ov027_021de1a0
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_0219050c func_ov015_021910b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern void *data_ov027_021e33ec;
extern unsigned char data_ov027_021dd8e0;

extern "C" void VectorizedMemset(void *dst, int val, int size);
extern "C" void VectorizedInvertedMemcpy(const void *src, void *dst, int size);

struct Struct_ov027_021d9704 {
	unsigned char unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
};

extern "C" void *func_ov027_021dd638(struct Struct_ov027_021d9704 *arg0, void *arg1);
extern "C" int func_ov027_021dab00(int arg0, int arg1, void *arg2);

#pragma optimize_for_size off
// USA: func_ov027_021d9704
extern "C" ARM int func_ov027_021d9704(void) {
	unsigned char var0[16];
	signed char var1 = -1;
	unsigned short var2 = 0;
	unsigned char var3;
	unsigned short var4;
	unsigned char var5;
	char *var6;

	VectorizedMemset(var0, 0, 16);

	var6 = (char *)data_ov027_021e33ec;

	var4 = 1;
	do {
		if (*(int *)(var6 + 0x1000 + var4 * 4 + 0x4e4) == 5) {
			signed char var7 = *(signed char *)(var6 + 0x1500 + var4 + 0x25);
			var0[var7]++;
		}
		var4++;
	} while (var4 <= 15);

	var3 = data_ov027_021dd8e0;
	var5 = 0;
	do {
		var3 = (var3 + 1) % 16;
		if (*(unsigned char *)(var6 + var3 * 0x5d4 + 0x1000 + 0xd52) != 0 && var0[var3] != 0) {
			var1 = (signed char)var3;
			break;
		}
		var5++;
	} while (var5 < 16);

	if (var1 == -1) {
		return 0x15;
	}

	data_ov027_021dd8e0 = var1;

	var4 = 1;
	do {
		if (*(int *)(var6 + 0x1000 + var4 * 4 + 0x4e4) == 5) {
			if (var1 == *(signed char *)(var6 + 0x1500 + var4 + 0x25)) {
				var2 |= (1 << var4);
			}
		}
		var4++;
	} while (var4 <= 15);

	{
		struct Struct_ov027_021d9704 var8;
		void *var9;

		var8.unknown_0_ = 3;
		var8.unknown_2_ = (unsigned short)var1;
		var9 = func_ov027_021dd638(&var8, var6);
		if (var9 != NULL) {
			VectorizedInvertedMemcpy((char *)data_ov027_021e33ec + 0x1400 + 0x388 + var1 * 0x5d4, var9, 0xe4);
		}
	}

	return func_ov027_021dab00(0xea, var2, data_ov027_021e33ec);
}
