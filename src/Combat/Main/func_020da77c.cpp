#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern const char data_020f2889[];
extern const char data_020f28a1[];
extern const char data_020f28a6[];
extern const char data_020f28ac[];
extern const char data_020f28bb[];

extern "C" int sprintf(char*, const char*, ...);

struct Struct_020da1ac {
    int unknown_0_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
};

struct Struct_020da77c {
    int unknown_0_;
    unsigned char unknown_4_;
};

struct Struct_020da77c_2 {
    SafeAllocator* unknown_0_;
    char unknown_4_[9];
    unsigned char unknown_d_;
    unsigned char unknown_e_;
};

extern "C" void func_020dabd0(void*);
extern "C" Struct_020da1ac* func_020daa20(unsigned char*);
extern "C" void func_020da22c(Struct_020da1ac*);

// USA: func_020da77c
extern "C" ARM int func_020da77c(Struct_020da77c_2* arg0, unsigned char arg1, Struct_020da77c* arg2) {
    BackgroundLoader* var0;
    Struct_020da1ac* var1;
    SafeAllocator* var2;
    int var3;
    char var4[0x80];
    var0 = BackgroundLoader::GetInstance();
    if (!var0) return 0;
    if (arg0->unknown_d_ & 1) return 0;
    if (arg0->unknown_e_ != 0) {
        func_020dabd0(arg0);
    }
    var2 = arg0->unknown_0_;
    if (!var2) return 0;
    var2->Reset();
    arg0->unknown_d_ = 0;
    arg0->unknown_e_ = arg1;
    var1 = func_020daa20((unsigned char*)arg0);
    if (!var1) return 0;
    var1->unknown_0_ = arg2->unknown_0_;
    var1->unknown_4_ = arg2->unknown_4_;
    var3 = -1;
    switch (arg0->unknown_e_) {
    case 1:
        sprintf(var4, data_020f2889, data_020f28a1);
        var3 = var0->QueueLoadGP1(var4, var2);
        break;
    case 2:
        sprintf(var4, data_020f2889, data_020f28a6);
        var3 = var0->QueueLoadGP1(var4, var2);
        break;
    case 3:
        sprintf(var4, data_020f28ac, data_020f28bb);
        var3 = var0->QueueLoadFile(var4, var2);
        break;
    }
    if (var3 == -1) {
        func_020da22c(var1);
        return 0;
    }
    var1->unknown_8_ = var3;
    arg0->unknown_d_ |= 1;
    return 1;
}
