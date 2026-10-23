#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_02108fd4 {
    void* unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_02108fd4 data_02108fd4;
extern int data_020f1258;

struct Struct_0208df20 { int unknown_0_; short unknown_4_; };

// USA: func_0208df20
extern "C" ARM void func_0208df20(struct Struct_0208df20* arg0, void* arg1, int arg2, int arg3, int arg4, void* arg5) {
    char var0[0x430];
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    data_02108fd4.unknown_c_ = arg1;
    data_02108fd4.unknown_4_ = arg4;
    data_02108fd4.unknown_0_ = &arg5;
    data_02108fd4.unknown_8_ = arg0;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1258);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load((struct Struct_02013fb4*)arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
