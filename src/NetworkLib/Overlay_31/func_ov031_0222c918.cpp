#include <globaldefs.h>

extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_0222cad8(int);
extern "C" void func_ov031_0222c3b4(int);
extern "C" void func_ov031_022351f8(int);
extern "C" void func_ov031_0222c8cc(void);
extern "C" void func_ov031_0222c71c(void);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);

struct Struct_ov031_02290c8c_17 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned short unknown_2_;
	char* unknown_4_;
};
extern Struct_ov031_02290c8c_17 data_ov031_02290c8c;

// USA: func_ov031_0222c918
extern "C" ARM void func_ov031_0222c918(int arg0) {
	int var0 = 1;
	int var1 = data_ov031_02290c8c.unknown_0_;
	switch (var1) {
	case 0:
		if (arg0 == 1) {
			if (data_ov031_02290c8c.unknown_2_ == 0) {
				data_ov031_02290c8c.unknown_0_ = 4;
				break;
			}
			func_ov031_02236878(0x13);
			void* var2 = func_ov031_0223e218((void*)0, (void*)func_ov031_0222c71c, (void*)0, 0x78);
			*(int*)(data_ov031_02290c8c.unknown_4_ + 0x38) = (int)var2;
			return;
		}
		if (*(unsigned char*)(data_ov031_02290c8c.unknown_4_ + 0x51) > 1) {
			data_ov031_02290c8c.unknown_0_ = var1 + 1;
		} else {
			var0 = 0;
		}
		break;
	case 1:
	case 2:
		if (arg0 == 1) {
			data_ov031_02290c8c.unknown_0_ = var1 - 1;
			break;
		}
		if (*(unsigned char*)(data_ov031_02290c8c.unknown_4_ + 0x51) > var1 + 1) {
			data_ov031_02290c8c.unknown_0_ = var1 + 1;
		} else {
			var0 = 0;
		}
		break;
	case 3:
		if (arg0 == 1) {
			data_ov031_02290c8c.unknown_0_ = var1 - 1;
			break;
		}
		func_ov031_0222cad8(arg0);
		return;
	case 4:
		if (arg0 == 1) {
			var0 = 0;
			break;
		}
		data_ov031_02290c8c.unknown_2_ = 0;
		data_ov031_02290c8c.unknown_0_ = 0;
		func_ov031_0222c3b4(0);
		func_ov031_022351f8(0);
		break;
	}
	if (!var0) {
		if (*(unsigned char*)(data_ov031_02290c8c.unknown_4_ + 0x59) != 0) return;
		func_ov031_02236878(9);
		*(unsigned char*)(data_ov031_02290c8c.unknown_4_ + 0x59) = 1;
		return;
	}
	func_ov031_02236878(8);
	func_ov031_0222c8cc();
}
