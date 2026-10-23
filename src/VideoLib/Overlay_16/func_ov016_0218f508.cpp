#include <globaldefs.h>

// USA: func_ov016_0218f508
extern "C" ARM int func_ov016_0218f508(void* arg0, void* arg1) {
	char* var0 = (char*)arg0;
	char* var1 = (char*)arg1;
	*(void**)(var0 + 0xc) = var1;
	*(int*)(var0 + 0x4) = *(int*)(var1 + 0x28) - *(int*)(var1 + 0x24);
	char* var2 = *(char**)(var0 + 0xc);
	*(int*)(var0 + 0x8) = *(int*)(var2 + 0x2c) - *(int*)(var2 + 0x24);
	*(char*)(var0 + 0x10) = 0;
	return 1;
}
