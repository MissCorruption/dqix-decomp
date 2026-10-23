#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02109404_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_[3];
    unsigned short unknown_6_;
};
struct Struct_02095364 {
    unsigned short unknown_0_0_ : 9;
    unsigned short unknown_1_1_ : 1;
    unsigned short unknown_1_2_ : 1;
    unsigned short unknown_1_3_ : 1;
    unsigned short unknown_1_4_ : 1;
    unsigned short unknown_1_5_ : 3;
};
struct Struct_02109418_2 {
    char unknown_0_[0xa8];
    Struct_02095364* unknown_a8_;
};
extern Struct_02109404_3 data_02109404 __attribute__((aligned(4)));
extern Struct_02109418_2 data_02109418;
extern short data_020f13d8;

// USA: func_02095364
extern "C" ARM int func_02095364(Script::Parameter* arg0) {
    if (data_02109404.unknown_1_ != 0) {
        data_02109404.unknown_6_++;
        return 1;
    }
    unsigned short var0 = arg0[0].ToInt();
    unsigned short var1 = arg0[5].ToInt();
    unsigned short var2 = arg0[7].ToInt();
    unsigned short var3 = arg0[8].ToInt();
    unsigned short var4 = arg0[9].ToInt();
    Struct_02095364* var5 = data_02109418.unknown_a8_;
    if (var5 != 0) {
        int var6 = data_02109404.unknown_6_;
        var5[var6].unknown_0_0_ = var0;
        var5[var6].unknown_1_1_ = var1;
        var5[var6].unknown_1_3_ = var2;
        var5[var6].unknown_1_2_ = var3;
        var5[var6].unknown_1_4_ = var4;
    }
    int var7 = data_02109404.unknown_6_ + 1;
    int var8 = data_020f13d8;
    data_02109404.unknown_6_ = var7;
    if (var8 >= 0 && var0 == var8)
        data_02109404.unknown_2_ = var3 != 0;
    return 1;
}
