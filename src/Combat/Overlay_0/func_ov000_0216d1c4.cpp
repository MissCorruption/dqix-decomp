#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern int data_ov000_02184264;
extern int data_ov000_02183b5c;

// USA: func_ov000_0216d1c4
extern "C" ARM void func_ov000_0216d1c4(int arg0, struct Struct_02013fb4* arg1, int arg2, int* arg3) {
    char var0[0x430];
    *(int*)((char*)&data_ov000_02184264 + 0x8) = arg0;
    *(int*)((char*)&data_ov000_02184264 + 0x4) = 0;
    *(int*)((char*)&data_ov000_02184264 + 0x0) = 0;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_ov000_02183b5c);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg1, arg2);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
    *arg3 = *(int*)&data_ov000_02184264;
}
