#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/FormationPosition.h"

struct Struct_ov000_021676a8 {
    char unknown_0_[0x8e20];
    int unknown_8e20_;
};

struct Struct_ov000_021676a8_2 {
#if defined(jpn)
    char unknown_0_[0x218];
#else
    char unknown1_0_[0x29c];
#endif
    Struct_ov000_021676a8* unknown_29c_;
};

extern "C" int func_0200fb8c(int* arg0);
extern "C" int func_ov000_0215e9fc(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" int func_020493a4(unsigned char* arg0);
extern "C" void func_02049390(unsigned char* arg0, unsigned char arg1);
extern "C" void func_02049bd4(unsigned char* arg0, int* arg1);
extern "C" void func_02049c60(unsigned char* arg0, int* arg1);

struct Struct_ov000_021830c0 { unsigned int unknown_0_[3]; };
extern unsigned char data_ov000_02183108[][4];
extern struct Struct_ov000_021830c0 data_ov000_021830fc;
extern struct Struct_ov000_021830c0 data_ov000_021830c0;

static inline Struct_02048cf0 inline_02048e2c_2(const int& arg0) {
    return func_ov000_0216f74c(const_cast<int*>(&arg0));
}

// USA: func_ov000_021676a8
extern "C" ARM void func_ov000_021676a8(Struct_ov000_021676a8_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_0200fb8c((int*)var0);
    Struct_ov000_021676a8* var1 = arg0->unknown_29c_;
    short var2[4];
    int var3 = func_ov000_0215e9fc(var1, var2, 4, 0);
    if (func_ov000_0215fc60((char*)var1) != 0) {
        var3 = 1;
    }
    int var4;
    for (var4 = 0; var4 < var3; var4++) {
        GameObject* var5 = var0->GetCombatantByIndex(var2[var4]);
        if (var5 != 0) {
            int var6 = data_ov000_02183108[var3 - 1][var4];
            if (func_020493a4((unsigned char*)var5) != 0xff && arg0->unknown_29c_->unknown_8e20_ != 0) {
                var6 = func_020493a4((unsigned char*)var5);
            }
            Struct_02048cf0 var7 = inline_02048e2c_2(var6);
            struct Struct_ov000_021830c0 var8 = data_ov000_021830fc;
            struct Struct_ov000_021830c0 var9 = data_ov000_021830c0;
            var8.unknown_0_[0] = var7.unknown_0_;
            var8.unknown_0_[2] = var7.unknown_4_;
            func_02049390((unsigned char*)var5, (unsigned char)(var6 & 0xff));
            func_02049bd4((unsigned char*)var5, (int*)&var8);
            func_02049c60((unsigned char*)var5, (int*)&var9);
        }
    }
}
