#include <globaldefs.h>

struct Struct_02015ef4_4 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 12;
    short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_;
};

// USA: func_020de234
extern "C" ARM unsigned short func_020de234(Struct_02015ef4_4* arg0, int arg1) {
    if (arg0->unknown_18_ <= 0) {
        return 999;
    }
    if (!arg1) {
        if (arg0->unknown_10_0_ != 999) {
            return arg0->unknown_10_0_;
        }
        return arg0->unknown_11_2_;
    } else {
        if (arg0->unknown_11_2_ != 999) {
            return arg0->unknown_11_2_;
        }
        return arg0->unknown_10_0_;
    }
}
