#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_02108d04 {
    short unknown_0_;
    short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_02108d04 data_02108d04;
extern int data_020f0a3c;

// USA: func_0206ee80
extern "C" ARM void func_0206ee80(void* arg0, void* arg1, struct Struct_02013fb4* arg2, int arg3, void* arg4, short arg5) {
    char var0[0x430];
    data_02108d04.unknown_c_ = arg0;
    data_02108d04.unknown_8_ = arg4;
    data_02108d04.unknown_0_ = arg5;
    data_02108d04.unknown_4_ = arg1;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0a3c);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
