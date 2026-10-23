#include <globaldefs.h>
#include "Graphics/Vector.h"

#if defined(jpn)
enum { Enum_ov023_021f7d14_80 = 0x4c, Enum_ov023_021f7d14_78 = 0x4e, Enum_ov023_021f7d14_40 = 0x24 };
#else
enum { Enum_ov023_021f7d14_80 = 0x50, Enum_ov023_021f7d14_82 = 0x52, Enum_ov023_021f7d14_40 = 0x28 };
#endif

struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5*, int, int);

struct Struct_ov023_021f7d14 { fix32_t unknown_0_; fix32_t unknown_4_; };

struct Struct_ov023_021f7d14_2 {
    unsigned char unknown_0_[Enum_ov023_021f7d14_40];
    unsigned char unknown_28_[Enum_ov023_021f7d14_80 - Enum_ov023_021f7d14_40];
    short unknown_50_;
    short unknown_52_;
};

// USA: func_ov023_021f7d14
extern "C" ARM int func_ov023_021f7d14(char* arg0, struct Struct_ov023_021f7d14* arg1) {
    Struct_ov023_021f7d14_2* var0 = (Struct_ov023_021f7d14_2*)arg0;
    var0->unknown_50_ = (short)(arg1->unknown_0_ >> 12);
    var0->unknown_52_ = (short)(arg1->unknown_4_ >> 12);
    return func_0204b5e8((Struct_02020cb8_5*)var0->unknown_28_, var0->unknown_50_, var0->unknown_52_);
}
