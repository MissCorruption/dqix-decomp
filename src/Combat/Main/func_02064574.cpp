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

extern "C" int func_020649b0(void* arg0, int arg1, void* arg2);
extern "C" void func_0206f81c(void* arg0);

extern int data_020f05bc;

struct Struct_02108844 {
    char unknown_0_[0x480];
    int unknown_480_;
    int unknown_484_;
    int unknown_488_;
    int unknown_48c_;
};

struct Struct_02064574 {
    char unknown_0_[0xc];
    int unknown_c_;
    char unknown_10_[0x24];
};

// USA: func_02064574
extern "C" ARM void func_02064574(struct Struct_02108844* arg0, int arg1, struct Struct_02013fb4* arg2, int arg3, int arg4, int arg5, int arg6) {
    if (arg1 != 0 && arg2 != 0 && arg3 != 0) {
        arg0->unknown_480_ = arg1;
        arg0->unknown_484_ = arg4;
        arg0->unknown_488_ = arg5;
        arg0->unknown_48c_ = arg6;
        struct Struct_0201f040 var0;
        ((Script*)&var0)->Initialize();
        ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f05bc);
        ((Script*)((struct Struct_0201f040_2*)&var0))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)&var0))->Execute();
        struct Struct_02064574 var1;
        var1.unknown_c_ = arg4;
        if (func_020649b0(arg0, 0x14, &var1)) {
            func_0206f81c(&var1);
        }
    }
}
