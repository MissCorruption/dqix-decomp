#include <globaldefs.h>


extern "C" ARM void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" int func_020ca4b4(void*, void*, int);
extern "C" ARM void* func_ov031_0223e218(void *arg0, void *arg1, void *arg2, int arg3);
extern "C" void func_ov031_02234fa4(void);

extern unsigned char* data_ov031_02290ce8;

// USA: func_ov031_02234ea8
extern "C" ARM void func_ov031_02234ea8(void* arg0) {
	unsigned char* var0 = (unsigned char*)func_ov031_0223cf4c(0x608, 4);
	data_ov031_02290ce8 = var0;
	func_020ca4b4(arg0, var0 + 4, 0x600);
	void* var1 = func_ov031_0223e218((void*)1, (void*)func_ov031_02234fa4, 0, 0x78);
	*(void**)data_ov031_02290ce8 = var1;
}
