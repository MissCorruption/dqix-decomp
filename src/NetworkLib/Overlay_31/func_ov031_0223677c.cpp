#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" void* func_ov031_0223b61c(char* arg0, unsigned int* arg1, int arg2);
extern "C" void func_020bbd14(void*);
extern "C" void func_020bd368(void*, int);
extern "C" void func_020be6c4(int);
extern "C" void func_020bc078(int* arg0);
extern "C" void func_020bbf34(int arg0, int arg1);
extern "C" void func_020bbf4c(int arg0, int arg1);
extern "C" void func_020bbf6c(int arg0, void* arg1);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_02236900(void);

extern void* data_ov031_02290d00;
extern char data_ov031_0224be60[];

// USA: func_ov031_0223677c
extern "C" ARM void func_ov031_0223677c(void) {
	data_ov031_02290d00 = func_ov031_0223cf4c(0xa0, 4);

	unsigned int var0;
	void* var1 = func_ov031_0223b61c(data_ov031_0224be60, &var0, 0x20);
	*(void**)((char*)data_ov031_02290d00 + 0x98) = var1;
	func_020bbd14(var1);

	func_020bd368(data_ov031_02290d00, *(int*)((char*)data_ov031_02290d00 + 0x98));
	func_020be6c4(0);

	func_020bc078((int*)((char*)data_ov031_02290d00 + 0x94));

	int var2 = 0;
	do {
		func_020bbf34(var2, 0x7f);
		func_020bbf4c(var2, 1);
		func_020bbf6c(var2, 0);
		var2++;
	} while (var2 < 0x20);

	void* var3 = func_ov031_0223e218((void*)0, (void*)func_ov031_02236900, (void*)0, 0xc8);
	*(void**)((char*)data_ov031_02290d00 + 0x9c) = var3;
}
