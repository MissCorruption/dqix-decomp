#include <globaldefs.h>

extern "C" void VectorizedMemset(void* dst, int val, unsigned int len);
extern "C" void VectorizedInvertedMemcpy(void* dst, const void* src, unsigned int len);
extern "C" int func_02005a94(signed char* arg0);

// USA: func_ov031_022366d8
extern "C" ARM void func_ov031_022366d8(unsigned char* arg0, unsigned char* arg1) {
	unsigned char var0[4];
	VectorizedMemset(var0, 0, 4);

	int var1 = 0;
	int var2 = 0;
	do {
		VectorizedInvertedMemcpy(arg0 + var2, var0, 3);

		int var3 = 0;
		unsigned char* var4 = var0;
		for (;;) {
			if (*var4 != 0) break;
			var3++;
			*var4 = ' ';
			var4++;
			if (var3 >= 3) break;
		}

		arg1[var1] = (unsigned char)func_02005a94((signed char*)var0);
		var1++;
		var2 += 3;
	} while (var1 < 4);
}
