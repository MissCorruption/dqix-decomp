#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_020c8784;
extern "C" Struct_020c8784* func_020c8784(Struct_020c8784* arg0, Struct_020c8784* arg1);

struct Struct_020c87ac;
extern "C" Struct_020c87ac* func_020c87ac(Struct_020c87ac* arg0, Struct_020c87ac* arg1);

struct Struct_020c8854 {
    int unknown_0_;
    struct Struct_020c87ac* unknown_4_;
    struct Struct_020c8784* unknown_8_;
};

struct Struct_020c8854_2 {
    int unknown_0_;
    char unknown_4_[0xc];
    struct Struct_020c8854* unknown_10_;
};

extern struct Struct_020c8854_2* data_02111564[];

// USA: func_020c895c
extern "C" ARM void func_020c895c(int arg0, int arg1, char* arg2) {
    struct Struct_020c8854_2* var0;
    struct Struct_020c8854* var1;
    char* var2;
    int var3 = DisableIRQInterrupts();
    var0 = data_02111564[arg0];
    if (arg1 < 0) {
        arg1 = var0->unknown_0_;
    }
    var1 = &var0->unknown_10_[arg1];
    var2 = arg2 - 0x20;
    var1->unknown_8_ = func_020c8784(var1->unknown_8_, (struct Struct_020c8784*)var2);
    var1->unknown_4_ = func_020c87ac(var1->unknown_4_, (struct Struct_020c87ac*)var2);
    SetIRQInterruptState(var3);
}
