#include <globaldefs.h>

extern "C" int func_ov031_02207180(void* arg0);
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int mask);
struct Struct_ov031_02206fa4;
extern "C" int func_ov031_02207074(Struct_ov031_02206fa4* arg0);
extern "C" int func_ov031_022063ec(void* arg0);

struct Struct_ov031_02206fa4_2 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[0x70 - 9];
    volatile short unknown_70_;
    char unknown_72_;
    signed char unknown_73_;
};

// USA: func_ov031_02206fa4
extern "C" ARM int func_ov031_02206fa4(Struct_ov031_02206fa4_2* arg0) {
    int var0 = 0;
    if (func_ov031_02207180(arg0)) {
        var0 |= 0x80;
        goto end;
    }

    if (arg0->unknown_70_ & 0x40) var0 |= 0x20;
    signed char var1 = arg0->unknown_73_;
    if (var1 == 1 || (arg0->unknown_70_ & 4)) {
        unsigned int var2 = DisableIRQInterrupts();
        if (func_ov031_02207074((Struct_ov031_02206fa4*)arg0) > 0) var0 |= 1;
        if (func_ov031_022063ec(arg0) > 0) var0 |= 8;
        SetIRQInterruptState(var2);
    }

    {
        signed char var3 = arg0->unknown_73_;
        int var4 = 1;
        if (var3 != 0 && var3 != 4) var4 = 0;
        if (!var4) goto end;
    }

    if ((arg0->unknown_70_ & 4) && (arg0->unknown_8_ != 4)) {
        if (!(var0 & 1)) {
            arg0->unknown_70_ = arg0->unknown_70_ & ~6;
        }
    }

    if (arg0->unknown_70_ & 2) goto end;
    if (!(arg0->unknown_70_ & 4)) var0 |= 0x40;
end:
    return var0;
}
