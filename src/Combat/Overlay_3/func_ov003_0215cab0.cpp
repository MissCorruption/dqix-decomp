#include <globaldefs.h>
#include "Resource/MessageSystem.h"

extern "C" int func_020421a0();
struct Struct_ov003_0215cab0 {
#if defined(jpn)
    char unknown_0_[0x406];
#else
    char unknown1_0_[0x3ee];
#endif
    unsigned char unknown_3ee_;
    unsigned char unknown_3ef_;
};

// USA: func_ov003_0215cab0
extern "C" ARM void func_ov003_0215cab0(Struct_ov003_0215cab0* arg0, const char* arg1) {
    if (arg1 == 0) return;
    Struct_02021b84* var0 = (Struct_02021b84*)func_020421a0();
#if defined(jpn)
    func_0204500c(var0, arg1, 0);
#else
    func_0204500c(var0, arg1, 0, 0xe3);
#endif
    var0->unknown_19b2_ = arg0->unknown_3ef_;
    var0->unknown_99c_ = arg0->unknown_3ee_;
}
