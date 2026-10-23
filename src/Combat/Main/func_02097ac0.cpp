#include <globaldefs.h>
#include "Resource/Script.h"
#if defined(jpn)
#define data_020f14dc data_020f1628
#endif

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_021098e0 {
    void* unknown_0_;
    void* unknown_4_;
};
extern struct Struct_021098e0 data_021098e0;
extern int data_020f14dc;

// USA: func_02097ac0
extern "C" ARM void func_02097ac0(void* arg0, void* arg1, struct Struct_02013fb4* arg2, int arg3) {
    char var0[0x430];
    if (arg2 != 0 && arg3 != 0) {
        data_021098e0.unknown_4_ = arg0;
        data_021098e0.unknown_0_ = &arg1;
        ((Script*)((struct Struct_0201f040*)var0))->Initialize();
        ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f14dc);
        ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
        ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
    }
}
