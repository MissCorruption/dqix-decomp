#include <globaldefs.h>

extern "C" void func_ov031_0223c150();
extern "C" void ColorEffect_ConfigureBrightnessAdjust(unsigned short* dst, int flag, int value);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);

extern unsigned char data_ov031_022493a0[];

struct Struct_ov031_0223c078 {
	unsigned int unknown_0_;
	unsigned short unknown_4_;
	unsigned short unknown_6_;
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned char unknown_a_[2];
};
extern Struct_ov031_0223c078* data_ov031_02290d34;

// USA: func_ov031_0223c078
extern "C" ARM int func_ov031_0223c078(int arg0, int arg1, int arg2, int arg3) {
	signed char var0[4];
	var0[0] = data_ov031_022493a0[0x8];
	var0[1] = data_ov031_022493a0[0x9];
	var0[2] = data_ov031_022493a0[0xa];
	var0[3] = data_ov031_022493a0[0xb];

	Struct_ov031_0223c078* var1 = (arg1 == 1) ? data_ov031_02290d34 : (Struct_ov031_0223c078*)((char*)data_ov031_02290d34 + 0xc);
	if (var1->unknown_9_ != 0) {
		return 0;
	}

	if (arg1 == 1) {
		ColorEffect_ConfigureBrightnessAdjust((unsigned short*)0x4001050, arg2, var0[arg0]);
	} else {
		ColorEffect_ConfigureBrightnessAdjust((unsigned short*)0x4000050, arg2, var0[arg0]);
	}

	var1->unknown_0_ = (unsigned int)func_ov031_0223e218((void*)1, (void*)func_ov031_0223c150, var1, 0xc8);
	var1->unknown_4_ = 0;
	var1->unknown_8_ = (unsigned char)arg0;
	var1->unknown_6_ = (unsigned short)arg3;
	var1->unknown_9_ = 1;
	return 1;
}
