#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_02205ef8 {
    Struct_ov031_02205ef8* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned int unknown_8_;
    unsigned char unknown_c_[1];
};

struct Struct_ov031_02205ef8_2 {
    char unknown_0_[0xfe];
    signed char unknown_fe_;
    char unknown_ff_;
    Struct_ov031_02205ef8* unknown_100_;
    Struct_ov031_02205ef8* volatile unknown_104_;
    unsigned short unknown_108_;
    char unknown_10a_[2];
    BlockedContextList unknown_10c_;
};

struct Struct_ov031_02205ef8_3 {
    char unknown_0_[0x64];
    Struct_ov031_02205ef8_2* unknown_64_;
    char unknown_68_[8];
    volatile short unknown_70_;
};

struct Struct_ov031_02205ef8_4 {
    char unknown_0_[0x1c];
    void (*unknown_1c_)(void*);
};

extern Struct_ov031_02205ef8_4* data_ov031_022496a4;
extern "C" int func_ov031_02207180(void*);

// USA: func_ov031_02205ef8
extern "C" ARM int func_ov031_02205ef8(Struct_ov031_02205ef8_3* arg0, void* arg1, int arg2,
                                       unsigned short* arg3, unsigned int* arg4, int arg5) {
    Struct_ov031_02205ef8_2* var0;
    Struct_ov031_02205ef8* var1;
    int var2;
    int var3;
    var0 = arg0->unknown_64_;
    var1 = var0->unknown_104_;
    var3 = DisableIRQInterrupts();
    var1 = var0->unknown_104_;
    if (var1 == NULL) {
        int var4 = arg5 & 1;
        do {
            if (!var4) {
                var2 = -6;
                break;
            }
            BlockCurrentContext(&var0->unknown_10c_);
            if (!func_ov031_02207180(arg0)) {
                int var5 = 0;
                if (arg0 != NULL) var5 = (arg0->unknown_70_ & 1) != 0;
                if (var5) {
                    continue;
                }
            }
            var2 = -56;
            break;
        } while ((var1 = var0->unknown_104_) == NULL);
    }
    if (var1 != NULL) {
        if (arg2 > var1->unknown_4_) {
            arg2 = var1->unknown_4_;
        }
        VectorizedInvertedMemcpy(var1->unknown_c_, arg1, arg2);
        if (arg3 != NULL) {
            *arg3 = var1->unknown_6_;
        }
        if (arg4 != NULL) {
            *arg4 = var1->unknown_8_;
        }
        var2 = var1->unknown_4_;
        if (var0->unknown_fe_ == 0) {
            var0->unknown_104_ = var1->unknown_0_;
            if (var1->unknown_0_ == NULL) {
                var0->unknown_100_ = NULL;
            }
            data_ov031_022496a4->unknown_1c_(var1);
            var0->unknown_108_ -= var2;
        }
    }
    SetIRQInterruptState(var3);
    return var2;
}
