#include <globaldefs.h>

struct Struct_02068824_2 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 24;
    unsigned int unknown_b_0_ : 2;
};

struct Struct_02068824 {
    char unknown_0_[0x18];
    struct Struct_02068824_2* unknown_18_;
};

// USA: func_02068824
extern "C" ARM int func_02068824(int arg0, struct Struct_02068824* arg1) {
    struct Struct_02068824_2* var0 = arg1->unknown_18_;
    if (var0 != 0) {
        return var0->unknown_b_0_;
    }
    return 0;
}
