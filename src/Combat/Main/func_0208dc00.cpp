#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    char unknown_2c_[0x400];
    unsigned char unknown_42c_;
};

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

extern "C" void* func_02012fe4(void);

struct Struct_02108fc8_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern struct Struct_02108fc8_2 data_02108fc8;
extern int data_020f1248;

// USA: func_0208dc00
extern "C" ARM int func_0208dc00(struct Struct_02013fb4* arg0, int arg1, int arg2) {
    data_02108fc8.unknown_8_ = arg2;
    data_02108fc8.unknown_0_ = 0;
    data_02108fc8.unknown_4_ = *(int*)((char*)func_02012fe4() + 8);
    struct Struct_0201f040 var0;
    ((Script*)&var0)->Initialize();
    ((Script*)&var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f1248);
    ((Script*)((struct Struct_0201f040_2*)&var0))->Load(arg0, arg1);
    ((Script*)((struct Struct_0201f040_3*)&var0))->Execute();
    return data_02108fc8.unknown_0_;
}
