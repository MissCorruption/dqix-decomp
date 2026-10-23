#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov023_021f6158_3 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 5;
    unsigned int unknown_3_2_ : 6;
};
struct Struct_ov023_021f6158 { struct Struct_ov023_021f6158_3 unknown_0_; };

struct Struct_ov023_021f6158_2 { char unknown_0_[0x33]; unsigned char unknown_33_; };

#if defined(jpn)
struct Struct_ov023_021fd8a8 { unsigned int unknown_0_[0xd]; };
#else
struct Struct_ov023_021fd8a8 { unsigned int unknown_0_[0xc]; };
#endif

#if defined(jpn)
extern const struct Struct_ov023_021fd8a8 data_ov023_021fd8a8;
#else
extern struct Struct_ov023_021fd8a8 data_ov023_021fd8a8;
#endif

// USA: func_ov023_021f6158
extern "C" ARM void func_ov023_021f6158(struct Struct_ov023_021f6158* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021f6158_2888=0x928};
#else
 enum {Enum_ov023_021f6158_2888=0xb48};
#endif
    struct Struct_ov023_021f6158_2* var0 = (struct Struct_ov023_021f6158_2*)*(void**)((unsigned char*)GetGameResources() + 0x3000 + Enum_ov023_021f6158_2888);
    unsigned char var1 = var0->unknown_33_;
    unsigned int var2 = arg0->unknown_0_.unknown_2_5_;
    int var3 = 0;
    if (var1 <= var2) {
        arg0->unknown_0_.unknown_2_5_ = var1;
        arg0->unknown_0_.unknown_3_2_ = 0;
        var3 = 1;
    } else {
        unsigned int var4 = var1 - 2;
        if ((int)var4 < 0) var4 += 0x18;
        if (var2 < var4) {
            arg0->unknown_0_.unknown_3_2_ = 0;
            arg0->unknown_0_.unknown_2_5_ = var0->unknown_33_;
        } else {
            arg0->unknown_0_.unknown_2_5_ = arg0->unknown_0_.unknown_2_5_ + 2;
            if (arg0->unknown_0_.unknown_2_5_ >= 0x18) {
                arg0->unknown_0_.unknown_2_5_ = arg0->unknown_0_.unknown_2_5_ - 0x18;
                var3 = 1;
            }
        }
    }
    if (var3 == 0) return;

    arg0->unknown_0_.unknown_2_0_ = arg0->unknown_0_.unknown_2_0_ + 1;
#if defined(jpn)

#else
    struct Struct_ov023_021fd8a8 var5 = data_ov023_021fd8a8;
    if ((arg0->unknown_0_.unknown_0_0_ & 3) == 0) {
        var5.unknown_0_[1] = 0x1d;
    }
#endif

    unsigned int var6 = arg0->unknown_0_.unknown_1_4_;
    unsigned int var7 = arg0->unknown_0_.unknown_2_0_;
#if defined(jpn)
    unsigned int var8 = data_ov023_021fd8a8.unknown_0_[var6];
#else
    unsigned int var8 = *(unsigned int*)((char*)&var5 - 4 + var6 * 4);
#endif

    if (var8 >= var7) {
        if (var7 != 0) return;
    }

    arg0->unknown_0_.unknown_2_0_ = 1;
    arg0->unknown_0_.unknown_1_4_ = arg0->unknown_0_.unknown_1_4_ + 1;
    if (arg0->unknown_0_.unknown_1_4_ <= 0xc) return;
    arg0->unknown_0_.unknown_1_4_ = 1;
    arg0->unknown_0_.unknown_0_0_ = arg0->unknown_0_.unknown_0_0_ + 1;
}
