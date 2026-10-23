#include <globaldefs.h>

extern "C" void func_ov031_0220afe0(void* arg0);
extern "C" void func_ov031_0220b028(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_0220b0e0(void* arg0, void* arg1);
extern "C" void func_ov031_0220b8a0(unsigned int* arg0);
extern "C" void func_ov031_0220b8f4(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_0220b9ac(void* arg0, void* arg1);
extern "C" void* func_ov031_02207d88(void* arg0, const char* arg1);
extern "C" int func_ov031_02208400(void* arg0, void* arg1);

// USA: func_ov031_022085a8
extern "C" ARM int func_ov031_022085a8(void* arg0) {
	unsigned char var0 = *(unsigned char*)((char*)arg0 + 0x5af);
	unsigned int var1 = *(unsigned int*)((char*)arg0 + 0x45c);
	int var2 = var0 ? 0 : 0x8000;
	if (var1 == 0xffffffff) {
		return var2 | 4;
	}
	int var3 = *(int*)((char*)arg0 + 0x458);
	switch (var3) {
	case 3: {
		func_ov031_0220afe0((char*)arg0 + 0x3fc);
		unsigned int var4 = *(unsigned int*)((char*)arg0 + 0x460);
		unsigned int var5 = *(unsigned int*)((char*)arg0 + 0x464);
		func_ov031_0220b028((char*)arg0 + 0x3fc, (const void*)var4, var5 - var4);
		func_ov031_0220b0e0((char*)arg0 + 0x3fc, (char*)arg0 + 0x468);
		*(unsigned int*)((char*)arg0 + 0x47c) = 0x10;
		break;
	}
	case 4: {
		func_ov031_0220b8a0((unsigned int*)((char*)arg0 + 0x348));
		unsigned int var6 = *(unsigned int*)((char*)arg0 + 0x460);
		unsigned int var7 = *(unsigned int*)((char*)arg0 + 0x464);
		func_ov031_0220b8f4((char*)arg0 + 0x348, (const void*)var6, var7 - var6);
		func_ov031_0220b9ac((char*)arg0 + 0x348, (char*)arg0 + 0x468);
		*(unsigned int*)((char*)arg0 + 0x47c) = 0x14;
		break;
	}
	default:
		return var2 | 3;
	}
	void* var8 = func_ov031_02207d88(arg0, (const char*)((char*)arg0 + 0x5b0));
	if (var8 == 0) {
		return var2 | 1;
	}
	return var2 | func_ov031_02208400(arg0, var8);
}
