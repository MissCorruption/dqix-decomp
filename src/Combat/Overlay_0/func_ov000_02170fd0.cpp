#include <globaldefs.h>

extern "C" void func_ov000_0217f518(void*);
extern "C" void func_ov000_0217636c(void*, int);

struct Struct_ov000_02170fd0 {
	unsigned char unknown_0_[0x38];
	int unknown_38_;
};

// USA: func_ov000_02170fd0
extern "C" ARM void func_ov000_02170fd0(struct Struct_ov000_02170fd0* arg0, int arg1) {
	func_ov000_0217f518(arg0);
	if (arg0->unknown_38_ != 0) {
		func_ov000_0217636c(arg0, arg1);
	}
}
