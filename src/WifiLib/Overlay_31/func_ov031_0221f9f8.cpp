#include <globaldefs.h>

int DisableIRQInterrupts();
void SetIRQInterruptState(int);

struct Struct_ov031_0224f670_10 {
    char unknown_0_[0x68];
    int unknown_68_;
    int unknown_6c_;
};

extern Struct_ov031_0224f670_10 data_ov031_0224f670;
extern int data_ov031_0224f6f4[4];

// USA: func_ov031_0221f9f8
extern "C" THUMB void func_ov031_0221f9f8() {
    int var0 = DisableIRQInterrupts();
    data_ov031_0224f670.unknown_68_ = 0;
    data_ov031_0224f670.unknown_6c_ = 0;
    int var1 = 0;
    int* var2 = data_ov031_0224f6f4;
    do {
        var1++;
        *var2++ = 0;
    } while (var1 < 4);
    SetIRQInterruptState(var0);
}
