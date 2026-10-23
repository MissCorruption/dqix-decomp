#include <globaldefs.h>

extern "C" void func_ov031_0223fb60(void*, unsigned int);
extern "C" void func_ov031_0221ae00(void*);
extern "C" int func_ov031_0223fba4(void*, int, int, int);
extern "C" void func_ov031_0223e454(void*, void*, int);

struct Struct_ov031_0223e9d4 { int unknown_0_; int unknown_4_; char unknown_8_[0x14 - 8]; };

// USA: func_ov031_0223e9d4
extern "C" ARM int func_ov031_0223e9d4(void* arg0, void* arg1, int arg2, int arg3) {
	Struct_ov031_0223e9d4 var0;
	unsigned char var1[0x10];
	func_ov031_0223fb60(&var0, 0x14);
	func_ov031_0221ae00(&var0);
	unsigned long long var2 = *(unsigned long long*)&var0;
	if (var2 == 0) return 0;
	int var3 = (int)var2;
	int var4 = (int)(var2 >> 32);
	if (func_ov031_0223fba4(var1, var3, var4, 0xd) < 0) return 0;
	func_ov031_0223e454(arg1, var1, 0xd);
	func_ov031_0223e454(arg0, (void*)0x27ffe0c, 4);
	return 1;
}
