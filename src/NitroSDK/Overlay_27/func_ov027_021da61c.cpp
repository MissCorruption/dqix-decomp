#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void func_ov027_021da690(void* arg0, int* arg1, void* arg2, unsigned int* arg3);
extern int data_ov027_021dd8b8[3];

// USA: func_ov027_021da61c
extern "C" ARM void func_ov027_021da61c(void* arg0, void* arg1) {
	unsigned int var0 = 0x22c0000;
	*(int*)arg0 = *(int*)((char*)arg1 + 0x24);
	*(int*)((char*)arg0 + 4) = *(int*)((char*)arg1 + 0x34);
	int* var1 = data_ov027_021dd8b8;
	char* var2 = (char*)arg0 + 0xc;
	int var3 = 0;
	do {
		func_ov027_021da690(arg1, var1, var2, &var0);
		var3++;
		var2 += 0x10;
		var1++;
	} while (var3 < 3);
	VectorizedInvertedMemcpy((char*)arg1 + 0x160, (char*)arg0 + 0x3c, 0x88);
}
