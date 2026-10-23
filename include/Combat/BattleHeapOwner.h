#pragma once

#include "Memory/SafeAllocator.h"
#include "Combat/MapDisplay.h"
#include "Combat/MenuNodeChain.h"

struct Struct_020e2490;
struct Struct_02043368;
struct Struct_ov003_02173f70 {
    Struct_020e2490* unknown_0_;
    SafeAllocator* unknown_4_;
    unsigned char unknown_8_[0x38 - 8];
    int unknown_38_;
#if defined(jpn)
    unsigned char unknown_3c_[0x790 - 0x3c];
#else
    unsigned char unknown1_3c_[0x814 - 0x3c];
#endif
    Struct_02043368* unknown_814_;
    Struct_02043368_2* unknown_818_;
    unsigned char unknown_81c_[8];
    unsigned short unknown_824_;
    unsigned char unknown_826_[2];
    unsigned char unknown_828_;
    unsigned char unknown_829_[3];
    Struct_02043368* unknown_82c_;
    Struct_02043368_2* unknown_830_;
    unsigned char unknown_834_[0x89c - 0x834];
    Struct_0207f7f0* unknown_89c_;
    Struct_02020cb8 unknown_8a0_[2];
    Struct_0207f7f0_2 unknown_8e0_[8];
};

extern "C" void func_ov003_02173f70(Struct_ov003_02173f70*, SafeAllocator*);
extern Struct_ov003_02173f70* data_ov017_021d840c;
