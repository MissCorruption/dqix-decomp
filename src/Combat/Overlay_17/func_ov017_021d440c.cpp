#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d440c {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_[15];
};

// USA: func_ov017_021d440c
extern "C" ARM void func_ov017_021d440c(int arg0) {
	Struct_ov017_021d440c var0;
	void* var1 = func_0202ae24();
	var0.unknown_0_ = 0x3c;
	var0.unknown_4_ = (unsigned char)arg0;
	func_0205e330(var1, &var0, 0);
}
