#include <globaldefs.h>
#include "World/GrottoTileGraph.h"

struct Struct_0201a300_10 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_;
    struct Struct_0201a300_3* unknown_4_;
};

// USA: func_02028170
extern "C" ARM void func_02028170(struct Struct_0201a300_10* arg0, struct Struct_0201a300_3* arg1) {
    unsigned char var0 = arg0->unknown_2_;
    struct Struct_0201a300_3* var1;
    if (arg0->unknown_0_ <= var0) return;
    var1 = &arg0->unknown_4_[var0];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_1_ = arg1->unknown_1_;
    var1->unknown_2_ = arg1->unknown_2_;
    var1->unknown_3_ = arg1->unknown_3_;
    var1->unknown_4_ = arg1->unknown_4_;
    var1->unknown_6_ = arg1->unknown_6_;
    var1->unknown_8_ = arg1->unknown_8_;
    var1->unknown_c_ = arg1->unknown_c_;
    arg0->unknown_2_++;
}
