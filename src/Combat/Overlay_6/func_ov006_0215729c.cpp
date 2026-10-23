#include <globaldefs.h>

extern "C" void* func_ov006_02157368(void* arg0, int arg1);

// USA: func_ov006_0215729c
extern "C" ARM void func_ov006_0215729c(void* arg0) {
	void* var0;
	var0 = func_ov006_02157368(arg0, 0x50);
	if (var0 != NULL) {
		unsigned char var1 = *(unsigned char*)((char*)var0 + 0x16);
		var1 &= ~1;
		*(unsigned char*)((char*)var0 + 0x16) = var1;
	}
	var0 = func_ov006_02157368(arg0, 0x4f);
	if (var0 != NULL) {
		unsigned char var2 = *(unsigned char*)((char*)var0 + 0x16);
		var2 |= 1;
		*(unsigned char*)((char*)var0 + 0x16) = var2;
	}
	var0 = func_ov006_02157368(arg0, 0xe);
	if (var0 != NULL) {
		unsigned char var3 = *(unsigned char*)((char*)var0 + 0x16);
		var3 &= ~1;
		*(unsigned char*)((char*)var0 + 0x16) = var3;
	}
	var0 = func_ov006_02157368(arg0, 0xf);
	if (var0 != NULL) {
		unsigned char var4 = *(unsigned char*)((char*)var0 + 0x16);
		var4 |= 1;
		*(unsigned char*)((char*)var0 + 0x16) = var4;
	}
	var0 = func_ov006_02157368(arg0, 0x15);
	if (var0 != NULL) {
		unsigned char var5 = *(unsigned char*)((char*)var0 + 0x16);
		var5 &= ~1;
		*(unsigned char*)((char*)var0 + 0x16) = var5;
	}
	var0 = func_ov006_02157368(arg0, 0x41);
	if (var0 != NULL) {
		unsigned char var6 = *(unsigned char*)((char*)var0 + 0x16);
		var6 &= ~1;
		*(unsigned char*)((char*)var0 + 0x16) = var6;
	}
	var0 = func_ov006_02157368(arg0, 0x42);
	if (var0 != NULL) {
		unsigned char var7 = *(unsigned char*)((char*)var0 + 0x16);
		var7 &= ~1;
		*(unsigned char*)((char*)var0 + 0x16) = var7;
	}
}
