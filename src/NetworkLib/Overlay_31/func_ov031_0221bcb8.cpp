#include <globaldefs.h>

extern "C" int func_02001aec(unsigned char*, void*, int);
extern "C" int func_ov031_0221b1cc(unsigned char*);
extern "C" int func_ov031_0221b258(unsigned char*);
extern "C" void func_ov031_0221b19c(int arg0, unsigned char* arg1);
extern "C" int func_ov031_0221b1f4(unsigned char*, unsigned char*);

extern int data_ov031_022460c0;

// USA: func_ov031_0221bcb8
extern "C" ARM int func_ov031_0221bcb8(unsigned char* arg0) {
	unsigned char var0 = arg0[0xe7];
	if (var0 == 0xff) return 1;
	if (var0 > 2) return 0;
	if (!func_ov031_0221b1cc(arg0 + 0x40)) return 0;

	if (func_02001aec(arg0 + 0xc0, &data_ov031_022460c0, 4) != 0) {
		if (!func_ov031_0221b258(arg0 + 0xc4)) return 0;
		if (arg0[0xd0] > 0x20) return 0;
		unsigned char var1;
		func_ov031_0221b19c(arg0[0xd0], &var1);
		if (!func_ov031_0221b1f4(arg0 + 0xc0, &var1)) return 0;
	}

	if (func_02001aec(arg0 + 0xc8, &data_ov031_022460c0, 4) != 0) {
		if (func_ov031_0221b258(arg0 + 0xc8) == 0) {
			if (!func_ov031_0221b258(arg0 + 0xcc)) return 0;
		}
	}

	return 1;
}
