#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_02061c04_10 {
	unsigned short unknown_0_;
	unsigned short unknown_2_;
	unsigned short unknown_4_;
	short unknown_6_;
	unsigned char unknown_8_;
	unsigned short unknown_a_;
	signed char unknown_c_;
	unsigned char unknown_d_;
	int unknown_10_;
};

// USA: func_ov017_021cd6d8
extern "C" ARM void func_ov017_021cd6d8(Struct_02061c04_10* arg0) {
	void* var0 = func_0202ae24();
	unsigned char var1[0x14];
	var1[0] = 0x8e;
	unsigned char* var2 = var1 + 4;
	*(unsigned short*)(var2 + 0) = arg0->unknown_0_;
	*(unsigned short*)(var2 + 2) = arg0->unknown_2_;
	*(unsigned short*)(var2 + 4) = arg0->unknown_4_;
	var2[0xa] = arg0->unknown_8_;
	*(unsigned short*)(var2 + 6) = arg0->unknown_a_;
	*(short*)(var2 + 8) = arg0->unknown_6_;
	*(int*)(var2 + 0xc) = arg0->unknown_10_;
	*(signed char*)(var2 + 0xb) = arg0->unknown_c_;
	func_0205e330(var0, var1, 0);
}
