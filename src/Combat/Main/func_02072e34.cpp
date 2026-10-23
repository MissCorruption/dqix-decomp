#include <globaldefs.h>

struct Struct_02072e34 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
};

// USA: func_02072e34
extern "C" ARM void func_02072e34(int arg0, struct Struct_02072e34* arg1) {
    int var0 = arg0 * 12;
    arg1->unknown_0_ = arg0;
    arg1->unknown_4_ = var0 + 19;
    arg1->unknown_8_ = var0 + 20;
    arg1->unknown_c_ = var0 + 21;
    arg1->unknown_10_ = var0 + 22;
    arg1->unknown_14_ = var0 + 23;
    arg1->unknown_18_ = var0 + 25;
    arg1->unknown_1c_ = var0 + 27;
    arg1->unknown_20_ = var0 + 28;
    arg1->unknown_24_ = var0 + 29;
    arg1->unknown_28_ = -1;
}
