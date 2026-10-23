#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201edf0_3 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201edf0 { unsigned int unknown_0_[3]; };

struct Struct_0201edf0_2 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    unsigned short unknown_6_;
    struct Struct_0201edf0 unknown_8_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
};

struct Struct_0201f214;

extern "C" void func_0201f214(struct Struct_0201f214*, struct Struct_0201edf0_2*);

struct Struct_0201c1c8_2;
struct Struct_020fdc40_5 {
    int unknown_0_;
    struct Struct_0201c1c8_2* unknown_4_;
    struct Struct_0201f214* unknown_8_;
    char unknown_c_[16];
};
extern struct Struct_020fdc40_5 data_020fdc40;

// USA: func_0201edf0
extern "C" ARM int func_0201edf0(struct Struct_0201edf0_3* arg0, int arg1) {
    struct Struct_0201edf0_2 var0;
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    float var7;
    float var8;
    float var9;
    unsigned char var10;
    int var11;
    int var12;
    int var13;

    var11 = ((Script::Parameter*)&arg0[0])->ToInt();
    var12 = ((Script::Parameter*)&arg0[1])->ToInt();
    var1 = ((Script::Parameter*)&arg0[2])->ToFloat();
    var2 = ((Script::Parameter*)&arg0[3])->ToFloat();
    var3 = ((Script::Parameter*)&arg0[4])->ToFloat();
    var13 = ((Script::Parameter*)&arg0[5])->ToInt();
    struct Struct_0201edf0_3* var14 = &arg0[6];
    arg0 += 7;
    (void)(void*)((Script::Parameter*)var14)->ToString();
    var4 = 1.0f;
    var5 = 1.0f;
    var7 = 1.0f;
    if (arg1 > 10) {
        var4 = ((Script::Parameter*)&arg0[0])->ToFloat();
        var5 = ((Script::Parameter*)&arg0[1])->ToFloat();
        struct Struct_0201edf0_3* var15 = &arg0[2];
        arg0 += 3;
        var7 = ((Script::Parameter*)var15)->ToFloat();
    }
    var6 = 0.0f;
    var8 = 0.0f;
    var9 = 0.0f;
    if (arg1 > 7) {
        var6 = ((Script::Parameter*)&arg0[0])->ToFloat();
        var8 = ((Script::Parameter*)&arg0[1])->ToFloat();
        struct Struct_0201edf0_3* var16 = &arg0[2];
        arg0 += 3;
        var9 = ((Script::Parameter*)var16)->ToFloat();
    }
    var10 = 0xf;
    if (arg1 > 13) {
        var10 = ((Script::Parameter*)&arg0[0])->ToInt() & 0xff;
        if (var10 & 0x10) {
            var10 &= ~0x10;
        } else {
            var10 |= 0x10;
        }
        if (var10 & 0x20)
            var10 = var10 & ~0x20;
        else
            var10 = var10 | 0x20;
    }
    var0.unknown_0_ = var11;
    var0.unknown_2_ = var12;
    var0.unknown_4_ = var13;
    var0.unknown_8_.unknown_0_[0] = (int)(4096.0f * var1);
    var0.unknown_8_.unknown_0_[1] = (int)(4096.0f * var2);
    var0.unknown_8_.unknown_0_[2] = (int)(4096.0f * var3);
    var0.unknown_14_ = (int)(4096.0f * var6);
    var0.unknown_16_ = (int)(4096.0f * var8);
    var0.unknown_18_ = (int)(4096.0f * var9);
    var0.unknown_1a_ = (int)(4096.0f * var4);
    var0.unknown_1c_ = (int)(4096.0f * var5);
    var0.unknown_1e_ = (int)(4096.0f * var7);
    var0.unknown_6_ = var10;
    func_0201f214(data_020fdc40.unknown_8_, &var0);
    return 1;
}
