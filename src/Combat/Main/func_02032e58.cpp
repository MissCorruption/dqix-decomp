#include <globaldefs.h>

#include "Combat/ObjectStateInitialization.h"

// USA: func_02032e58
extern "C" ARM void func_02032e58(void *arg0) {
    Struct_02032e58 *var0 = (Struct_02032e58*)arg0;

    var0->unknown_0_.Initialize();
    var0->unknown_0_.unknown_0_ |= 2;
    var0->unknown_0_.EnableFlag(4);
    var0->unknown_be_     = 0;
    var0->unknown_bf_     = 0;
    var0->unknown_c0_     = 0;
    var0->unknown_ac_     = 0;
    var0->unknown_ae_     = 0;
    var0->unknown_b0_     = 0x324;
    var0->unknown_b2_     = 0;
    var0->unknown_b4_     = 0x189;
    var0->unknown_b6_     = 0x28;
    var0->unknown_b8_     = 0;
    var0->unknown_c2_0_  = 0;
    var0->unknown_c1_0_  = 0;
    var0->unknown_c3_     = 0;
    var0->unknown_c6_     = 0;
    var0->unknown_c1_4_ = 0;
    var0->unknown_c2_4_ = 0;
    var0->unknown_ba_     = 0;
    var0->unknown_bc_     = 0;
    var0->unknown_e0_0_ = 0;
    var0->unknown_c2_5_ = 0;
    var0->unknown_c2_6_ = 0;
    var0->unknown_c1_3_ = 0;
    var0->unknown_c4_0_  = 0;
    var0->unknown_c2_7_ = 0;
    var0->unknown_124_    = 0;
    var0->unknown_128_    = 0;
    var0->unknown_12c_    = 0;
    var0->unknown_ba_     = 0x199;
    var0->unknown_e0_2_ = 0;
    var0->unknown_e0_1_ = 0;
    func_02032fb8(&var0->unknown_114_);
    func_02032fb8(&var0->unknown_11c_);
    var0->unknown_c1_2_ = 0;
    var0->unknown_e0_3_ = 0;
    var0->unknown_e0_4_ = 0;
    var0->unknown_e0_5_ = 0;
    var0->unknown_c5_7_ = 0;
}
