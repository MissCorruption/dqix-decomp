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

struct Struct_02013fb4;
struct Struct_0201f040_2;

struct Struct_0201f040_3;

struct Struct_0209bc98 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
};

struct Struct_02109bb0 {
    struct Struct_0209bc98* unknown_0_;
};
extern struct Struct_02109bb0 data_02109bb0;
extern int data_020f16c0;

// USA: func_0209bc98
extern "C" ARM void func_0209bc98(void* arg0, struct Struct_02013fb4* arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    if (arg1 != 0) {
        struct Struct_0209bc98 var0;
        data_02109bb0.unknown_0_ = &var0;
        data_02109bb0.unknown_0_->unknown_0_ = arg0;
        data_02109bb0.unknown_0_->unknown_4_ = arg4;
        data_02109bb0.unknown_0_->unknown_8_ = arg5;
        data_02109bb0.unknown_0_->unknown_c_ = arg6;
        data_02109bb0.unknown_0_->unknown_10_ = 1;
        data_02109bb0.unknown_0_->unknown_14_ = 0;

        struct Struct_0201f040 var1;
        ((Script*)&var1)->Initialize();
        ((Script*)&var1)->SetOpcodeLookup((Script::OpcodeLookupEntry*)&data_020f16c0);
        ((Script*)((struct Struct_0201f040_2*)&var1))->Load(arg1, arg2);
        ((Script*)((struct Struct_0201f040_3*)&var1))->Execute();
    }
}
