#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_ov000_021830b4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov000_021675a0 {
#if defined(jpn)
    char unknown_0_[0x800];
#else
    char unknown1_0_[0x284];
    char* unknown_284_;
    char unknown_288_[0xc00 - 0x288];
#endif
    char unknown_c00_[0x230];
};

struct Struct_ov000_021675a0_2 {
#if defined(jpn)
    char unknown_0_[0x218];
    char* unknown_218_;
    char unknown_21c_[0x394 - 0x21c];
#else
    char unknown1_0_[0x18];
#endif
    struct Struct_ov000_021675a0 unknown_18_;
};

extern "C" int func_ov000_0215e9fc(char* arg0, short* arg1, int arg2, int arg3);
extern "C" int func_ov000_0215fc60(char* arg0);
extern "C" void func_02049b20(unsigned char* arg0, int* arg1);
extern "C" void func_02049bac(unsigned char* arg0, int* arg1);
extern "C" void func_ov000_0216f708(void* arg0, int arg1);
extern "C" void func_ov000_0216f710(void* arg0, int arg1);

extern int data_ov000_02183158[][4];
extern struct Struct_ov000_021830b4 data_ov000_021830e4;
extern struct Struct_ov000_021830b4 data_ov000_021830b4;

// USA: func_ov000_021675a0
extern "C" ARM void func_ov000_021675a0(struct Struct_ov000_021675a0_2* arg0) {
    char* var0;
    char* var1;
    int var2;
    int var3;
    int var4;
    int var5;
    GameState* var6 = GameState::GetInstance();
    GetGameResources();
    short var7[4];
#if defined(jpn)
    var0 = arg0->unknown_218_;
#else
    var0 = arg0->unknown_18_.unknown_284_;
#endif
    var1 = arg0->unknown_18_.unknown_c00_;
    var2 = func_ov000_0215e9fc(var0, var7, 4, 0);
    if (func_ov000_0215fc60(var0)) var2 = 1;

    var5 = (var2 - 1) * 0x1800;
    var3 = var5 / 2;
    for (var4 = 0; var4 < var2; var4++) {
        GameObject* var8 = var6->GetCombatantByIndex(var7[var4]);
        if (var8 != NULL) {
            struct Struct_ov000_021830b4 var9 = data_ov000_021830e4;
            struct Struct_ov000_021830b4 var10 = data_ov000_021830b4;
            var9.unknown_0_ = var3;
            var10.unknown_4_ = data_ov000_02183158[var2 - 1][var4];
            func_02049b20((unsigned char*)var8, (int*)&var9);
            func_02049bac((unsigned char*)var8, (int*)&var10);
        }
        var3 -= 0x1800;
    }
    func_ov000_0216f708(var1, var5 + 0x1000);
    func_ov000_0216f710(var1, 0x1800);
}
