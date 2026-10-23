#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void func_ov023_021db2e4(volatile int* arg0);
extern "C" int func_02094a00(void);
extern "C" void func_02094ab0(void* arg0);
struct Struct_02075cdc;
extern "C" void func_02075d58(struct Struct_02075cdc* arg0);
extern "C" void func_ov023_021dcd18(void* arg0);
extern "C" void func_ov023_021dc134(void* arg0, int arg1, int arg2);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);

extern AllocatorUnion data_02114e20;

#if defined(jpn)
struct Struct_ov023_021ff9e0_4 { unsigned int unknown_0_[5]; void* unknown_4_; };
#else
struct Struct_ov023_021ff9e0_4 { unsigned int unknown_0_; void* unknown_4_; };
#endif

extern struct Struct_ov023_021ff9e0_4 data_ov023_021ff9e0;

struct Struct_ov023_021dc354 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator* unknown_3c_;
    SafeAllocator* unknown_40_;
    SafeAllocator* unknown_44_;
    unsigned char unknown_48_[0xc4 - 0x48];
    struct Struct_02075cdc* unknown_c4_;
    struct Struct_02075cdc* unknown_c8_;
#if defined(jpn)
    unsigned char unknown_cc_[0x6b0 - 0xcc];
#else
    unsigned char unknown1_cc_[0x734 - 0xcc];
#endif

    int unknown_734_;
    int unknown_738_[7];
    unsigned char unknown_754_[0x774 - 0x754];
    unsigned short unknown_774_;
    unsigned char unknown_776_[0x77b - 0x776];
    signed char unknown_77b_;
    unsigned char unknown_77c_[0x77e - 0x77c];
    signed char unknown_77e_;
    unsigned char unknown_77f_[0x780 - 0x77f];
    int unknown_780_;
    unsigned char unknown_784_[0x79b - 0x784];
    unsigned char unknown_79b_0_ : 1;
};

// USA: func_ov023_021dc354
extern "C" ARM void func_ov023_021dc354(struct Struct_ov023_021dc354* arg0) {
    func_ov023_021db2e4((volatile int*)&arg0->unknown_780_);
    arg0->unknown_77e_ = -1;

    if (!(arg0->unknown_774_ & 0x10)) {
        func_02094ab0((void*)func_02094a00());
    }

    func_ov023_021db2e4((volatile int*)&arg0->unknown_734_);
    for (int var0 = 0; var0 < 7; var0++) {
        func_ov023_021db2e4((volatile int*)&arg0->unknown_738_[var0]);
    }

    if (arg0->unknown_c8_) {
        func_02075d58(arg0->unknown_c8_);
    }
    if (arg0->unknown_c4_) {
        func_02075d58(arg0->unknown_c4_);
    }

    if (arg0->unknown_77b_ != 1) {
        func_ov023_021dcd18(arg0);
    }

    if (arg0->unknown_44_) {
        arg0->unknown_44_->Destroy();
    }
    if (arg0->unknown_40_) {
        arg0->unknown_40_->Destroy();
    }
    if (arg0->unknown_3c_) {
        arg0->unknown_3c_->Destroy();
    }
    arg0->unknown_28_.Destroy();
    arg0->unknown_14_.Destroy();
    arg0->unknown_0_.Destroy();

    if (data_ov023_021ff9e0.unknown_4_) {
        if (!arg0->unknown_79b_0_) {
            func_02012da4(&data_02114e20, data_ov023_021ff9e0.unknown_4_);
        }
        data_ov023_021ff9e0.unknown_4_ = 0;
    }

    func_ov023_021dc134(arg0, -1, arg0->unknown_77b_);
}
