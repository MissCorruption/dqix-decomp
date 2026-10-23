#include <globaldefs.h>

extern "C" int func_ov031_0222fd9c(int arg0);
extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_0222f38c(unsigned char arg0);
extern "C" void func_ov031_0222f3f8(unsigned char arg0);
extern "C" int func_ov031_02230ca4(void);
extern "C" int func_ov031_02230df0(void);
extern "C" void func_ov031_02237b2c(int, int, int, int, int);
extern "C" int func_ov031_022305a4(int arg0);
extern "C" void func_ov031_0222fe30(int, int, int);
extern "C" void func_ov031_02230120(void);
extern "C" void func_ov031_02230e90(void);
extern "C" void func_ov031_0222f68c(void);
extern "C" void func_ov031_0223521c(void);
extern "C" void func_ov031_022274c0(int arg0);

extern unsigned char data_ov031_02249054;

struct Struct_ov031_02290ca0_4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char* unknown_8_;
};
extern struct Struct_ov031_02290ca0_4 data_ov031_02290ca0;

// USA: func_ov031_0222f20c
extern "C" ARM void func_ov031_0222f20c(int arg0) {
	if (func_ov031_0222fd9c(arg0) == 0) {
		func_ov031_02236878(9);
		return;
	}
	switch (arg0) {
	case 2:
	case 3:
		func_ov031_02236878(6);
		func_ov031_0222f38c((unsigned char)(((arg0 - 2) ^ 1) != 0));
		return;
	case 7:
	case 8:
		func_ov031_02236878(6);
		func_ov031_0222f3f8((unsigned char)(((arg0 - 7) ^ 1) != 0));
		return;
	default:
		data_ov031_02290ca0.unknown_8_[0x40] = (unsigned char)arg0;
		if (arg0 == 0xb || arg0 == 0xc) {
			func_ov031_02230ca4();
			if (func_ov031_02230df0() == 0) {
				func_ov031_02236878(9);
				func_ov031_02237b2c(6, 1, 1, -1, 0);
				func_ov031_022274c0((int)func_ov031_02230e90);
				return;
			}
			if (arg0 == 0xb) func_ov031_02236878(6);
			else func_ov031_02236878(0xe);
		} else if (arg0 == 0xd) {
			func_ov031_02230ca4();
			func_ov031_02236878(7);
		} else {
			func_ov031_02236878(6);
			unsigned char var0 = (&data_ov031_02249054)[arg0];
			int var1 = func_ov031_022305a4(var0);
			func_ov031_0222fe30(0, 1, var1);
			func_ov031_02230120();
		}
		func_ov031_0223521c();
		func_ov031_022274c0((int)func_ov031_0222f68c);
		return;
	}
}
