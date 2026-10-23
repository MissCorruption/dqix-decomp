#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_0206e424 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_0_ : 4;
    unsigned int unknown_8_4_ : 28;
    unsigned int unknown_c_0_ : 12;
    unsigned int unknown_d_4_ : 11;
    unsigned int unknown_e_7_ : 9;
    unsigned int unknown_10_[4];
};
struct Struct_0206e424_2 {
    unsigned char unknown_0_[0x194];
    Struct_0206e424 unknown_194_[9];
};
struct Struct_0206e424_3 {
    unsigned char unknown_0_[0x8c];
    unsigned char unknown_8c_[1];
};
struct Struct_020e87b4 {
    signed char unknown_0_[9];
};
struct Struct_0206e424_4 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_0_ : 18;
    unsigned int unknown_16_2_ : 11;
    unsigned int unknown_17_5_ : 3;
    unsigned char unknown_18_[0xb0 - 0x18];
};
extern Struct_020e87b4 data_020e87b4;
extern "C" int func_02053c6c(unsigned char*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_020ac4c0(void*);
extern "C" void func_020a04c8(Struct_0206e424_4*, unsigned int);
extern "C" void func_020ac494(void*);

static inline int inline_0206e424(Struct_0206e424* arg0) {
    return arg0->unknown_8_0_ <= 7;
}

// USA: func_0206e424
extern "C" ARM void func_0206e424(Struct_0206e424_3* arg0, int arg1) {
    int var0;
    if (arg1 >= 0 && arg1 <= 3) var0 = 1;
    else var0 = 0;
    if (!var0) return;
    GameObject* var1 = GameState::GetInstance()->GetPartyMemberByIndex(arg1);
    if (!var1) return;
    Struct_0206e424_2* var2 = (Struct_0206e424_2*)func_02053c6c((unsigned char*)var1);
    if (!var2) return;
    Struct_020e87b4 var3 = data_020e87b4;
    Struct_0206e424* var4 = var2->unknown_194_;
    unsigned char var5 = 0;
    unsigned char var6 = 0;
    while (var3.unknown_0_[var6] >= 0) {
        Struct_0206e424* var7 = &var4[var3.unknown_0_[var6]];
        if (inline_0206e424(var7)) {
            unsigned short var8 = var7->unknown_d_4_;
            if (var8) {
                if (!func_0206dfb0((int)arg0, arg0->unknown_8c_, var8 + 0xc76)) {
                    func_0206df6c(arg0, arg0->unknown_8c_, var8 + 0xc76, 1);
                    var5++;
                }
            }
        }
        var6++;
    }
    Struct_0206e424_4 var9;
    func_020ac4c0(&var9);
    func_020a04c8(&var9, var5);
    func_020ac494(&var9);
}
