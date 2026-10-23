#include <globaldefs.h>

struct Struct_ov027_021e33e0_13 {
	unsigned char unknown_0_[0xc];
	unsigned char *unknown_c_;
};

extern Struct_ov027_021e33e0_13 data_ov027_021e33e0;

extern "C" int func_020d559c(int arg0, unsigned int arg1);
extern "C" void func_ov027_021db524(void);
extern "C" void VectorizedMemset(void *dst, int val, int size);
extern "C" void func_ov027_021dd5f4(int arg0);

// USA: func_ov027_021dcd5c
extern "C" ARM void func_ov027_021dcd5c(int arg0) {
	int var0;

	func_020d559c((int)func_ov027_021db524, arg0);
	if (arg0 == 0 || (unsigned int)arg0 >= 0x10) {
		return;
	}

	var0 = arg0 - 1;

	*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + 0x1400 + (var0 << 1) + 0x8a) = 0;

	VectorizedMemset(data_ov027_021e33e0.unknown_c_ + 0x1400 + 0xa8 + (var0 << 2), 0, 4);

	VectorizedMemset(data_ov027_021e33e0.unknown_c_ + 0x1340 + var0 * 0x16, 0, 0x16);

	func_ov027_021dd5f4(arg0);

	*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + 0x1700 + (var0 << 1) + 0x54) = 0;

	{
		signed char var1 = *(signed char *)(data_ov027_021e33e0.unknown_c_ + 0x1500 + var0 + 0x26);
		if (var1 != -1) {
			int var2 = ~(1 << arg0);
			int var3 = (unsigned char)var1 * 0x5d4;

			*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + var3 + 0x1d00 + 0x4e) &= var2;
			*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + var3 + 0x1d00 + 0x50) |= (1 << arg0);
			*(signed char *)(data_ov027_021e33e0.unknown_c_ + 0x1000 + (arg0 - 1) + 0x526) = -1;
			*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + var3 + 0x1d00 + 0x4c) &= var2;
		}
	}

	if (*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + 0x1500 + 0x36) & (1 << arg0)) {
		(*(unsigned char *)(data_ov027_021e33e0.unknown_c_ + 0x1000 + 0x535))--;
		*(unsigned short *)(data_ov027_021e33e0.unknown_c_ + 0x1500 + 0x36) &= ~(1 << arg0);
	}

	*(int *)(data_ov027_021e33e0.unknown_c_ + 0x1000 + (var0 << 2) + 0x4e8) = 0;
}
