#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/FormationPosition.h"

extern "C" int func_ov000_02153e40(void* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_020493a4(unsigned char* arg0);
extern "C" void func_02049bd4(unsigned char* arg0, int* arg1);

struct Struct_ov000_021830f0 { unsigned int unknown_0_[3]; };
extern struct Struct_ov000_021830f0 data_ov000_021830f0;

static inline Struct_02048cf0 inline_02048e2c_2(const int& arg0) {
    return func_ov000_0216f74c(const_cast<int*>(&arg0));
}

// USA: func_ov000_02168144
extern "C" ARM void func_ov000_02168144(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    short var1[12];
#if defined(jpn)
    enum { Enum_ov000_02168144_668 = 0x218 };
#else
    enum { Enum_ov000_02168144_668 = 0x29c };
#endif
    int var2 = func_ov000_02153e40(*(void**)(arg0 + Enum_ov000_02168144_668), var1, 0xc, 0);
    int var3;
    for (var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var0->GetCombatantByIndex(var1[var3]);
        if (var4 != 0) {
            Struct_02048cf0 var5 = inline_02048e2c_2(func_020493a4((unsigned char*)var4));
            struct Struct_ov000_021830f0 var6 = data_ov000_021830f0;
            var6.unknown_0_[0] = var5.unknown_0_;
            var6.unknown_0_[2] = var5.unknown_4_;
            func_02049bd4((unsigned char*)var4, (int*)&var6);
        }
    }
}
