#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

struct Struct_ov027_021dd180_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    void* unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov027_021dd180 {
    int unknown_0_;
    unsigned char unknown_4_[0x2c];
    Struct_ov027_021dd180_2 unknown_30_[4];
};

// USA: func_ov027_021dd180
extern "C" ARM int func_ov027_021dd180(Struct_ov027_021dd180* arg0, unsigned int arg1, void* arg2, unsigned int arg3) {
    Struct_ov027_021dd180_2* var0;
    Struct_ov027_021dd180_2* var1;
    int var2 = 0;
    int var3 = DisableIRQInterrupts();

    var1 = arg0->unknown_30_;
    var0 = arg0->unknown_30_ + 4;
    if (var1 < var0) {
        do {
            if (var1->unknown_c_ >= 2) {
                int var4 = arg1 - var1->unknown_0_;
                if (var4 >= 0 && var4 + arg3 <= var1->unknown_4_) {
                    VectorizedInvertedMemcpy((char*)var1->unknown_8_ + var4, arg2, arg3);
                    arg0->unknown_0_ = 0;
                    var2 = 1;
                    break;
                }
            }
            var1++;
        } while (var1 < var0);
    }

    SetIRQInterruptState(var3);
    return var2;
}
