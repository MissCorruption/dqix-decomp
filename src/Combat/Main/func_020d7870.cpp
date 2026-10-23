#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_0214e33c {
    short unknown_0_;
    short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_0214e33c data_0214e33c;
extern int data_020f2308;

// USA: func_020d7870
extern "C" ARM void func_020d7870(void* arg0, void* arg1, struct Struct_02013fb4* arg2, int arg3, unsigned char arg4) {
    char var0[0x430];
    data_0214e33c.unknown_c_ = arg0;
    data_0214e33c.unknown_8_ = arg1;
    if (arg4 == 0) {
        data_0214e33c.unknown_4_ = (char*)arg0 + 4;
        data_0214e33c.unknown_0_ = *(short*)((char*)arg0 + 0x14);
    }
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f2308);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg2, arg3);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
