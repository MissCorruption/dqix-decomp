#include <globaldefs.h>

extern "C" int func_ov031_0223c054(int arg0);
extern "C" int func_ov031_02222e54(void);
extern "C" void func_ov031_0223da58(void* arg0);
extern "C" void func_ov031_022238cc(void);
extern "C" void func_ov031_02223440(void);
extern "C" void func_ov031_0223b710(void* arg0);
extern "C" void func_ov031_0223cbbc(int arg0, int arg1);
extern "C" void func_ov031_022274d0(int arg0, int arg1);
extern "C" void func_ov031_022274c0(int arg0);
extern "C" void func_ov031_02228024(void);
extern "C" void func_ov031_02228bac(void);
extern "C" void func_ov031_0222859c(void);
extern "C" void func_ov031_02229e28(void);

struct Struct_ov031_02290c5c_5 {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	char unknown_2_[2];
	void* unknown_4_;
	void* unknown_8_;
};
extern Struct_ov031_02290c5c_5 data_ov031_02290c5c;

// USA: func_ov031_022295ac
extern "C" ARM void func_ov031_022295ac(void) {
	if (func_ov031_0223c054(1)) return;
	if (func_ov031_0223c054(0)) return;
	if (!func_ov031_02222e54()) return;

	func_ov031_0223da58(data_ov031_02290c5c.unknown_8_);
	func_ov031_022238cc();
	func_ov031_02223440();
	func_ov031_0223b710(data_ov031_02290c5c.unknown_4_);
	func_ov031_0223cbbc(1, 1);
	func_ov031_0223cbbc(0, 0x14);

	if (data_ov031_02290c5c.unknown_1_ == 0) {
		func_ov031_022274d0(0, 0);
		func_ov031_022274c0((int)func_ov031_02228024);
		return;
	}

	switch (data_ov031_02290c5c.unknown_0_) {
	case 0:
		func_ov031_022274d0(0, 1);
		func_ov031_022274c0((int)func_ov031_02228bac);
		break;
	case 1:
		func_ov031_022274d0(0, 1);
		func_ov031_022274c0((int)func_ov031_0222859c);
		break;
	case 2:
		func_ov031_022274d0(0, 1);
		func_ov031_022274c0((int)func_ov031_02229e28);
		break;
	}
}
