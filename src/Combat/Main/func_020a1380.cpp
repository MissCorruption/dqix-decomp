#include <globaldefs.h>

struct Struct_020a1180 {
    unsigned int unknown_0_0_ : 9;   // bits 0-8
    unsigned int unknown_1_1_ : 9;   // bits 9-17
    unsigned int unknown_2_2_ : 9;   // bits 18-26
    unsigned int unknown_3_3_ : 3;   // bits 27-29
    unsigned int unknown_3_6_ : 2;   // bits 30-31
    int unknown_4_;   // 0x4
    int unknown_8_;   // 0x8
};

// USA: func_020a1380
extern "C" ARM void func_020a1380(struct Struct_020a1180* arg0) {
    arg0->unknown_0_0_ = 0;
    arg0->unknown_1_1_ = 0;
    arg0->unknown_2_2_ = 0;
    arg0->unknown_3_3_ = 0;
    arg0->unknown_3_6_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
}
