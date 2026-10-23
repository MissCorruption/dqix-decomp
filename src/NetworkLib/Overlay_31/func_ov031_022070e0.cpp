#include <globaldefs.h>

struct Struct_ov031_0224e22c_2 {
	int unknown_0_;
};

struct Struct_ov031_022069d0 {
	char unknown_0_[0x7c];
	int unknown_7c_;
};

// USA: func_ov031_022070e0
extern "C" ARM void func_ov031_022070e0(Struct_ov031_0224e22c_2* arg0, Struct_ov031_022069d0* arg1) {
	arg1->unknown_7c_ = arg0->unknown_0_;
	arg0->unknown_0_ = (int)arg1;
}
