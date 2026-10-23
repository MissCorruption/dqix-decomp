#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

struct Struct_ov024_021f9660 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 28;
    unsigned int unknown_b_4_ : 1;
    unsigned int unknown_b_5_ : 3;
    char unknown_c_[0xc];
    unsigned int unknown_18_0_ : 5;
    unsigned int unknown_18_5_ : 7;
    unsigned int unknown_19_4_ : 20;
    char unknown_1c_[0x10];
    unsigned int unknown_2c_0_ : 14;
    unsigned int unknown_2d_6_ : 6;
    unsigned int unknown_2e_4_ : 12;
};
struct Struct_ov024_021f9660_2 { short unknown_0_; short unknown_2_; };
struct Struct_ov024_021f9660_3 {
    char unknown_0_[6];
    unsigned char unknown_6_;
    char unknown_7_;
    GameObject* unknown_8_;
    char unknown_c_[0x20];
    unsigned char unknown_2c_;
    char unknown_2d_[7];
    unsigned char unknown_34_;
    char unknown_35_[3];
    int unknown_38_;
    int unknown_3c_;
    char unknown_40_[0x134];
    int unknown_174_;
    Struct_ov024_021f9660_2 unknown_178_[0x134];
    Struct_ov024_021f9660_2* unknown_648_;
    Struct_ov024_021f9660* unknown_64c_;
    int unknown_650_;
    unsigned char unknown_654_;
    unsigned char unknown_655_;
};
typedef void (Struct_ov024_021f9660_3::*Type_ov024_021f9660)();
struct Struct_ov024_021ffeac { Type_ov024_021f9660 unknown_0_[79]; };
extern Struct_ov024_021ffeac data_ov024_021ffeac;
extern unsigned int data_ov024_02200150;
extern Type_ov024_021f9660 data_020e6d5c;
extern "C" void* func_02053c6c(unsigned char*);
extern "C" Struct_ov024_021f9660* func_02079e2c(char*, int);
extern "C" int func_ov024_021f8874(Struct_ov024_021f9660_3*, Struct_ov024_021f9660*, GameObject*, int*);

// USA: func_ov024_021f9660
extern "C" ARM void func_ov024_021f9660(Struct_ov024_021f9660_3* arg0) {
    GameObject* var0 = arg0->unknown_8_;
    func_02053c6c((unsigned char*)var0);
    Struct_02108e10* var1 = func_020797dc();
    if (!(data_ov024_02200150 & 1)) {
        Type_ov024_021f9660 var2 = data_020e6d5c;
        data_ov024_021ffeac.unknown_0_[0] = var2;
        data_ov024_021ffeac.unknown_0_[11] = var2;
        data_ov024_021ffeac.unknown_0_[12] = var2;
        data_ov024_021ffeac.unknown_0_[29] = var2;
        data_ov024_021ffeac.unknown_0_[30] = var2;
        data_ov024_021ffeac.unknown_0_[31] = var2;
        data_ov024_021ffeac.unknown_0_[34] = var2;
        data_ov024_021ffeac.unknown_0_[35] = var2;
        data_ov024_021ffeac.unknown_0_[44] = var2;
        data_ov024_021ffeac.unknown_0_[45] = var2;
        data_ov024_021ffeac.unknown_0_[52] = var2;
        data_ov024_021ffeac.unknown_0_[57] = var2;
        data_ov024_021ffeac.unknown_0_[58] = var2;
        data_ov024_021ffeac.unknown_0_[59] = var2;
        data_ov024_021ffeac.unknown_0_[60] = var2;
        data_ov024_021ffeac.unknown_0_[65] = var2;
        data_ov024_021ffeac.unknown_0_[66] = var2;
        data_ov024_02200150 |= 1;
    }
    for (int var3 = 0; var3 < arg0->unknown_174_; ++var3) {
        Struct_ov024_021f9660* var4 = func_02079e2c((char*)var1, arg0->unknown_178_[var3].unknown_0_);
        if (var4->unknown_b_4_) continue;
        if (var4->unknown_2d_6_) continue;
        int var5;
        if (!func_ov024_021f8874(arg0, var4, var0, &var5)) continue;
        if (arg0->unknown_6_ == 4 && var5 != 0) continue;
        arg0->unknown_648_ = &arg0->unknown_178_[var3];
        arg0->unknown_64c_ = var4;
        arg0->unknown_650_ = var5;
        arg0->unknown_34_ = 0;
        arg0->unknown_2c_ = 0;
        arg0->unknown_655_ = 1;
        arg0->unknown_38_ = 0;
        arg0->unknown_3c_ = 0;
        Type_ov024_021f9660 var6 = data_020e6d5c;
        if (var4->unknown_18_5_ <= 78) var6 = data_ov024_021ffeac.unknown_0_[var4->unknown_18_5_];
        if (var6 != 0) (arg0->*var6)();
    }
}
