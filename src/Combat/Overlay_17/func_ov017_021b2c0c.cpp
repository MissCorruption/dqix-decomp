#include <globaldefs.h>

struct Struct_0206f81c_4 {
	unsigned char unknown_0_[0x38];
	union {
		unsigned int unknown1_38_;
		struct {
			unsigned int unknown_0_0_ : 3;
			unsigned int unknown_0_3_ : 1;
			unsigned int unknown_0_4_ : 1;
			unsigned int unknown_0_5_ : 1;
			unsigned int unknown_0_6_ : 26;
		} unknown_38_;
	};
};

// USA: func_ov017_021b2c0c
extern "C" ARM void func_ov017_021b2c0c(Struct_0206f81c_4* arg0, unsigned int arg1) {
	arg0->unknown_38_.unknown_0_5_ = arg1;
}
