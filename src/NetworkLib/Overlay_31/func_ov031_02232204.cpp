#include <globaldefs.h>

extern "C" void func_ov031_022368e0(void);
extern "C" int func_ov031_02235984(void**);
extern "C" void func_ov031_02237b2c(int, int, int, int, int);
extern "C" int func_ov031_02236878(int);
extern "C" ARM void func_ov031_02222e98(void);
extern "C" ARM void func_ov031_022274c0(int);
extern "C" void func_ov031_022324bc(void);
extern "C" void func_ov031_02232380(void);

struct Struct_ov031_02290cbc_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned short unknown_2_; };
extern Struct_ov031_02290cbc_2 data_ov031_02290cbc;

// USA: func_ov031_02232204
extern "C" ARM void func_ov031_02232204(void) {
	data_ov031_02290cbc.unknown_2_++;
	if (data_ov031_02290cbc.unknown_2_ < 300) {
		return;
	}

	func_ov031_022368e0();
	void* var0;
	int var1 = func_ov031_02235984(&var0);
	if (var1 == 0) {
		data_ov031_02290cbc.unknown_0_ = 2;
		func_ov031_02237b2c(0xf, 1, 1, -1, 0);
		func_ov031_02236878(0x12);
		func_ov031_02222e98();
		func_ov031_022274c0((int)func_ov031_022324bc);
		return;
	}

	int var2 = 0;
	if (var1 > 0) {
		unsigned char* var3 = (unsigned char*)var0;
		do {
			if (var3[0x28] != 2) {
				break;
			}
			var2++;
			var3 += 0x2a;
		} while (var2 < var1);
	}

	if (var2 == var1) {
		data_ov031_02290cbc.unknown_0_ = 3;
		func_ov031_02237b2c(0xe, 1, 1, -1, 0);
		func_ov031_02236878(0x12);
		func_ov031_02222e98();
		func_ov031_022274c0((int)func_ov031_022324bc);
		return;
	}

	data_ov031_02290cbc.unknown_0_ = 1;
	func_ov031_02236878(0xf);
	func_ov031_022274c0((int)func_ov031_02232380);
}
