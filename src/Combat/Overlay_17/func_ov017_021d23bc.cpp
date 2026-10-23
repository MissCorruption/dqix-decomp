#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d23bc {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned short unknown_4_;
	unsigned char unknown_6_[14];
};

// USA: func_ov017_021d23bc
extern "C" ARM void func_ov017_021d23bc(unsigned short arg0) {
	Struct_ov017_021d23bc var0;
	void* var1 = func_0202ae24();
	var0.unknown_0_ = 0x9e;
	var0.unknown_4_ = arg0;
	func_0205e330(var1, &var0, 0);
}
