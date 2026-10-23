#include <globaldefs.h>

struct Struct_ov023_021fd420 {
    char unknown_0_[0x22];
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned short unknown_28_;
};

// USA: func_ov023_021fd420
extern "C" ARM void func_ov023_021fd420(struct Struct_ov023_021fd420* arg0, unsigned short* arg1, unsigned short* arg2, unsigned short* arg3, unsigned short* arg4) {
    *arg1 = arg0->unknown_22_;
    *arg2 = arg0->unknown_24_;
    *arg3 = *arg1 + arg0->unknown_26_;
    *arg4 = *arg2 + arg0->unknown_28_;
}
