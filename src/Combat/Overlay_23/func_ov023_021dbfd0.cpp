#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02075cdc;
extern "C" void func_02075cdc(struct Struct_02075cdc* arg0);

struct Struct_ov023_021dbfd0 {
    SafeAllocator unknown_0_;                  // 0x00
    SafeAllocator unknown_14_;                  // 0x14
    SafeAllocator unknown_28_;                  // 0x28
    SafeAllocator* unknown_3c_;                    // 0x3c
    SafeAllocator* unknown_40_;                    // 0x40
    SafeAllocator* unknown_44_;                    // 0x44
    unsigned char unknown_48_[0xc4 - 0x48];
    struct Struct_02075cdc* unknown_c4_;    // 0xc4
    struct Struct_02075cdc* unknown_c8_;    // 0xc8
};

struct Struct_ov023_021dbfd0_2 {
    unsigned char unknown_0_[0x38];
    int unknown_38_;
    int unknown_3c_;
    unsigned char unknown_40_[0x5e - 0x40];
    unsigned char unknown_5e_;
};

// USA: func_ov023_021dbfd0
extern "C" ARM void func_ov023_021dbfd0(Struct_ov023_021dbfd0* arg0, SafeAllocator* arg1) {
#if defined(jpn)
 enum {Enum_ov023_021dbfd0_1916=0x6f8};
#else
 enum {Enum_ov023_021dbfd0_1916=0x77c};
#endif
    if (arg1 == NULL) return;

    arg0->unknown_0_.CreateTypeA(arg1->Allocate(0xd33), 0xd33);
    arg0->unknown_14_.CreateTypeA(arg1->Allocate(0x4cc), 0x4cc);
    arg0->unknown_28_.CreateTypeA(arg1->Allocate(0x400), 0x400);

    arg0->unknown_c4_ = (struct Struct_02075cdc*)arg1->Allocate(0x70);
    arg0->unknown_c8_ = (struct Struct_02075cdc*)arg1->Allocate(0x70);
    arg0->unknown_3c_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_40_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_44_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_44_->CreateTypeA(arg1->Allocate(0x180), 0x180);

    func_02075cdc(arg0->unknown_c4_);
    func_02075cdc(arg0->unknown_c8_);

    ((Struct_ov023_021dbfd0_2*)arg0->unknown_c4_)->unknown_5e_ = *(signed char*)((char*)arg0 + Enum_ov023_021dbfd0_1916);
    ((Struct_ov023_021dbfd0_2*)arg0->unknown_c4_)->unknown_3c_ = 0;
    ((Struct_ov023_021dbfd0_2*)arg0->unknown_c8_)->unknown_5e_ = *(signed char*)((char*)arg0 + Enum_ov023_021dbfd0_1916);
    ((Struct_ov023_021dbfd0_2*)arg0->unknown_c8_)->unknown_38_ = 0x120;
    ((Struct_ov023_021dbfd0_2*)arg0->unknown_c8_)->unknown_3c_ = 1;

    arg0->unknown_3c_->CreateTypeA(arg1->Allocate(0x280), 0x280);
    arg0->unknown_40_->CreateTypeA(arg1->Allocate(0x280), 0x280);
}
