#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0207ed1c;
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

struct Struct_0201f040_2;

struct Struct_0201f040_3;

extern void* data_02108ed8[2];
extern int data_020f0f88;

// USA: func_0207ef74
extern "C" ARM void func_0207ef74(struct Struct_0207ed1c* arg0, SafeAllocator* arg1, struct Struct_02013fb4* arg2, int arg3) {
    if (arg1 != 0 && arg2 != 0 && arg3 != 0) {
        struct Struct_0201f040 var0;
        data_02108ed8[1] = arg0;
        data_02108ed8[0] = arg1;
        ((Script*)&var0)->Initialize();
        ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0f88);
        ((Script*)((struct Struct_0201f040_2*)&var0))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)&var0))->Execute();
    }
}
