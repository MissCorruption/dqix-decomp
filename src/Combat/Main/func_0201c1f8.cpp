#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1f8;
struct Struct_0201c1f8_2 {
    unsigned short unknown_0_, unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[8], unknown_d_[28];
    unsigned char unknown_29_0_ : 3;
    unsigned char unknown_29_3_ : 1;
    unsigned char unknown_29_4_ : 1;
    unsigned char unknown_29_5_ : 1;
    unsigned char unknown_29_6_ : 1;
    unsigned char unknown_29_7_ : 1;
    unsigned char unknown_2a_;
    void inline_0201c1f8(unsigned short arg0) { unknown_0_ = arg0; }
    void inline_0201c1f8_2(unsigned short arg0) { unknown_2_ = arg0; }
    void inline_0201c1f8_3(unsigned char arg0) { unknown_29_0_ = arg0; }
    void inline_0201c1f8_4(unsigned char arg0) { unknown_2a_ = arg0; }
    void inline_0201c1f8_5(unsigned char arg0) { unknown_29_3_ = arg0; }
    void inline_0201c1f8_6(unsigned char arg0) { unknown_29_4_ = arg0; }
    void inline_0201c1f8_7(unsigned char arg0) { unknown_29_5_ = arg0; }
    void inline_0201c1f8_8(unsigned char arg0) { unknown_29_6_ = arg0; }
    void inline_0201c1f8_9(unsigned char arg0) { unknown_29_7_ = arg0; }
};
struct Struct_020fdc14_2 { void* unknown_0_[2]; Struct_0201c1f8* unknown_8_; };
extern Struct_020fdc14_2 data_020fdc14 __attribute__((aligned(4)));
extern "C" void func_0201c4d4(Struct_0201c1f8*, Struct_0201c1f8_2*);

// USA: func_0201c1f8
extern "C" ARM int func_0201c1f8(Script::Parameter* arg0) {
    Struct_0201c1f8_2 var0;
    int var1 = 0;
    var0.unknown_0_ = 0;
    var0.unknown_2_ = 0;
    var0.unknown_5_[0] = 0;
    var0.unknown_4_ = 0;
    var0.unknown_29_0_ = 0;
    var0.unknown_29_4_ = 1;
    var0.unknown_29_3_ = 0;
    var0.unknown_29_5_ = 0;
    var0.unknown_29_6_ = 0;
    var0.unknown_29_7_ = 0;
    var0.inline_0201c1f8(arg0[0].ToInt());
    var0.inline_0201c1f8_2(arg0[1].ToInt());
    const char* var2 = arg0[2].ToString();
    var0.inline_0201c1f8_3(arg0[3].ToInt());
    const char* var3 = arg0[4].ToString();
    const char* var4 = arg0[5].ToString();
    var0.inline_0201c1f8_4(arg0[6].ToInt());
    var0.inline_0201c1f8_6(arg0[7].ToInt());
    var0.inline_0201c1f8_5(arg0[8].ToInt());
    var0.inline_0201c1f8_7(arg0[9].ToInt());
    var0.inline_0201c1f8_8(arg0[10].ToInt());
    var0.inline_0201c1f8_9(arg0[11].ToInt());
    if (var4 == NULL) {
        var1 = 0;
    } else {
        memcpy(var0.unknown_5_, var3, sizeof(var0.unknown_5_));
        var0.unknown_5_[7] = 0;
        memcpy(var0.unknown_d_, var4, sizeof(var0.unknown_d_));
        Struct_020fdc14_2* var5 = &data_020fdc14;
        Struct_0201c1f8* var6 = var5->unknown_8_;
        var0.unknown_d_[27] = 0;
        func_0201c4d4(var6, &var0);
        var1 = 1;
    }
    return var1;
}
