#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cc340 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[3];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
	unsigned char unknown_6_;
	unsigned char unknown_7_[2];
	unsigned char unknown_9_;
	unsigned char unknown_a_[10];
};

// USA: func_ov017_021cc340
extern "C" ARM void func_ov017_021cc340(int arg0, int arg1, int arg2) {
	void* var0 = func_0202ae24();

	Struct_ov017_021cc340 var1;
	var1.unknown_0_ = 7;
	var1.unknown_6_ = arg0;
	var1.unknown_9_ = arg1;
	var1.unknown_5_ = 1;
	var1.unknown_4_ = arg2;
	func_0205e330(var0, &var1, 0);
}
