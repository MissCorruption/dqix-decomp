#include <globaldefs.h>

extern "C" void* func_ov031_0223cf4c(int arg0, int arg1);
extern "C" void func_ov031_02227520(int* arg0, int* arg1);
extern "C" int func_ov031_02235984(void* arg0);
extern "C" void func_ov031_0222b71c(void);
extern "C" void func_ov031_022239f4(void);
extern "C" void func_ov031_0222336c(int arg0, int arg1, int arg2);
extern "C" void func_ov031_02223518(int arg0);
extern "C" void func_ov031_0222b870(void);
extern "C" void func_ov031_0222b918(void);
extern "C" void* func_ov031_0223c560(int arg0, int arg1);
extern "C" void* func_ov031_0223e218(void* arg0, void* arg1, void* arg2, int arg3);
extern "C" void func_ov031_0222c870(void);
extern "C" void func_ov031_0222c3b4(void);
extern "C" void func_ov031_0222c8cc(void);
extern "C" void func_ov031_0222ba8c(void);
extern "C" void func_ov031_022274c0(int arg0);

struct Struct_ov031_0222b644 {
	unsigned char unknown_0_[0xc];
	void* unknown_c_;
	unsigned char unknown_10_[0x3c - 0x10];
	int unknown_3c_;
	unsigned char unknown_40_[0x51 - 0x40];
	unsigned char unknown_51_;
};
struct Struct_ov031_02290c8c {
	unsigned char unknown_0_;
	unsigned char unknown_1_;
	unsigned short unknown_2_;
	Struct_ov031_0222b644* unknown_4_;
};
extern Struct_ov031_02290c8c data_ov031_02290c8c;

// USA: func_ov031_0222b644
extern "C" ARM void func_ov031_0222b644(void) {
	int var0;
	data_ov031_02290c8c.unknown_4_ = (Struct_ov031_0222b644*)func_ov031_0223cf4c(0x5c, 4);
	func_ov031_02227520(&var0, NULL);
	if (var0 == 0) {
		data_ov031_02290c8c.unknown_0_ = 0;
		data_ov031_02290c8c.unknown_2_ = 0;
	}

	data_ov031_02290c8c.unknown_4_->unknown_51_ = (unsigned char)func_ov031_02235984(data_ov031_02290c8c.unknown_4_);

	func_ov031_0222b71c();
	func_ov031_022239f4();
	func_ov031_0222336c(0x34, -1, 0);
	func_ov031_02223518(2);
	func_ov031_0222b870();
	func_ov031_0222b918();

	data_ov031_02290c8c.unknown_4_->unknown_c_ = func_ov031_0223c560(0, 0);
	data_ov031_02290c8c.unknown_4_->unknown_3c_ = (int)func_ov031_0223e218((void*)1, (void*)func_ov031_0222c870, NULL, 0x6e);

	func_ov031_0222c3b4();
	func_ov031_0222c8cc();
	func_ov031_022274c0((int)func_ov031_0222ba8c);
}
