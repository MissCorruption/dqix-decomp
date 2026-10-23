#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020c2dc4
extern "C" ARM void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2) {
    arg2->unknown_0_ = arg0->unknown_0_ - arg1->unknown_0_;
    arg2->unknown_4_ = arg0->unknown_4_ - arg1->unknown_4_;
    arg2->unknown_8_ = arg0->unknown_8_ - arg1->unknown_8_;
}
