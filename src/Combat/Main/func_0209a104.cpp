#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0209a104_3 {
    unsigned int unknown_0_0_ : 5;
    unsigned int unknown_0_5_ : 7;
    unsigned int unknown_1_4_ : 8;
    unsigned int unknown_2_4_ : 5;
    unsigned int unknown_3_1_ : 7;
};
union Struct_0209a104 { struct Struct_0209a104_3 unknown_0_; unsigned int unknown1_0_; unsigned int unknown2_0_; };
struct Struct_0209a104_2 {
    unsigned short unknown_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
    unsigned short unknown_2_;
    union Struct_0209a104 unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

struct Struct_0209a4f0;
extern "C" void func_0209a4f0(struct Struct_0209a4f0* arg0, struct Struct_0209a104_2* arg1);

extern struct Struct_0209a4f0* data_02109ba4;

static inline int inline_0209a104(char* arg0, int arg1) { struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)(arg0 + arg1); int var1 = ((Script::Parameter*)var0)->ToInt(); return var1; }

// USA: func_0209a104
extern "C" ARM int func_0209a104(char* arg0) {
    struct Struct_0209a104_2 var0;
    unsigned int var1;

    var0.unknown_0_0_ = inline_0209a104(arg0, 0);
    var0.unknown_4_.unknown_0_.unknown_0_0_ = inline_0209a104(arg0, 8);
    var0.unknown_4_.unknown_0_.unknown_0_5_ = inline_0209a104(arg0, 0x10);
    var0.unknown_2_ = inline_0209a104(arg0, 0x18);
    var0.unknown_1_3_ = inline_0209a104(arg0, 0x20);
    var1 = (unsigned int)inline_0209a104(arg0, 0x28); var1 <<= 24; var0.unknown_4_.unknown1_0_ &= ~0xff000u; var0.unknown_4_.unknown1_0_ |= var1 >> 12;
    var0.unknown_8_ = inline_0209a104(arg0, 0x30);
    var0.unknown_a_ = inline_0209a104(arg0, 0x38);
    var1 = (unsigned int)inline_0209a104(arg0, 0x40) << 27; var0.unknown_4_.unknown1_0_ &= ~0x1f00000u; var0.unknown_4_.unknown1_0_ |= var1 >> 7;
    var0.unknown_4_.unknown2_0_ = var0.unknown_4_.unknown1_0_ & 0x01ffffffu;

    func_0209a4f0(data_02109ba4, &var0);
    return 1;
}
