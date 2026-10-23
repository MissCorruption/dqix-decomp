#include "Resource/ActionDataTables.h"
#include <globaldefs.h>

struct Struct_02108760;
struct Struct_ov000_0215440c_2;

struct Struct_ov025_021eb6fc {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[0xc];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 4;
    unsigned int unknown_1a_0_ : 16;
};

struct Struct_ov025_021e9778_9 {
    char unknown_0_[0x1c4];
    unsigned int unknown_1c4_;
};

extern "C" void* func_ov000_02160130(void);
extern "C" void* func_ov000_02160f20(void* arg0);
extern "C" Struct_ov025_021eb6fc* func_02079e2c(char* arg0, int arg1);
extern "C" int func_ov000_02163690(int arg0);
extern "C" unsigned char* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;

// USA: func_ov025_021eb6fc
extern "C" ARM void func_ov025_021eb6fc(Struct_ov025_021e9778_9* arg0, int arg1) {
    if ((arg0->unknown_1c4_ & 8) && arg1 == 0) {
        return;
    }
    short* var0 = (short*)func_ov000_02160f20(func_ov000_02160130());
    Struct_ov025_021eb6fc* var1 = func_02079e2c((char*)func_020797dc(), *var0);
    if (func_ov000_02163690(*(unsigned short*)var0)) {
        arg1 = 1;
    } else if (var1 != 0 && var1->unknown_9_0_ == 1 && var1->unknown_18_5_ == 1 && var1->unknown_19_4_ != 2) {
        arg1 = 1;
    }
    if (arg1 != 0) {
        unsigned char* var2 = func_ov000_02160094((Struct_ov000_0215440c_2*)var0, 0);
        if (var2 != 0) {
            int var3 = *(unsigned short*)(var2 + 0x20);
            int var4;
            if (var3 >= 0 && var3 <= 3) {
                var4 = 1;
            } else {
                var4 = 0;
            }
            if (var4) {
                func_0205eaa0(&data_02108760, 7, 0);
            } else {
                func_0205eaa0(&data_02108760, 8, 0);
            }
        }
    }
    arg0->unknown_1c4_ |= 8;
}
