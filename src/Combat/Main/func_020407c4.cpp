#include <globaldefs.h>
#include "Combat/EntryGetterTypes.h"

extern "C" void __clear(void* arg0, int arg1);

extern "C" int func_0203cdd0(struct Struct_0203cdd0* arg0);

struct Struct_020407c4 { unsigned int unknown_0_[3]; };

struct Struct_020407c4_2 {
    unsigned char unknown_0_[0x14];
    void* unknown_14_;
    unsigned char* unknown_18_;
    unsigned char* unknown_1c_;
};

// USA: func_020407c4
extern "C" ARM void func_020407c4(struct Struct_020407c4* arg0, struct Struct_020407c4_2* arg1) {
    Struct_020407c4 var0;
    if (arg1->unknown_14_ != NULL) {
        __clear(&var0, 0xc);
        var0.unknown_0_[1] = func_0203cdd0((struct Struct_0203cdd0*)arg1->unknown_14_);
        *arg0 = var0;
        return;
    }
    if (arg1->unknown_18_ != NULL) {
        *arg0 = *(struct Struct_020407c4*)(arg1->unknown_18_ + 0x50);
        return;
    }
    if (arg1->unknown_1c_ != NULL) {
        *arg0 = *(struct Struct_020407c4*)(arg1->unknown_1c_ + 0x50);
        return;
    }
    {
        Struct_020407c4 var1;
        var1.unknown_0_[0] = 0;
        var1.unknown_0_[1] = 0;
        var1.unknown_0_[2] = 0;
        *arg0 = var1;
    }
}
