#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02108cec_7 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec_7 data_02108cec;

struct Struct_0201f040;
struct Struct_0201f040_2;
struct Struct_02013fb4;
struct Struct_0201f040_3;
extern int data_020f0994;

// USA: func_0206da80
extern "C" ARM int func_0206da80(int* arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3, int arg4, int arg5, struct Struct_02013fb4* arg6, int arg7) {
    char var0[0x430];
    if (data_02108cec.unknown_10_ != 0) {
        *arg0 = 0;
        data_02108cec.unknown_a_ = 0;
        data_02108cec.unknown_8_ = -1;
        data_02108cec.unknown_4_ = -1;
        data_02108cec.unknown_6_ = -1;
    }
    *arg0 = 0;
    data_02108cec.unknown_2_ = arg1;
    data_02108cec.unknown_1_ = arg2;
    data_02108cec.unknown_0_ = arg3;
    data_02108cec.unknown_c_ = arg4;
    data_02108cec.unknown_10_ = arg0;
    data_02108cec.unknown_14_ = (void*)arg5;
    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)((struct Struct_0201f040*)var0))->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f0994);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg6, arg7);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();
    return 1;
}
