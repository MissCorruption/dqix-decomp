#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_0201f040_3;

extern int data_020f0b80;

struct Struct_02108d70_4 {
    short unknown_0_;
    unsigned short unknown_2_;
    short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0xc - 0x8];
    int unknown_c_;
    char unknown_10_[0x18 - 0x10];
    int unknown_18_;
    char unknown_1c_[0x20 - 0x1c];
    int unknown_20_;
};
extern struct Struct_02108d70_4 data_02108d70;

struct Struct_02071488 {
    char unknown_0_[7];
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    char unknown_9_[0x46 - 0x9];
    short unknown_46_;
};

// USA: func_02071488
extern "C" ARM int func_02071488(struct Struct_02013fb4* arg0, int arg1, int arg2, struct Struct_02071488* arg3) {
    char var0[0x430];

    data_02108d70.unknown_20_ = (int)arg3;
    data_02108d70.unknown_18_ = arg2;
    data_02108d70.unknown_c_ = 0;
    data_02108d70.unknown_4_ = 0;

    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0b80);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg0, arg1);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();

    arg3->unknown_7_ = 0;
    arg3->unknown_8_ = 0;
    if (arg2 >= 0x5208 && arg2 < 0x9c40) {
        arg3->unknown_7_ = 1;
        if (arg3->unknown_46_ >= 0) {
            arg3->unknown_46_ = arg3->unknown_46_ + data_02108d70.unknown_2_;
        }
    } else if (arg2 >= 0x9c40) {
        arg3->unknown_8_ = 1;
        if (arg3->unknown_46_ >= 0) {
            arg3->unknown_46_ = arg3->unknown_46_ + data_02108d70.unknown_6_;
        }
    }

    return data_02108d70.unknown_c_;
}
