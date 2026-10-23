#include <globaldefs.h>

struct Struct_ov001_0215af34 { unsigned int unknown_0_; Struct_ov001_0215af34* unknown_4_; };

// USA: func_ov017_021d6148
extern "C" ARM void func_ov017_021d6148(Struct_ov001_0215af34* arg0, unsigned int arg1) {
	if (arg0->unknown_0_ == 3) {
		arg0 = arg0->unknown_4_;
		arg0->unknown_4_ = (Struct_ov001_0215af34*)arg1;
	}
}
