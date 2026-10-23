#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0209a218 { unsigned char unknown_0_[8]; };

struct Struct_0209a104_3 {
    unsigned int unknown_0_0_ : 5;
    unsigned int unknown_0_5_ : 7;
    unsigned int unknown_1_4_ : 8;
    unsigned int unknown_2_4_ : 5;
    unsigned int unknown_3_1_ : 7;
};
union Struct_0209a104 { struct Struct_0209a104_3 unknown_0_; unsigned int unknown1_0_; };
struct Struct_0209a104_2 {
    unsigned short unknown_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
    unsigned short unknown_2_;
    union Struct_0209a104 unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

struct Struct_0209a55c;
extern "C" void func_0209a55c(struct Struct_0209a55c* arg0, struct Struct_0209a104_2* arg1);

extern struct Struct_0209a55c* data_02109ba4;

static inline int inline_0209a218(const struct Struct_0209a218* arg0) { return ((Script::Parameter*)arg0)->ToInt(); }

// USA: func_0209a218
extern "C" ARM int func_0209a218(struct Struct_0209a218* arg0) {
    struct Struct_0209a104_2 var0;
    unsigned int var1;

    var0.unknown_0_0_ = inline_0209a218(&arg0[0]);
    var0.unknown_4_.unknown_0_.unknown_0_0_ = inline_0209a218(&arg0[1]);
    var0.unknown_4_.unknown_0_.unknown_0_5_ = inline_0209a218(&arg0[2]);
    var0.unknown_2_ = inline_0209a218(&arg0[3]);
    var0.unknown_1_3_ = inline_0209a218(&arg0[4]);
    var1 = inline_0209a218(&arg0[5]);
    var0.unknown_4_.unknown1_0_ &= ~0xff000u;
    var0.unknown_4_.unknown1_0_ |= (var1 & 0xff) << 12;
    var0.unknown_8_ = inline_0209a218(&arg0[6]);
    var0.unknown_a_ = inline_0209a218(&arg0[7]);
    var1 = inline_0209a218(&arg0[8]);
    var0.unknown_4_.unknown1_0_ &= ~0x1f00000u;
    var0.unknown_4_.unknown1_0_ |= (var1 & 0x1f) << 20;
    var0.unknown_4_.unknown_0_.unknown_3_1_ = 0;

    if (var0.unknown_4_.unknown_0_.unknown_1_4_ != 0) {
        func_0209a55c(data_02109ba4, &var0);
    }
    return 1;
}
