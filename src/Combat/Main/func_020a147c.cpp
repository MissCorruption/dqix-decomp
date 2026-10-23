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

struct Struct_02109d94_3 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
};
extern struct Struct_02109d94_3 data_02109d94;

extern int data_020f18ec;

// USA: func_020a147c
extern "C" ARM void func_020a147c(void* arg0, void* arg1, struct Struct_02013fb4* arg2, int arg3, int arg4, unsigned short arg5, unsigned char arg6) {
    if (arg1 != 0 && arg2 != 0 && arg3 != 0) {
        struct Struct_0201f040 var0;
        data_02109d94.unknown_4_ = arg0;
        data_02109d94.unknown_8_ = arg1;
        data_02109d94.unknown_c_ = arg4;
        data_02109d94.unknown_2_ = arg5;
        data_02109d94.unknown_0_ = arg6;
        ((Script*)&var0)->Initialize();
        ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f18ec);
        ((Script*)((struct Struct_0201f040_2*)&var0))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)&var0))->Execute();
    }
}
