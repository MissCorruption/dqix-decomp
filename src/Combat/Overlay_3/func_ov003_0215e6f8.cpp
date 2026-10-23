#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern int data_ov003_02180cb8;
extern int data_ov003_0217ff40;

// USA: func_ov003_0215e6f8
extern "C" ARM void func_ov003_0215e6f8(int arg0, int arg1, struct Struct_02013fb4* arg2, int arg3) {
    char var0[0x430];
    *(int*)((char*)&data_ov003_02180cb8 + 4) = arg0;
    *(int*)&data_ov003_02180cb8 = arg1;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov003_0217ff40);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
