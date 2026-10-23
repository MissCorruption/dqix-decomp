#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/IPC.h"
#include "NitroSDK/ProcessorContext.h"

typedef void (*Type_020d42e0)(void*);

enum { Enum_020d3df8_64 = 64 };

enum Enum_020d3df8 {
    Enum_020d3df8_0 = 0,
    Enum_020d3df8_1 = 1,
    Enum_020d3df8_2 = 2,
    Enum_020d3df8_3 = 3,
    Enum_020d3df8_4 = 4,
    Enum_020d3df8_5 = 5,
    Enum_020d3df8_5_2 = 5,
    Enum_020d3df8_6 = 6,
    Enum_020d3df8_7 = 7,
    Enum_020d3df8_8 = 8,
    Enum_020d3df8_9 = 9,
    Enum_020d3df8_10 = 10,
    Enum_020d3df8_11 = 11,
    Enum_020d3df8_12 = 12,
    Enum_020d3df8_13 = 13,
    Enum_020d3df8_14 = 14,
    Enum_020d3df8_15 = 15,
    Enum_020d3df8_16,
    Enum_020d3df8_17,
    Enum_020d3df8_18,
    Enum_020d3df8_19,
    Enum_020d3df8_20
};

struct Struct_01ff8300_5 {
    unsigned char unknown_0_[0x300];
};

struct Struct_020d3df8 {
    unsigned char unknown_0_[0x800];
};

struct Struct_01ff8300_4 {
    unsigned long unknown_0_[Enum_020d3df8_64];
};

struct Struct_020d3df8_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_020d3df8_3 {
    Struct_01ff8300_5* unknown_0_;
    Struct_020d3df8* unknown_4_;
    void* unknown_8_;
    unsigned long* unknown_c_;
    unsigned long* unknown_10_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    Type_020d42e0 unknown_18_[0x2c];
    Type_020d42e0 unknown_c8_;
    Type_020d42e0 unknown_cc_[16];
    void* unknown_10c_[16];
    unsigned long unknown_14c_;
    unsigned short unknown_150_;
    unsigned char unknown_152_[0xae];
};

struct Struct_ov031_0224e204 {
    BlockedContextList unknown_0_;
    BlockedContextList unknown_8_;
    void** unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
};

struct Struct_021142e0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    Struct_020d3df8_3* unknown_4_;
    Struct_ov031_0224e204 unknown_8_;
    void* unknown_28_[10];
};

struct Struct_020d3df8_4 {
    Struct_020d3df8_3 unknown_0_;
    Struct_01ff8300_5 unknown_200_;
    Struct_020d3df8 unknown_500_;
    Struct_01ff8300_4 unknown_d00_;
    Struct_01ff8300_4 unknown_e00_;
};

extern Struct_021142e0 data_021142e0;
extern unsigned long data_02114380[10][Enum_020d3df8_64] __attribute__((aligned(32)));
extern "C" void func_020d468c();
extern "C" void func_020c7de4(Struct_ov031_0224e204*, int, int);
extern "C" int func_020c7e0c(Struct_ov031_0224e204*, void*, int);
extern "C" void func_020d42e0(unsigned int, unsigned int, unsigned int);

// USA: func_020d3df8
extern "C" ARM Enum_020d3df8 func_020d3df8(void* arg0, unsigned short arg1, unsigned long arg2) {
    const int var0 = DisableIRQInterrupts();
    if (data_021142e0.unknown_0_) {
        SetIRQInterruptState(var0);
        return Enum_020d3df8_3;
    }
    if (arg0 == NULL) {
        SetIRQInterruptState(var0);
        return Enum_020d3df8_6;
    }
    if (arg1 > 3) {
        SetIRQInterruptState(var0);
        return Enum_020d3df8_6;
    }
    if ((unsigned int)arg0 & 31) {
        SetIRQInterruptState(var0);
        return Enum_020d3df8_6;
    }
    InitializeInterProcessorCommunication();
    if (!IsIPCCommandHandlerRegistered(10, IPCSide_Arm7)) {
        SetIRQInterruptState(var0);
        return Enum_020d3df8_4;
    }
    InvalidateDataCacheRange(arg0, arg2);
    DMAMemsetSynchronous(arg1, (unsigned int)arg0, 0, arg2);
    data_021142e0.unknown_4_ = (Struct_020d3df8_3*)arg0;
    data_021142e0.unknown_4_->unknown_0_ = &((Struct_020d3df8_4*)arg0)->unknown_200_;
    data_021142e0.unknown_4_->unknown_4_ = (Struct_020d3df8*)(data_021142e0.unknown_4_->unknown_0_ + 1);
    data_021142e0.unknown_4_->unknown_c_ = (unsigned long*)(data_021142e0.unknown_4_->unknown_4_ + 1);
    data_021142e0.unknown_4_->unknown_10_ = data_021142e0.unknown_4_->unknown_c_ + Enum_020d3df8_64;
    func_020d468c();
    data_021142e0.unknown_4_->unknown_14_ = arg1;
    data_021142e0.unknown_4_->unknown_14c_ = 0;
    data_021142e0.unknown_4_->unknown_150_ = 0;
    for (int var1 = 0; var1 < 16; var1++) {
        data_021142e0.unknown_4_->unknown_cc_[var1] = NULL;
        data_021142e0.unknown_4_->unknown_10c_[var1] = NULL;
    }
    func_020c7de4(&data_021142e0.unknown_8_, (int)data_021142e0.unknown_28_, 10);
    for (int var2 = 0; var2 < 10; var2++) {
        ((Struct_020d3df8_2*)data_02114380[var2])->unknown_0_ = 0x8000;
        CleanCacheRange(data_02114380[var2], 2);
        func_020c7e0c(&data_021142e0.unknown_8_, data_02114380[var2], 1);
    }
    SetArm9IPCCommandHandler(10, func_020d42e0);
    data_021142e0.unknown_0_ = 1;
    SetIRQInterruptState(var0);
    return Enum_020d3df8_0;
}
