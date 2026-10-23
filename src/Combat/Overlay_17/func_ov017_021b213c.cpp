#include <globaldefs.h>

struct Struct_ov004_021589e8 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 5;
    unsigned int unknown_3_2_ : 6;
};

extern "C" int func_ov017_021b2090(Struct_ov004_021589e8 arg0, Struct_ov004_021589e8 arg1);

// USA: func_ov017_021b213c
extern "C" ARM int func_ov017_021b213c(Struct_ov004_021589e8 arg0, Struct_ov004_021589e8 arg1) {
	return func_ov017_021b2090(arg1, arg0);
}
