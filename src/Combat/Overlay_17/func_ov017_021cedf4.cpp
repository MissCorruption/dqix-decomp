#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cedf4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	int unknown_4_;
	int unknown_8_;
	int unknown_c_;
	int unknown_10_;
};

// USA: func_ov017_021cedf4
extern "C" ARM void func_ov017_021cedf4(int arg0, int arg1, int arg2) {
	void* var0 = func_0202ae24();
	Struct_ov017_021cedf4 var1;
	var1.unknown_0_ = 0x13;
	var1.unknown_4_ = arg0;
	var1.unknown_8_ = arg1;
	var1.unknown_c_ = arg2;
	func_0205e330(var0, &var1, 0);
}
