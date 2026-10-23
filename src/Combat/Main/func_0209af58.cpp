#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0209af58 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern struct Struct_0209af58* data_02109bac;

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern char data_020f1680[];

// USA: func_0209af58
extern "C" ARM void func_0209af58(void* arg0, struct Struct_02013fb4* arg1, int arg2, int arg3, int arg4) {
    if (arg1 != 0) {
        struct Struct_0209af58 var0;
        char var1[0x430];

        data_02109bac = &var0;
        data_02109bac->unknown_0_ = arg0;
        data_02109bac->unknown_4_ = arg4;
        data_02109bac->unknown_8_ = 0;

        ((Script*)((struct Struct_0201f040*)var1))->Initialize();
        ((Script*)var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1680);
        ((Script*)((struct Struct_0201f040_2*)var1))->Load(arg1, arg2);
        ((Script*)((struct Struct_0201f040_3*)var1))->Execute();
    }
}
