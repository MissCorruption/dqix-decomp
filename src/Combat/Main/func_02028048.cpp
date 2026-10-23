#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern int data_020fdd30;
extern int data_020ef6f4;

// USA: func_02028048
extern "C" ARM void func_02028048(int arg0, int arg1, struct Struct_02013fb4* arg2, int arg3) {
    char var0[0x430];
    *(int*)&data_020fdd30 = arg0;
    *(int*)((char*)&data_020fdd30 + 4) = arg1;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020ef6f4);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
    *(int*)((char*)&data_020fdd30 + 4) = 0;
    *(int*)&data_020fdd30 = 0;
}
