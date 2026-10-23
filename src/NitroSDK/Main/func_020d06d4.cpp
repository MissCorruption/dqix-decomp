#include <globaldefs.h>

struct Struct_020d06d4 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0x14];
    int unknown_1c_;
};

extern Struct_020d06d4* data_021118e0;

// USA: func_020d06d4
extern "C" ARM int func_020d06d4() {
    return data_021118e0->unknown_4_;
}
