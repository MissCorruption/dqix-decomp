#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void func_020c9be0(void);

struct Struct_ov027_021dd118 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov027_021dd118_2 {
    unsigned char unknown_0_[0x30];
    Struct_ov027_021dd118 unknown_30_[4];
};

// USA: func_ov027_021dd118
extern "C" ARM void func_ov027_021dd118(Struct_ov027_021dd118_2* arg0, void* arg1, void* arg2, void* arg3, unsigned int arg4) {
    Struct_ov027_021dd118* var0;
    int var1;
    var1 = DisableIRQInterrupts();
    Struct_ov027_021dd118* var2 = arg0->unknown_30_;
    var0 = arg0->unknown_30_ + 4;
    for (;;) {
        if (var2 >= var0) {
            func_020c9be0();
        }
        if (var2->unknown_c_ == 0) {
            var2->unknown_0_ = arg1;
            var2->unknown_4_ = arg2;
            var2->unknown_8_ = arg3;
            var2->unknown_c_ = arg4;
            break;
        }
        var2++;
    }
    SetIRQInterruptState(var1);
}
