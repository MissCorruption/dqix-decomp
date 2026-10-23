#include <globaldefs.h>

#include "Resource/Script.h"

struct Struct_02072398 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_[18];
    unsigned short unknown_28_;
    unsigned char unknown_2a_;
    unsigned char unknown_2b_;
};

struct Struct_02072560 {
    struct Struct_02072398* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_02108da8_2 {
    int unknown_0_;
    struct Struct_02072560* unknown_4_;
};

extern "C" void func_02072560(struct Struct_02072560* arg0, struct Struct_02072398* arg1);

extern Struct_02108da8_2 data_02108da8;

// USA: func_02072398
extern "C" ARM int func_02072398(Script::Parameter* arg0, int arg1) {
    struct Struct_02072398 var0;
    var0.unknown_0_ = -1;
    var0.unknown_2_ = -1;
    unsigned char var1 = 0;
    while (var1 < 18) {
        var0.unknown_4_[var1] = -1;
        var1++;
    }
    var0.unknown_28_ = 100;
    var0.unknown_2a_ = 0;
    var0.unknown_0_ = (arg0++)->ToInt();
    var0.unknown_2_ = (arg0++)->ToInt();
    arg1 -= 2;
    for (int var2 = 0; var2 < 18; var2++) {
        var0.unknown_4_[var2] = arg0[0].ToInt();
        arg0++;
        arg1--;
    }
    if (arg1 != 0) {
        var0.unknown_28_ = arg0[0].ToInt();
        arg0++;
        arg1--;
    }
    if (arg1 != 0) {
        var0.unknown_2a_ = arg0[0].ToInt();
    }
    func_02072560(data_02108da8.unknown_4_, &var0);
    return 1;
}
