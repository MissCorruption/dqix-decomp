#include <globaldefs.h>

struct Struct_02082cdc_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_02082cdc {
    struct Struct_02082cdc_2 unknown_0_[3];
};

// USA: func_02082cdc
extern "C" ARM void func_02082cdc(struct Struct_02082cdc* arg0) {
    arg0->unknown_0_[0].unknown_0_0_ = 0; arg0->unknown_0_[0].unknown_1_2_ = 0; arg0->unknown_0_[0].unknown_2_4_ = 0;
    arg0->unknown_0_[1].unknown_0_0_ = 0; arg0->unknown_0_[1].unknown_1_2_ = 0; arg0->unknown_0_[1].unknown_2_4_ = 0;
    arg0->unknown_0_[2].unknown_0_0_ = 0; arg0->unknown_0_[2].unknown_1_2_ = 0; arg0->unknown_0_[2].unknown_2_4_ = 0;
}
