#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern int data_021536c4;
extern int data_020f2e2c;

// USA: func_020e57f4
extern "C" ARM int func_020e57f4(int arg0, int arg1, struct Struct_02013fb4* arg2, int arg3) {
    char var0[0x430];
    *(int*)((char*)&data_021536c4 + 4) = arg0;
    *(int*)&data_021536c4 = arg1;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f2e2c);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
    return 0;
}
