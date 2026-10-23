#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov024_021f68c8;
extern "C" void func_ov024_021f68c8(struct Struct_ov024_021f68c8* arg0);

// USA: func_ov024_021f73b8
extern "C" ARM void func_ov024_021f73b8(void* arg0) {
	char* var0 = (char*)arg0;
	*(int*)(var0 + 0x74) = 0;
	*(int*)(var0 + 0x78) = 0;
	*(int*)(var0 + 0x9c) = 0;
	for (int var1 = 0; var1 < 3; var1++) {
		*(int*)(var0 + 0xb8 + var1 * 4) = 0;
	}
	memset(var0 + 0xe4, 0, 0x20);
	*(int*)(var0 + 0x174) = 0;
	func_ov024_021f68c8((struct Struct_ov024_021f68c8*)(var0 + 0x378));
	memset(var0 + 0x10, 0, 0x15);
	*(unsigned char*)(var0 + 0x7) = 0;
	*(unsigned char*)(var0 + 0x139) = 0;
	memset(var0 + 0x104, 0, 0x10);
	memset(var0 + 0x114, 0, 0x10);
	memset(var0 + 0x44, 0, 0x10);
	memset(var0 + 0x13c, 0, 0x18);
	memset(var0 + 0x154, 0, 0x18);
}
