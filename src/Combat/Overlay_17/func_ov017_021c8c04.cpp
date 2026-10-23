#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c8c04 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_;
	unsigned short unknown_8_;
	unsigned char unknown_a_;
	unsigned char unknown_b_[9];
};

// USA: func_ov017_021c8c04
extern "C" ARM void func_ov017_021c8c04(int arg0, int arg1, int arg2) {
	Struct_ov017_021c8c04 var0;
	void* var1 = func_0202ae24();
	var0.unknown_0_ = 0x53;
	var0.unknown_8_ = arg0;
	var0.unknown_a_ = arg1;
	var0.unknown_4_ = arg2;
	func_0205e330(var1, &var0, 0);
}
