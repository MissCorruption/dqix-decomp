#include <globaldefs.h>
#if defined(jpn)
#define HANDLER_BYTES 0xa0
#define data_021142c4 data_02113f64
#define data_020f22d0 data_020f243c
#else
#define HANDLER_BYTES 0xb4
#endif
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_020d3c28 {
    unsigned char unknown_0_[HANDLER_BYTES];
    int unknown_b4_;
};
extern struct Struct_020d3c28* data_021142c4;
extern int data_020f22d0;

// USA: func_020d3c84
extern "C" ARM void func_020d3c84(struct Struct_020d3c28* arg0, struct Struct_02013fb4* arg1, int arg2) {
    char var0[0x430];
    memset(arg0, 0, HANDLER_BYTES);
    arg0->unknown_b4_ = 0;
    data_021142c4 = arg0;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f22d0);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg1, arg2);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
}
