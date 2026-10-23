#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"
#include "Resource/CharacterCreationUI.h"

struct Struct_0205d81c;
struct Struct_0205d0e0 {
    unsigned char unknown_0_[0xac];
    short unknown_ac_, unknown_ae_;
};
extern "C" Struct_0205d0e0* func_0205d81c(Struct_0205d81c* arg0, int arg1);
extern "C" void func_0205ac40(Struct_0205ac40*, Struct_0205ac40_2*);

#if defined(jpn)
enum { Enum_ov023_021e6b04_4928 = 0x1340, Enum_ov023_021e6b04_172 = 0x90, Enum_ov023_021e6b04_4956 = 0x1334, Enum_ov023_021e6b04_4964 = 0x133c };
#else
enum { Enum_ov023_021e6b04_4976 = 0x1370, Enum_ov023_021e6b04_172 = 0xac, Enum_ov023_021e6b04_4956 = 0x135c, Enum_ov023_021e6b04_4964 = 0x1364 };
#endif

namespace {
struct Struct_ov023_021e6b04 {
    short unknown_0_, unknown_2_;
    unsigned char unknown_4_[0xe - 4];
    unsigned char unknown_e_;
};
struct Struct_ov023_021e6b04_2 {
    Struct_ov023_021e6b04* unknown_0_;
};
struct Struct_ov023_021e6b04_3 {
    Struct_ov023_021e6b04_2* unknown_0_;
    unsigned char unknown_4_[Enum_ov023_021e6b04_172 - 4];
    Struct_ov023_021d9c7c unknown_ac_;
    unsigned char unknown_168_[Enum_ov023_021e6b04_4956 - Enum_ov023_021e6b04_172 - sizeof(Struct_ov023_021d9c7c)];
    Struct_0205ac40* unknown_135c_;
    unsigned char unknown_1360_[Enum_ov023_021e6b04_4964 - Enum_ov023_021e6b04_4956 - 4];
    Struct_0205ac40_2* unknown_1364_;
#if !defined(jpn)
    unsigned char unknown_1368_[Enum_ov023_021e6b04_4976 - Enum_ov023_021e6b04_4964 - 4];
#endif
    unsigned char unknown_1370_;
    unsigned char unknown_1371_;
#if defined(jpn)
    unsigned char unknown_1342_[0x13b8 - Enum_ov023_021e6b04_4928 - 2];
    int unknown_13b8_;
#endif
};
}

// USA: func_ov023_021e6b04
// JPN: func_ov023_021e7074
extern "C" ARM void func_ov023_021e6b04(char* arg0) {
    Struct_ov023_021e6b04_3* var0 = ((Struct_ov023_021e6b04_3*)(arg0));
    if (var0->unknown_1371_ != 0xe) return;
    if (var0->unknown_1370_ >= 0xa) return;

    Struct_0205d0e0* var1 = func_0205d81c(((Struct_0205d81c*)(&var0->unknown_ac_)), 0xe);
    if (var1 == NULL) return;

#if defined(jpn)
    short var2 = var1->unknown_ac_;
    short var3 = var1->unknown_ae_;
    int var4 = var0->unknown_13b8_;
    int var5 = var4 / 7;
    int var6 = var5 * 16 + 14;
    int var7 = var4 % 7 * 16 + 28;
    if (var5 >= 5) var6 += 8;
    if (var5 >= 10) var6 += 16;
    Struct_0205ac40_2* var16;
    if (var5 >= 10) var16 = var0->unknown_1364_ + 16;
    else var16 = var0->unknown_1364_ + 15;
    short var8 = var2 << 3;
    int var9 = var6 + var8;
    short var10 = var3 << 3;
    int var11 = var7 + var10;
    var16->unknown_14_[0] = var9 << 12;
    var16->unknown_14_[1] = var11 << 12;
    var16->unknown_26_ = 2;
#else
    Struct_ov023_021e6b04_2* var12 = var0->unknown_0_;
    Struct_ov023_021e6b04* var13 = var12->unknown_0_;
    if (var13 == NULL) return;

    unsigned char var14 = var13->unknown_e_;
    Struct_0205ac40_2* var15 = var0->unknown_1364_;
    Struct_0205ac40_2* var16 = var15 + (var14 + 15);
    short var17 = var13->unknown_0_;
    short var18 = var13->unknown_2_;
    var16->unknown_14_[0] = var17 << 12;
    var16->unknown_14_[1] = var18 << 12;
    var16->unknown_26_ = 0;
#endif
    func_0205ac40(var0->unknown_135c_, var16);
}
