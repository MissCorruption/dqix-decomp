#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02095578 {
    char unknown_0_[0xa0];
    int unknown_a0_;
};

struct Struct_02109404_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[2];
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
    unsigned int unknown_c_;
};
extern struct Struct_02109404_5 data_02109404;
extern int data_020f1444;

struct Struct_0201f040 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    char unknown_2c_[0x400];
    unsigned char unknown_42c_;
};

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

// USA: func_0209562c
extern "C" ARM void func_0209562c(struct Struct_02095578* arg0, int arg1, struct Struct_02013fb4* arg2, int arg3, unsigned short arg4, int arg5, int arg6) {
    if (arg1 != 0 && arg2 != 0 && arg3 != 0) {
        data_02109404.unknown_8_ = arg4;
        data_02109404.unknown_3_ = arg5;
        data_02109404.unknown_4_ = arg6;
        data_02109404.unknown_c_ = arg1;
        arg0->unknown_a0_ = 0;
        data_02109404.unknown_0_ = 0;
        struct Struct_0201f040 var0;
        ((Script*)&var0)->Initialize();
        ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1444);
        ((Script*)((struct Struct_0201f040_2*)&var0))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)&var0))->Execute();
    }
}
