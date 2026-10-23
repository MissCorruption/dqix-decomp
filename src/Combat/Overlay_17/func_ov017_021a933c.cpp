#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

#if defined(jpn)
enum { Enum_ov017_021a933c_632 = 0x208, Enum_ov017_021a933c_6578 = 0x17e2, Enum_ov017_021a933c_2460 = 0x86c };
#else
enum { Enum_ov017_021a933c_632 = 0x278, Enum_ov017_021a933c_6578 = 0x19b2, Enum_ov017_021a933c_2460 = 0x99c };
#endif

struct Struct_ov017_021a933c {
    char unknown_0_[0x14];
    int unknown_14_;
    char unknown_18_[Enum_ov017_021a933c_632 - 0x18];
    Struct_0201099c_3 unknown_278_;
};

struct Struct_ov017_021a933c_2 {
    char unknown_0_[Enum_ov017_021a933c_2460];
    int unknown_99c_;
    char unknown_9a0_[Enum_ov017_021a933c_6578 - Enum_ov017_021a933c_2460 - sizeof(int)];
    unsigned char unknown_19b2_;
};

extern "C" Struct_ov017_021a933c_2* func_020421a0(void);
extern "C" int func_020e0434(struct Struct_0201099c_3*, int);
#if !defined(jpn)
extern "C" void func_0204500c(void*, const char*, int, int);
#endif
#if defined(jpn)
extern "C" void func_0204500c(void*, const char*, int);
#endif

// USA: func_ov017_021a933c
extern "C" ARM void func_ov017_021a933c(Struct_ov017_021a933c* arg0, int arg1) {
    Struct_ov017_021a933c_2* var0 = func_020421a0();
    if (arg1 <= 0xc7 && arg1 >= 0x64) {
        if (arg0->unknown_14_ == 1) arg1 += 0x64;
    }
#if defined(jpn)
    func_0204500c(var0, (const char*)func_020e0434(&arg0->unknown_278_, (short)arg1), 0);
#else
    func_0204500c(var0, (const char*)func_020e0434(&arg0->unknown_278_, (short)arg1), 0, 0xe3);
#endif

    if (arg1 <= 0x12b && arg1 >= 0x64) {
        var0->unknown_19b2_ = 1;
    } else {
        var0->unknown_19b2_ = 0;
    }
    if (arg1 > 0x12b || arg1 < 0x64) return;
    if (arg0->unknown_14_ == 0) {
        var0->unknown_99c_ = 2;
    } else {
        var0->unknown_99c_ = 1;
    }
}
