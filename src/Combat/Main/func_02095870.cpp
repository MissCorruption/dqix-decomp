#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

struct Struct_02109404_7 {
    char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    char unknown_3_[3];
    unsigned short unknown_6_;
};
extern struct Struct_02109404_7 data_02109404;
extern short data_020f13d8;
extern char data_020f13fc[];

// USA: func_02095870
extern "C" ARM int func_02095870(void* arg0, struct Struct_02013fb4* arg1, int arg2, int arg3, unsigned char* arg4) {
    char var0[0x430];

    data_02109404.unknown_6_ = 0;
    data_02109404.unknown_1_ = 0;
    data_02109404.unknown_2_ = 0;
    data_020f13d8 = (short)arg3;

    if (arg3 <= 0) {
        return 1;
    }

    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f13fc);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg1, arg2);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();

    *arg4 = data_02109404.unknown_2_;
    return 0;
}
