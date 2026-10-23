#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c6378_2 {
	unsigned char unknown_0_[8];
	unsigned short unknown_8_;
};

// USA: func_ov017_021c66e8
extern "C" ARM void func_ov017_021c66e8(char* arg0) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x41;
	unsigned char* var2 = var1 + 4;
	Struct_ov017_021c6378_2* var3 = *(Struct_ov017_021c6378_2**)(arg0 + 0x8e18);
	*(unsigned short*)(var2 + 4) = var3->unknown_8_;
	unsigned char* var4 = (unsigned char*)(arg0 + 0x81b0);
	for (int var5 = 0; var5 < (int)(((unsigned int)var4[1] << 24) >> 30); var5++) {
		unsigned char* var6 = var4 + var5 * 8;
		var2[0xa] = var5;
		*(unsigned short*)(var2 + 6) = *(unsigned short*)(var6 + 0x4e);
		var2[8] = var6[0x4d];
		var2[9] = var6[0x4c];
		*(int*)(var2 + 0) = *(int*)(var6 + 0x50);
		func_0205e330(var0, var1, 0);
	}
}
