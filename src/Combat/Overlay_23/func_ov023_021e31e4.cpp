#include <globaldefs.h>

extern "C" int func_0205ac40(void*, void*);

// USA: func_ov023_021e31e4
extern "C" ARM int func_ov023_021e31e4(void* arg0, int arg1, int arg2, int arg3, short arg4) {
	char* var0 = *(char**)((char*)arg0 + 0xcc);
	*(int*)(var0 + 0xb4) = arg1 << 12;
	*(int*)(var0 + 0xb8) = arg2 << 12;
	*(unsigned char*)(var0 + 0xc2) = 0x78;
	*(unsigned char*)(var0 + 0xc6) = 2;
	func_0205ac40(*(void**)((char*)arg0 + 0xc8), var0 + 0xa0);
	var0 = *(char**)((char*)arg0 + 0xcc);
	*(int*)(var0 + 0xdc) = arg3 << 12;
	*(int*)(var0 + 0xe0) = arg4 << 12;
	*(unsigned char*)(var0 + 0xea) = 0x77;
	*(unsigned char*)(var0 + 0xee) = 2;
	return func_0205ac40(*(void**)((char*)arg0 + 0xc8), var0 + 0xc8);
}
