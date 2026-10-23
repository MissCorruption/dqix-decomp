#include <globaldefs.h>

struct Struct_020d06e8 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x14];
    int unknown_1c_;
};

extern Struct_020d06e8* data_021118e0;

// USA: func_020d06e8
extern "C" ARM int func_020d06e8() {
    return data_021118e0->unknown_1c_;
}
