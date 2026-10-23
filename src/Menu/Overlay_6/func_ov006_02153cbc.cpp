#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"

struct Struct_ov006_02153cbc {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};
struct Struct_ov006_02153cbc_2 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
};
struct Struct_ov006_02153cbc_3 {
    char unknown_0_[0x68];
    char unknown_68_[0x48];
};
extern "C" {
void func_ov006_02153e54(Struct_ov006_02153cbc*);
void func_ov006_02153e8c(void*, Struct_ov006_02153cbc*);
int func_ov006_02154138(void*);
bool func_020ac2d4(int, short*, Struct_ov006_02153cbc*, int);
void func_020ac104(void*, Struct_ov006_02153cbc*, int);
Struct_ov006_02153cbc_2* func_02071d60(void*, short);
bool func_020ac0b4(unsigned int*);
void func_020ac08c(unsigned int*);
int func_020ac4c0(void*);
void func_020a0228(void*, int);
int func_020ac494(void*);
}
extern "C" ARM void func_ov006_02153cbc(void* arg0, short arg1, short arg2, void* arg3)
{
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    Struct_ov006_02153cbc var0;
    func_ov006_02153e54(&var0);
    if (func_020ac2d4(0, &arg1, &var0, 1)) {
        var0.unknown_2_0_ = 1;
        var0.unknown_2_1_ = 1;
        func_020ac104(data_0211e33c, &var0, 1);
        func_ov006_02153e8c(arg0, &var0);
        if (arg3) {
            Struct_ov006_02153cbc_2* var1 = func_02071d60(arg3, arg1);
            if (var1) var1->unknown_10_ |= 0x400000;
        }
    }
    if (arg2 > 0) {
        func_ov006_02153e54(&var0);
        if (func_020ac2d4(0, &arg2, &var0, 1)) {
            var0.unknown_0_ = arg2;
            var0.unknown_2_1_ = 1;
            func_020ac104(data_0211e33c, &var0, 1);
            func_ov006_02153e8c(arg0, &var0);
            if (arg3) {
                Struct_ov006_02153cbc_2* var2 = func_02071d60(arg3, arg2);
                if (var2) var2->unknown_10_ |= 0x400000;
            }
            func_ov006_02154138(arg0);
        }
    }
    unsigned int var3 = 0;
    if (func_020ac0b4(&var3)) {
        var3++;
        if (var3 > 99999) var3 = 99999;
        func_020ac08c(&var3);
        Struct_ov006_02153cbc_3 var4;
        func_020ac4c0(&var4);
        func_020a0228(var4.unknown_68_, 1);
        func_020ac494(&var4);
    }
    BackgroundLoader::RemoveLockGlobal();
}
