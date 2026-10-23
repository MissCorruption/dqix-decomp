#include <globaldefs.h>

struct Struct_ov023_021dcb70 {
    char unknown_0_[0x8];
    unsigned int unknown_8_0_ : 4;
};

extern unsigned char data_ov023_021fd563[2];

// USA: func_ov023_021dcb70
extern "C" ARM unsigned char func_ov023_021dcb70(struct Struct_ov023_021dcb70* arg0) {
    unsigned int var0;
    if (arg0 == NULL) return 0;
    var0 = arg0->unknown_8_0_;
    return data_ov023_021fd563[var0 <= 7 ? 1 : 0];
}
