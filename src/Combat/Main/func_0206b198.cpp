#include <globaldefs.h>
#if defined(jpn)
#include "Resource/MessageSystem.h"
extern "C" int func_02069430(void*, unsigned short);
extern "C" void func_02041bbc(Struct_0204166c*);

// JPN: func_0206cb14
extern "C" ARM void func_0206cb14(void* arg0, int arg1, unsigned short arg2) {
    Struct_02021b84* var0 = static_cast<Struct_02021b84*>(arg0);
    if (arg2 >= 0x80) return;
    if (func_02069430(var0, arg2)) return;
    Struct_0204166c* var1 = &var0->unknown_9b8_[arg2];
    if (var1->unknown_8_ < 0) return;
    if (var0->unknown_17b8_[arg2] == 0) return;
    if (arg1 != var1->unknown_1a_) return;
    int var2 = var0->unknown_17b8_[arg2] - 1;
    var0->unknown_17b8_[arg2] = var2;
    if ((var2 & 0xff) != 0) return;
    func_02041bbc(var1);
    var0->unknown_9b4_ = (var0->unknown_9b4_ - 1) & 0x7f;
}
#else

struct Struct_0204166c;
extern "C" void func_020416c0(struct Struct_0204166c* arg0);

extern "C" ARM bool func_02044494(void* arg0, void* arg1);

struct Struct_0206b198 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[0x1c - 0xc];
};

struct Struct_0204500c_4 {
    char unknown_0_[0x9b4];
    int unknown_9b4_;
    Struct_0206b198 unknown_9b8_[0x80];
    unsigned char unknown_17b8_[0x80];
};

// USA: func_0206b198
extern "C" ARM void func_0206b198(struct Struct_0204500c_4* arg0, unsigned short arg1) {
    if (arg1 >= 0x80) return;
    if (func_02044494(arg0, &arg1)) return;
    struct Struct_0206b198* var0 = &arg0->unknown_9b8_[arg1];
    if (var0->unknown_8_ < 0) return;
    if (arg0->unknown_17b8_[arg1] == 0) return;
    int var1 = arg0->unknown_17b8_[arg1] - 1;
    arg0->unknown_17b8_[arg1] = var1;
    if ((var1 & 0xff) != 0) return;
    func_020416c0((struct Struct_0204166c*)var0);
    arg0->unknown_9b4_ = (arg0->unknown_9b4_ - 1) & 0x7f;
}

#endif
