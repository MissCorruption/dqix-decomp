#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern int data_020f0cc8;

struct Struct_02108db0 {
    unsigned char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};
extern struct Struct_02108db0 data_02108db0;

// USA: func_020728ac
extern "C" ARM void func_020728ac(int arg0, int arg1, struct Struct_02013fb4* arg2, int arg3, int arg4, unsigned short arg5, unsigned char arg6) {
    char var0[0x430];
    data_02108db0.unknown_10_ = arg0;
    data_02108db0.unknown_c_ = arg1;
    data_02108db0.unknown_8_ = arg4;
    data_02108db0.unknown_2_ = arg5;
    data_02108db0.unknown_4_ = 0;
    data_02108db0.unknown_0_ = arg6;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0cc8);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
