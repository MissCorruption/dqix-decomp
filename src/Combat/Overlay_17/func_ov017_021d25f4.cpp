#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae24(void);
extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_ov017_0218d4ec(void* arg0, int arg1);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d25f4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 1;
    unsigned char unknown_1_1_ : 1;
    unsigned char unknown_1_2_ : 6;
    unsigned char unknown_2_[0xe];
};

struct Struct_ov017_021d25f4_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021d25f4 unknown_4_;
};

// USA: func_ov017_021d25f4
extern "C" ARM void func_ov017_021d25f4(int arg0) {
    int var0 = ((int)GetGameResources());
    void* var1 = func_0202ae24();
    struct Struct_ov017_021d25f4_2 var2;
    var2.unknown_0_ = 0x20;
    struct Struct_ov017_021d25f4* var3 = &var2.unknown_4_;

    GameState* var4 = GameState::GetInstance();
    if (var4 == 0) return;
    GameObject* var5 = var4->GetPartyMemberByIndex(arg0);
    if (var5 == 0) return;
    int var6 = func_02053c6c((unsigned char*)var5);
    if (var6 == 0) return;

    var3->unknown_0_ = (unsigned char)arg0;
    var3->unknown_1_0_ = *(unsigned char*)((char*)var6 + 0x56c);
    int var7 = func_ov017_0218d4ec((void*)var0, arg0);
    var3->unknown_1_1_ = (var7 != 0);

    func_0205e330(var1, &var2, 0);
}
