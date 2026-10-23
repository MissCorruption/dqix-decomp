#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_020999f0;
struct Struct_020995f8_2;

struct Struct_020995f8 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 15;
    unsigned short : 1;
    unsigned char unknown_4_0_ : 1;
    unsigned char : 7;
    unsigned char unknown_5_[7];
    unsigned char unknown_c_0_ : 4;
    unsigned char unknown_c_4_ : 1;
    unsigned char unknown_c_5_ : 2;
    unsigned char unknown_c_7_ : 1;
    unsigned char unknown_d_0_ : 7;
    unsigned char unknown_d_7_ : 1;
    unsigned char unknown_e_0_ : 2;
    unsigned char unknown_e_2_ : 4;
    unsigned char unknown_e_6_ : 1;
    unsigned char unknown_e_7_ : 1;
};

extern "C" void func_020999f0(struct Struct_020999f0* arg0, struct Struct_020995f8_2* arg1);
extern struct Struct_020999f0* data_02109924;

// USA: func_020995f8
extern "C" ARM int func_020995f8(Script::Parameter* arg0, int arg1) {
    struct Struct_020995f8 var0;
    const char* var1;

    var0.unknown_0_ = 0;
    var0.unknown_2_0_ = 0;
    var0.unknown_5_[0] = 0;
    var0.unknown_c_0_ = 0;
    var0.unknown_c_4_ = 0;
    var0.unknown_c_5_ = 0;
    var0.unknown_c_7_ = 0;
    var0.unknown_d_7_ = 0;
    var0.unknown_e_0_ = 0;
    var0.unknown_e_2_ = 8;
    var0.unknown_e_7_ = 0;
    var0.unknown_4_0_ = 0;

    var0.unknown_0_ = (arg0++)->ToInt();
    var0.unknown_2_0_ = (arg0++)->ToInt();
    (arg0++)->ToString();
    var0.unknown_c_0_ = (arg0++)->ToInt();
    var1 = (arg0++)->ToString();
    (arg0++)->ToString();
    var0.unknown_d_0_ = (arg0++)->ToInt();
    (arg0++)->ToInt();
    (arg0++)->ToInt();
    var0.unknown_c_4_ = (arg0++)->ToInt();
    var0.unknown_c_5_ = (arg0++)->ToInt();
    (arg0++)->ToString();
    var0.unknown_c_7_ = (arg0++)->ToInt();
    arg0 += 3;
    var0.unknown_d_7_ = (arg0++)->ToInt();
    var0.unknown_e_0_ = (arg0++)->ToInt();
    var0.unknown_e_2_ = (arg0++)->ToInt();
    var0.unknown_e_6_ = (arg0++)->ToInt();
    var0.unknown_e_7_ = (arg0++)->ToInt();
    var0.unknown_4_0_ = (arg0++)->ToInt();

    if (var1 == 0) {
        return 0;
    }
    memcpy(var0.unknown_5_, var1, 7);
    var0.unknown_5_[6] = 0;
    func_020999f0(data_02109924, (struct Struct_020995f8_2*)&var0);
    return 1;
}
