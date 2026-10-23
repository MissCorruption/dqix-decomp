#include <globaldefs.h>

extern "C" void* func_020e3580(void);

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

extern "C" void func_020e36c4(unsigned char* arg0, int arg1);
extern "C" void func_020e3778(unsigned char* arg0);
extern "C" void func_020e3748(unsigned char* arg0, int arg1);

struct Struct_ov017_021ced84 {
	unsigned char unknown_0_[4];
	unsigned char unknown_4_;
	unsigned char unknown_5_;
};

// USA: func_ov017_021ced84
extern "C" ARM void func_ov017_021ced84(int arg0, Struct_ov017_021ced84* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
	unsigned char* var0 = (unsigned char*)func_020e3580();
	signed char var1 = func_0202c1a4(arg4);
	if (arg1->unknown_5_ != var1) {
		return;
	}
	if (arg1->unknown_4_ == 0) {
		func_020e36c4(var0, arg0 & 0xff);
		return;
	}
	if (arg1->unknown_4_ == 1) {
		func_020e3778(var0);
		return;
	}
	if (arg1->unknown_4_ != 2) {
		return;
	}
	func_020e3748(var0, arg0 & 0xff);
}
