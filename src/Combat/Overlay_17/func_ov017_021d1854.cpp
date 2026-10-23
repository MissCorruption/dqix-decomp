#include <globaldefs.h>

struct Struct_ov017_021d1854 { unsigned char unknown_0_[4]; short unknown_4_; short unknown_6_; signed char unknown_8_; };

extern "C" int* func_020936f8(void);
extern "C" void func_02094030(int*, short, short, signed char);

// USA: func_ov017_021d1854
extern "C" ARM void func_ov017_021d1854(void* arg0, Struct_ov017_021d1854* arg1) {
	int* var0 = func_020936f8();
	func_02094030(var0, arg1->unknown_4_, arg1->unknown_6_, arg1->unknown_8_);
}
