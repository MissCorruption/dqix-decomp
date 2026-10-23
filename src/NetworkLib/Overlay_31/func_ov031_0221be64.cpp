#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern unsigned char data_ov031_022460c4[];
extern unsigned char data_ov031_022460cc[];

// USA: func_ov031_0221be64
extern "C" ARM unsigned long long func_ov031_0221be64(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
	union { unsigned long long unknown_0_; unsigned char unknown1_0_[8]; } var0;
	unsigned char var1[8];
	unsigned char* var2;
	unsigned char* var3;
	unsigned char* var4;
	unsigned char* var5;
	unsigned char* var6;
	int var7;
	int var8;
	int var9;
	int var10;

	var0.unknown_0_ = ((unsigned long long)arg3 & 3) | (((unsigned long long)arg2 & 1) << 2) |
	    (((unsigned long long)arg1 & 0xffffff) << 3) | (((unsigned long long)arg0 & 0xffff) << 27);
	var2 = var0.unknown1_0_;
	var7 = 0;
	do {
		*var2 ^= 0xd6;
		var2++;
		var7++;
	} while (var7 < 6);
	var3 = var0.unknown1_0_;
	var8 = 0;
	do {
		*var3 = (data_ov031_022460cc[(*var3 >> 4) & 0xf] << 4) | data_ov031_022460cc[*var3 & 0xf];
		var3++;
		var8++;
	} while (var8 < 5);
	VectorizedInvertedMemcpy(var0.unknown1_0_, var1, 8);
	var5 = var1;
	var6 = data_ov031_022460c4;
	var9 = 0;
	do {
		var0.unknown1_0_[*var6] = *var5;
		var5++;
		var6++;
		var9++;
	} while (var9 < 5);
	var0.unknown1_0_[7] = 0;
	var0.unknown1_0_[6] = 0;
	var0.unknown1_0_[5] &= 7;
	var0.unknown_0_ <<= 1;
	var0.unknown1_0_[0] |= (var0.unknown1_0_[5] >> 3) & 1;
	var4 = var0.unknown1_0_;
	var10 = 0;
	do {
		*var4 ^= 0x67;
		var4++;
		var10++;
	} while (var10 < 6);
	var0.unknown1_0_[7] = 0;
	var0.unknown1_0_[6] = 0;
	var0.unknown1_0_[5] &= 7;
	return var0.unknown_0_;
}
