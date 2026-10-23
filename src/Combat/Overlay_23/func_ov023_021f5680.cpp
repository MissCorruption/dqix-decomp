#include <globaldefs.h>
#include "Util/Random.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov023_021f5680 {
    unsigned int unknown_0_0_ : 7;
    unsigned int unknown_0_7_ : 25;
};

struct Struct_ov023_021f5680_2 {
    char unknown_0_[4];
    short unknown_4_;
    struct Struct_ov023_021f5680 unknown_8_;
    char unknown_c_[0x28 - 12];
};

struct Struct_ov023_021fff08_3 {
    unsigned char unknown_0_;
    char unknown_1_[1];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    char unknown_4_[8];
    struct Struct_ov023_021f5680_2* unknown_c_;
};

extern struct Struct_ov023_021fff08_3 data_ov023_021fff08;
extern unsigned char data_ov023_021fff1c[];

// USA: func_ov023_021f5680
extern "C" ARM int func_ov023_021f5680(struct Struct_0201c1c8* arg0) {
    if (data_ov023_021fff08.unknown_2_ == 0) {
        data_ov023_021fff08.unknown_3_ = data_ov023_021fff08.unknown_3_ + 1;
        return 1;
    }
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
    for (int var4 = 0; var4 < data_ov023_021fff08.unknown_0_; var4++) {
        if (data_ov023_021fff08.unknown_3_ == data_ov023_021fff1c[var4]) {
            struct Random* var5 = GetBTRandom();
            data_ov023_021fff08.unknown_c_[var4].unknown_4_ = (short)var0;
            ((struct Struct_ov023_021f5680*)((char*)data_ov023_021fff08.unknown_c_ + 8 + var4 * 0x28))->unknown_0_7_ = var1;
            int var6 = NextRandomBetween(var5, var2, var3);
            ((struct Struct_ov023_021f5680*)((char*)data_ov023_021fff08.unknown_c_ + 8 + var4 * 0x28))->unknown_0_0_ = var6;
        }
    }
    data_ov023_021fff08.unknown_3_ = data_ov023_021fff08.unknown_3_ + 1;
    return 1;
}
