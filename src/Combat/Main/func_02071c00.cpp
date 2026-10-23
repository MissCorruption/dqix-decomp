#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02013fb4;

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

struct Struct_02108d98_2 {
    unsigned short unknown_0_;
    char unknown_2_[2];
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
extern struct Struct_02108d98_2 data_02108d98;

extern int data_020f0c78;

// USA: func_02071c00
extern "C" ARM int func_02071c00(int arg0, int arg1, struct Struct_02013fb4* arg2, int arg3) {
    struct Struct_0201f040 var0;

    data_02108d98.unknown_c_ = arg0;
    data_02108d98.unknown_8_ = arg1;
    data_02108d98.unknown_4_ = 0;
    data_02108d98.unknown_0_ = 0;

    ((Script*)&var0)->Initialize();
    ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0c78);
    ((Script*)&var0)->Load(arg2, arg3);
    ((Script*)&var0)->Execute();
}
