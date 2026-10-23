#include <globaldefs.h>

struct Struct_02071d60;
struct Struct_02071d60_2;
extern "C" Struct_02071d60_2* func_02071d60(Struct_02071d60* arg0, int arg1);

struct Struct_ov006_02153744 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short : 14;
};

struct Struct_ov006_02153744_2 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 22;
    unsigned int unknown_12_6_ : 1;
    unsigned int unknown_12_7_ : 9;
};

// USA: func_ov006_02153744
extern "C" ARM void func_ov006_02153744(void* arg0, Struct_02071d60* arg1, Struct_ov006_02153744* arg2, int arg3) {
    int var0;
    for (var0 = 0; var0 < arg3; var0++, arg2++) {
        Struct_02071d60_2* var1 = func_02071d60(arg1, arg2->unknown_0_);
        if (var1 == 0) continue;
        Struct_ov006_02153744_2* var2 = (Struct_ov006_02153744_2*)var1;
        var2->unknown_12_6_ = arg2->unknown_2_0_ || arg2->unknown_2_1_;
    }
}
