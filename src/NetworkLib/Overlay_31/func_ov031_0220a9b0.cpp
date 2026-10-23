#include <globaldefs.h>

extern "C" void* func_ov031_0220963c(void* arg0, void* arg1);
extern "C" void func_ov031_022037a8(void* arg0, void* arg1, int arg2, int arg3, void* arg4);

// USA: func_ov031_0220a9b0
extern "C" ARM void func_ov031_0220a9b0(void* arg0) {
	char* var0 = *(char**)((char*)arg0 + 0xc);
	if (*(unsigned char*)(var0 + 0x455) == 8) {
		unsigned char var1[0x1c];
		var1[0] = 0x15;
		var1[1] = 0x3;
		var1[2] = 0;
		var1[3] = 0;
		var1[4] = 0x2;
		var1[5] = 0x1;
		var1[6] = 0;
		func_ov031_022037a8(var1, func_ov031_0220963c(var0, var1), 0, 0, arg0);
	}
	*(unsigned char*)(var0 + 0x455) = 0;
}
