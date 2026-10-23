#include <globaldefs.h>

struct Struct_0207dfc8 {
    unsigned int unknown_0_[10];
};

struct Struct_0207dfc8_2 {
    unsigned int unknown_0_[2];
};

struct Struct_02015ef4_5 {
    struct Struct_0207dfc8 unknown_0_;   // 0x00
    struct Struct_0207dfc8 unknown_28_;   // 0x28
    unsigned int unknown_50_;         // 0x50
    unsigned int unknown_54_;         // 0x54
    struct Struct_0207dfc8_2 unknown_58_; // 0x58
    struct Struct_0207dfc8_2 unknown_60_; // 0x60
    unsigned int unknown_68_;         // 0x68
    unsigned int unknown_6c_;         // 0x6c
};

// USA: func_0207dfc8
extern "C" ARM void func_0207dfc8(struct Struct_02015ef4_5* arg0, struct Struct_02015ef4_5* arg1) {
    arg1->unknown_0_ = arg0->unknown_28_;
    arg1->unknown_28_ = arg0->unknown_28_;
    arg1->unknown_54_ = arg0->unknown_54_;
    arg1->unknown_50_ = arg0->unknown_50_;
    arg1->unknown_58_ = arg0->unknown_60_;
    arg1->unknown_60_ = arg0->unknown_60_;
    arg1->unknown_6c_ = arg0->unknown_6c_;
    arg1->unknown_68_ = arg0->unknown_68_;
}
