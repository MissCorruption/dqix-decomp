#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov028_021d98b8 {
    float unknown_0_;
    unsigned int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

struct Struct_020979c0 {
    unsigned int unknown_0_[8];
};

struct Struct_ov028_021d8b90 {
    Struct_ov028_021d98b8 unknown_0_;
    unsigned char unknown_c_[0x10];
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    Struct_020979c0 unknown_20_;
    unsigned int unknown_40_;
    SafeAllocator unknown_44_;
    unsigned int unknown_58_;
    unsigned int unknown_5c_;
    unsigned int unknown_60_;
    unsigned int unknown_64_;
    unsigned int unknown_68_;
    unsigned short unknown_6c_;
    unsigned char unknown_6e_;
    int unknown_70_;
    unsigned int unknown_74_;
    unsigned int unknown_78_;
    unsigned int unknown_7c_;
    unsigned char unknown_80_;
    unsigned char unknown_81_;
};

extern "C" void func_020979c0(Struct_020979c0* arg0, unsigned char arg1);
extern "C" Struct_ov028_021d98b8* func_ov028_021d98b8(Struct_ov028_021d98b8* arg0);

static inline unsigned int inline_ov017_021a86d0(void) {
    return (*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8;
}

static inline unsigned int inline_ov028_021d8b90(void) {
    return (*(volatile unsigned int*)0x4001000 & 0x1f00) >> 8;
}

// USA: func_ov028_021d8b90
extern "C" ARM void func_ov028_021d8b90(Struct_ov028_021d8b90* arg0) {
    func_ov028_021d98b8(&arg0->unknown_0_);
    arg0->unknown_1c_ = 0;
    arg0->unknown_1d_ = 0;
    func_020979c0(&arg0->unknown_20_, 0);
    arg0->unknown_40_ = 0;
    arg0->unknown_44_.ResetAllocatorPointer();
    arg0->unknown_58_ = inline_ov017_021a86d0();
    arg0->unknown_5c_ = inline_ov028_021d8b90();
    arg0->unknown_60_ = 0;
    arg0->unknown_64_ = 0;
    arg0->unknown_6c_ = 0;
    arg0->unknown_68_ = 0;
    arg0->unknown_6e_ = 0;
    arg0->unknown_70_ = -1;
    arg0->unknown_74_ = 0;
    arg0->unknown_78_ = 0;
    arg0->unknown_7c_ = 0;
    arg0->unknown_80_ = 0;
    arg0->unknown_81_ = 0;
}
