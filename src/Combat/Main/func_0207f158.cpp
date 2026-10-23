#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0207f158 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    unsigned char unknown_14_0_ : 2;
    unsigned char unknown_14_2_ : 6;
    unsigned char unknown_15_[3];
    short unknown_18_;
    short unknown_1a_;
    short unknown_1c_;
    short unknown_1e_;
    short unknown_20_;
    short unknown_22_;
    short unknown_24_;
    short unknown_26_;
    short unknown_28_;
    unsigned char unknown_2a_;
    unsigned char unknown_2b_;
    unsigned char unknown_2c_;
    unsigned char unknown_2d_;
};
struct Struct_0207f158_2;
extern "C" void func_0207f5d0(Struct_0207f158_2*, Struct_0207f158*);
extern void* data_02108ee0[2];

// USA: func_0207f158
extern "C" ARM int func_0207f158(Script::Parameter* arg0) {
    Struct_0207f158 var0;
    var0.unknown_0_ = 0;
    var0.unknown_4_ = -1;
    var0.unknown_8_ = 0;
    var0.unknown_6_ = 0;
    var0.unknown_c_ = 0;
    var0.unknown_a_ = 0;
    var0.unknown_e_ = -1;
    var0.unknown_10_ = -1;
    var0.unknown_12_ = 0;
    var0.unknown_13_0_ = 10;
    var0.unknown_13_4_ = 0;
    var0.unknown_14_0_ = 0;
    var0.unknown_14_2_ = 3;
    var0.unknown_18_ = -1;
    var0.unknown_1c_ = -1;
    var0.unknown_20_ = -1;
    var0.unknown_24_ = -1;
    var0.unknown_28_ = 0;
    var0.unknown_2a_ = 0;
#if !defined(jpn)
    var0.unknown_2b_ = 0;
    var0.unknown_2c_ = 0;
#endif
    var0.unknown_4_ = arg0[0].ToInt();
    var0.unknown_6_ = arg0[1].ToInt();
    var0.unknown_8_ = arg0[2].ToInt();
    var0.unknown_12_ = arg0[3].ToInt();
    switch (var0.unknown_12_) {
    case 0:
        var0.unknown_13_0_ = arg0[4].ToInt();
        var0.unknown_13_4_ = arg0[5].ToInt();
        var0.unknown_e_ = arg0[6].ToInt();
        break;
    case 1:
        var0.unknown_a_ = arg0[4].ToInt();
        var0.unknown_c_ = arg0[5].ToInt();
        var0.unknown_13_4_ = arg0[6].ToInt();
        break;
    case 2:
        var0.unknown_13_0_ = arg0[4].ToInt();
        var0.unknown_13_4_ = arg0[5].ToInt();
        var0.unknown_e_ = arg0[6].ToInt();
        var0.unknown_10_ = arg0[7].ToInt();
        break;
    case 3:
        var0.unknown_13_0_ = arg0[4].ToInt();
        var0.unknown_13_4_ = arg0[5].ToInt();
        var0.unknown_e_ = arg0[6].ToInt();
        var0.unknown_14_0_ = arg0[7].ToInt();
        var0.unknown_14_2_ = arg0[8].ToInt();
        var0.unknown_10_ = arg0[9].ToInt();
        break;
    case 4:
        var0.unknown_13_0_ = arg0[4].ToInt();
        var0.unknown_13_4_ = arg0[5].ToInt();
        break;
    case 5:
        var0.unknown_13_0_ = arg0[4].ToInt();
        var0.unknown_13_4_ = arg0[5].ToInt();
        var0.unknown_14_0_ = arg0[6].ToInt();
        var0.unknown_14_2_ = arg0[7].ToInt();
        var0.unknown_10_ = arg0[8].ToInt();
        break;
    }
    func_0207f5d0((Struct_0207f158_2*)data_02108ee0[1], &var0);
    return 1;
}
