#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_0224e3b8_5 {
    char unknown_0_[0x50];
    unsigned int unknown_50_;
    char unknown_54_[0x5a - 0x54];
    unsigned char unknown_5a_;
    char unknown_5b_[0x5c - 0x5b];
};

extern Struct_ov031_0224e3b8_5 data_ov031_0224e3b8[4];

struct Struct_ov031_0220aa98 {
    void* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    char* unknown_c_;
    unsigned int unknown_10_;
};

void MarkContextReadyAndSwitch(struct ProcessorContext*);

// USA: func_ov031_0220aa98
extern "C" ARM void func_ov031_0220aa98(unsigned int arg0) {
    int var0 = DisableIRQInterrupts();
    int var1 = 0;
    Struct_ov031_0224e3b8_5* var2 = data_ov031_0224e3b8;
    do {
        if (var2->unknown_5a_ != 0 && (int)(arg0 - var2->unknown_50_) > 0x3bd) {
            var2->unknown_5a_ = 0;
        }
        var1++;
        var2++;
    } while (var1 < 4);
    SetIRQInterruptState(var0);

    ProcessorContext* var3 = data_02111304.firstContext;
    if (var3 == 0) {
        return;
    }
    do {
        Struct_ov031_0220aa98* var4 = (Struct_ov031_0220aa98*)var3->unknown_A4;
        if (var4 != 0 && var4->unknown_0_ != 0 && var4->unknown_9_ != 0 && var4->unknown_8_ == 4 &&
            (unsigned char)var4->unknown_c_[0x455] < 8 && (int)(arg0 - var4->unknown_10_) > 0xef && var4->unknown_4_ == 2) {
            var4->unknown_8_ = 0;
            var4->unknown_4_ = 0;
            MarkContextReadyAndSwitch((ProcessorContext*)var4->unknown_0_);
        }
        var3 = var3->pNext;
    } while (var3 != 0);
}
