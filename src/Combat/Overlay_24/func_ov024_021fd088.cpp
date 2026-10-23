#include <globaldefs.h>

struct Struct_ov024_021f6a1c;
extern "C" void func_ov024_021f6a1c(struct Struct_ov024_021f6a1c* arg0, void* arg1);

struct Struct_ov024_021fd088 { unsigned int unknown_0_[3]; };

// USA: func_ov024_021fd088
extern "C" ARM void func_ov024_021fd088(void* arg0, float arg1, int arg2) {
	char* var0 = (char*)arg0;
	struct Struct_ov024_021fd088 var1 = *(struct Struct_ov024_021fd088*)(var0 + 0x65c);
	short var2 = *(short*)(*(char**)(var0 + 0x64c) + 0x32);
	*(float*)&var1.unknown_0_[0] = (float)var2;
	unsigned char var3 = ((unsigned char*)&var1)[7];
	((unsigned char*)&var1)[4] = (unsigned char)arg2;
	int var4 = (int)((float)var3 * arg1 / 100.0f);
	((unsigned char*)&var1)[8] = 5;
	((unsigned char*)&var1)[7] = (unsigned char)var4;
	func_ov024_021f6a1c((struct Struct_ov024_021f6a1c*)*(void**)(var0 + 0x658), &var1);
}
