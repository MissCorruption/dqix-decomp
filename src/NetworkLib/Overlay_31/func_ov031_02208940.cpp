#include <globaldefs.h>

extern "C" void* VectorizedInvertedMemcpy(void* src, void* dst, int n);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" void func_ov031_02207c30(void* arg0);

// USA: func_ov031_02208940
extern "C" ARM void func_ov031_02208940(unsigned char* arg0, unsigned char* arg1) {
	VectorizedInvertedMemcpy(arg1 + 2, arg0 + 0x54, 0x20);
	int var0 = arg0[0x30];
	int var1 = arg1[0x22];
	arg1 += 0x23;
	if (var0 != 0 && var1 == 0x20 && func_02001aec(arg0 + 0x74, arg1, 0x20) == 0) {
		arg0[0x31] = 1;
	} else {
		if (var0 != 0) {
			func_ov031_02207c30(arg0);
		}
		if (var1 != 0) {
			VectorizedInvertedMemcpy(arg1, arg0 + 0x74, 0x20);
			arg0[0x30] = 1;
		} else {
			arg0[0x30] = 0;
		}
		arg0[0x31] = 0;
	}
	arg1 += var1;
	*(unsigned short*)(arg0 + 0x32) = (arg1[0] << 8) + arg1[1];
	arg0[0x455] = 2;
}
