#include <globaldefs.h>
#include "Resource/Script.h"

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

extern int data_020f0cc8;

struct Struct_02108db0_4 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    void* unknown_10_;
};
extern struct Struct_02108db0_4 data_02108db0;

// USA: func_02072928
extern "C" ARM void func_02072928(void* arg0, struct Struct_02013fb4* arg1, int arg2, int arg3, void* arg4, unsigned char arg5) {
    data_02108db0.unknown_10_ = arg0;
    data_02108db0.unknown_c_ = 0;
    data_02108db0.unknown_8_ = &arg3;
    data_02108db0.unknown_2_ = 1;
    data_02108db0.unknown_4_ = arg4;
    data_02108db0.unknown_0_ = arg5;

    struct Struct_0201f040 var0;
    ((Script*)&var0)->Initialize();
    ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0cc8);
    ((Script*)((struct Struct_0201f040_2*)&var0))->Load(arg1, arg2);
    ((Script*)((struct Struct_0201f040_3*)&var0))->Execute();
}
