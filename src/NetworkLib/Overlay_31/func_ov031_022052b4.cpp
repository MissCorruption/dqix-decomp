#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/ProcessorContext.h"

struct Struct_ov031_022052b4 {
    char unknown_0_[0x64];
    void* unknown_64_;
    void* unknown_68_;
    int unknown_6c_;
    short unknown_70_;
    signed char unknown_72_, unknown_73_;
    unsigned short unknown_74_, unknown_76_;
    unsigned int unknown_78_;
    Struct_ov031_022052b4* unknown_7c_;
};
struct Struct_ov031_022052b4_2 {
    int (*unknown_0_)(void*);
    Struct_ov031_022052b4* unknown_4_;
    void* unknown_8_;
    signed char unknown_c_, unknown_d_;
    unsigned char unknown_e_[2];
};
extern "C" int func_020c7fe0(void*, unsigned int*, int);
extern "C" void func_ov031_02205174(int);
extern "C" int func_020c7ea0(void*, unsigned int*, int);
extern "C" int func_020c7e0c(void*, unsigned int, int);

// USA: func_ov031_022052b4
extern "C" ARM void func_ov031_022052b4(void* arg0) {
    Struct_ov031_022052b4_2* var0;
    int var1;
    int var2;
    while (1) {
        func_020c7fe0(arg0, (unsigned int*)&var0, 1);
        if (var0 == NULL) break;
        var2 = var0->unknown_0_(var0);
        var1 = DisableIRQInterrupts();
        AddContextSwitchLock();
        func_020c7ea0(arg0, NULL, 0);
        if (var0->unknown_4_) var0->unknown_4_->unknown_6c_ = var2;
        if (var0->unknown_8_) func_020c7e0c(var0->unknown_8_, var2, 0);
        func_ov031_02205174((int)var0);
        RemoveContextSwitchLock();
        SetIRQInterruptState(var1);
    }
}
