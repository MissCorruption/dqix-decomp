#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02040774_2;

struct Struct_ov017_021917f0_2 {
    char unknown_0_[0x29c];
    unsigned int unknown_29c_0_ : 4;
    unsigned int unknown_29c_4_ : 5;
};

struct Struct_ov017_021917f0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_[3];
    short unknown_8_[3];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_[3];
    short unknown_16_[3];
};

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" Struct_ov017_021917f0_2* func_02053c6c(unsigned char* arg0);
extern "C" Struct_ov017_021917f0* func_02099f60(void);
extern "C" int func_02053eb4(void*, int);
extern "C" void func_02053ec0(unsigned char*, int);
extern "C" void func_020407b4(Struct_02040774_2* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_021917f0
extern "C" ARM void func_ov017_021917f0(int arg0, int arg1) {
#if defined(jpn)
 enum { Enum_ov017_021917f0_396 = 0x180 };
#else
 enum { Enum_ov017_021917f0_396 = 0x18c };
#endif
    GameState* var0 = GameState::GetInstance();
    Struct_ov017_021917f0_2* var1;
    GameObject* var2 = func_0200ff1c(var0, arg0);
    GameObject* var3 = var0->GetGameObjectByIndex(arg0 * 12 + 0x1c);
    if (var2 == NULL || var3 == NULL) return;
    var1 = func_02053c6c((unsigned char*)var2);
    if (var1 == NULL) return;
    Struct_ov017_021917f0* var4 = &func_02099f60()[var1->unknown_29c_4_];
    if (arg1 == 1) {
        int var5 = func_02053eb4(var2, var4->unknown_e_);
        func_02053ec0((unsigned char*)var2, var5);
        func_020407b4((Struct_02040774_2*)var3, var4->unknown_10_[0], var4->unknown_10_[1], var4->unknown_10_[2]);
        func_0203db34((unsigned char*)var3, var4->unknown_16_[0], var4->unknown_16_[1], var4->unknown_16_[2]);
        var3->obj3D_.Detach();
        var3->obj3D_.Attach(&var2->obj3D_, var5);
        if (var4->unknown_16_[0] != 0 || var4->unknown_16_[1] != 0 || var4->unknown_16_[2] != 0) {
            var3->obj3D_.SetFlag16();
        } else {
            var3->obj3D_.ClearFlag16();
        }
    } else if (arg1 == 0) {
        int var6 = func_02053eb4(var2, var4->unknown_1_);
        func_02053ec0((unsigned char*)var2, var6);
        func_020407b4((Struct_02040774_2*)var3, var4->unknown_2_[0], var4->unknown_2_[1], var4->unknown_2_[2]);
        func_0203db34((unsigned char*)var3, var4->unknown_8_[0], var4->unknown_8_[1], var4->unknown_8_[2]);
        var3->obj3D_.Detach();
        var3->obj3D_.Attach(&var2->obj3D_, var6);
        if (var4->unknown_8_[0] != 0 || var4->unknown_8_[1] != 0 || var4->unknown_8_[2] != 0) {
            var3->obj3D_.SetFlag16();
        } else {
            var3->obj3D_.ClearFlag16();
        }
    }
    unsigned int* var7 = (unsigned int*)((char*)var2 + Enum_ov017_021917f0_396);
    if (var1->unknown_29c_4_ == 6) {
        *var7 |= 0x20;
    } else {
        *var7 &= ~0x20;
    }
    if (var3->obj3D_.unknown_2_ < 0) {
        var3->obj3D_.MakeHidden();
    } else {
        var3->obj3D_.MakeVisible();
    }
}
