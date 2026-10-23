#include <globaldefs.h>

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_ov023_021dcd90(void* arg0, int arg1);
extern "C" void func_ov006_02155508(void* arg0);
extern int data_0210a010[];

struct Struct_ov006_02155480 {
	char unknown_0_[0xe2];
	unsigned short unknown_e2_;
};

struct Struct_ov006_02155480_2 {
	char unknown_0_[LOW_REGION(0x880, 0xa00)];
	Struct_ov006_02155480 unknown_a00_;
	char unknown_ae4_[0x1000 - (LOW_REGION(0x880, 0xa00) + sizeof(Struct_ov006_02155480))];
	char unknown_1000_[LOW_REGION(0xb9, 0x2bd)];
	unsigned char unknown_12bd_;
};

// USA: func_ov006_02155480
extern "C" ARM void func_ov006_02155480(Struct_ov006_02155480_2* arg0) {
	arg0->unknown_12bd_ = 1;
	*(unsigned int*)((char*)data_0210a010 + 0xa0) = 0xbfff0000;

	volatile unsigned short* var0 = (volatile unsigned short*)0x4000008;
	var0[0] = (var0[0] & ~3) | 2;
	var0[1] = (var0[1] & ~3);
	var0[2] = (var0[2] & ~3) | 1;

	arg0->unknown_a00_.unknown_e2_ &= ~0x40;

	func_ov023_021dcd90((char*)arg0 + LOW_REGION(0x164, 0x2e4) + 0x800, 0);
	func_ov006_02155508(arg0);
}
