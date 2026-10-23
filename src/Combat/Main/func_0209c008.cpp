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

struct Struct_02013fb4;
struct Struct_0201f040_2;

struct Struct_0201f040_3;

extern int data_020f16f8;

struct Struct_0209c008 {
    void* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
};
extern struct Struct_0209c008* data_02109bc8;

// USA: func_0209c008
extern "C" ARM void func_0209c008(void* arg0, struct Struct_02013fb4* arg1, int arg2, int arg3, int arg4, int arg5) {
    struct Struct_0209c008 var0;
    var0.unknown_0_ = arg0;
    var0.unknown_4_ = arg4 * 100 + arg5;
    var0.unknown_6_ = arg3;
    var0.unknown_8_ = 1;
    data_02109bc8 = &var0;

    struct Struct_0201f040 var1;
    ((Script*)&var1)->Initialize();
    ((Script*)&var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f16f8);
    ((Script*)((struct Struct_0201f040_2*)&var1))->Load(arg1, arg2);
    ((Script*)((struct Struct_0201f040_3*)&var1))->Execute();
}
