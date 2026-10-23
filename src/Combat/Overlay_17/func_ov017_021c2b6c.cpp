#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021c2b6c_434 = 0x1a6 };
#else
enum { Enum_ov017_021c2b6c_434 = 0x1b2 };
#endif

#include "Memory/SafeAllocator.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02114e20;
struct Struct_02015ef4_5;

extern "C" void* func_02057924(void);
extern "C" void func_020a0cc4(unsigned int);
extern "C" int func_02057e6c(void* arg0, int arg1, SafeAllocator* arg2, int arg3, int arg4, Struct_02015ef4_5* arg5);
extern "C" unsigned int func_02012dd0(Struct_02114e20*);
extern "C" void* func_02012d88(AllocatorUnion*, unsigned int);
extern "C" void func_0207dfc8(Struct_02015ef4_5*, Struct_02015ef4_5*);
extern "C" void func_02057fb4(void*, int, void*);
extern "C" void func_ov017_021d24a8(int);

extern AllocatorUnion data_02114e20;
extern char data_ov017_021d7f6c[];

struct Struct_ov017_021c2b6c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xf];
    unsigned char unknown_10_;
    unsigned char unknown_11_0_ : 1;
    unsigned char unknown_11_1_ : 1;
    unsigned char unknown_11_2_ : 1;
    unsigned char unknown_11_3_ : 1;
    unsigned char unknown_11_4_ : 1;
    unsigned char unknown_11_5_ : 1;
    unsigned char unknown_11_6_ : 1;
    unsigned char unknown_11_7_ : 1;
    unsigned short unknown_12_;
    short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_;
    short unknown_1e_;
    int unknown_20_[3];
    Vector3fix unknown_2c_;
    int unknown_38_[3];
    Vector3fix unknown_44_;
};

struct Struct_ov017_021c2b6c {
    unsigned char unknown_0_[8];
    SafeAllocator unknown_8_;
    unsigned char unknown_1c_[0x70];
    unsigned char unknown_8c_;
    unsigned char unknown_8d_;
    unsigned char unknown_8e_[2];
    int unknown_90_;
    unsigned char unknown_94_;
    unsigned char unknown_95_;
    unsigned char unknown_96_;
};

// USA: func_ov017_021c2b6c
extern "C" ARM void func_ov017_021c2b6c(Struct_ov017_021c2b6c* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    void* var2 = func_02057924();
    Struct_ov017_021c2b6c_2 var3[4];
    unsigned int var4;
    if (arg0->unknown_8d_ == 0) {
        if (func_02012dd0((Struct_02114e20*)&data_02114e20) < 0x8000) {
            func_020a0cc4(0x8000);
            arg0->unknown_96_ = 1;
        }
        void* var5 = func_02012d88(&data_02114e20, 0x8000);
        arg0->unknown_8_.CreateTypeA(var5, 0x8000);
        arg0->unknown_8_.Reset();
        char* var6 = var1->unknown_2cc_;
        func_0207dfc8((Struct_02015ef4_5*)(var6 + 0xc40), (Struct_02015ef4_5*)arg0->unknown_1c_);
        var4 = 0;
        void* var7 = LoadFileIntoNewAllocation(data_ov017_021d7f6c, arg0->unknown_8_, &var4);
        if (var7 == 0) {
            arg0->unknown_8c_ = 3;
            return;
        }
        func_02057e6c(var2, 0x11, &arg0->unknown_8_, (int)var7, var4, (Struct_02015ef4_5*)arg0->unknown_1c_);
        arg0->unknown_8d_++;
    } else if (arg0->unknown_8d_ == 1) {
        GameObject* var8 = var0->GetPartyMemberByIndex(arg0->unknown_95_);
        if (var8 == 0) {
            arg0->unknown_8c_ = 3;
            return;
        }
        for (int var9 = 0; var9 < 4; var9++) {
            GameObject* var10 = var0->GetPartyMemberByIndex(var9);
            if (var10 == 0) continue;
            if (var10->obj3D_.GetInheritedAlpha() == 0) continue;
            if (var8->obj3D_.GetField06() != var10->obj3D_.GetField06()) continue;
            if (*(unsigned short*)((char*)var10 + Enum_ov017_021c2b6c_434) != 0) continue;
            if (**(unsigned int**)((char*)var10 + 0x130) & 1) continue;
            var3[var9].unknown_0_ = 0;
            var3[var9].unknown_10_ = 1;
            var3[var9].unknown_12_ = 0;
            var3[var9].unknown_14_ = -1;
            var3[var9].unknown_16_ = -1;
            var3[var9].unknown_18_ = -1;
            var3[var9].unknown_1a_ = -1;
            var3[var9].unknown_1c_ = -0x1000;
            var3[var9].unknown_20_[0] = 0;
            var3[var9].unknown_20_[1] = 0;
            var3[var9].unknown_20_[2] = 0;
            var3[var9].unknown_2c_.x = 0;
            var3[var9].unknown_2c_.y = 0;
            var3[var9].unknown_2c_.z = 0;
            var3[var9].unknown_38_[0] = 0;
            var3[var9].unknown_38_[1] = 0;
            var3[var9].unknown_38_[2] = 0;
            var3[var9].unknown_44_.x = 0x1000;
            var3[var9].unknown_44_.y = 0x1000;
            var3[var9].unknown_44_.z = 0x1000;
            Struct_ov017_021c2b6c_2* var11 = &var3[var9];
            var11->unknown_11_0_ = 0;
            var11->unknown_11_1_ = 0;
            var11->unknown_11_2_ = 1;
            var11->unknown_11_3_ = 0;
            var11->unknown_11_4_ = 0;
            var11->unknown_11_5_ = 0;
            var11->unknown_11_6_ = 0;
            var11->unknown_11_7_ = 0;
            var11->unknown_2c_ = var10->obj3D_.position_;
            var11->unknown_44_ = var10->obj3D_.GetScale();
            func_02057fb4(var2, 0x11, var11);
        }
        arg0->unknown_90_ = 1;
        func_ov017_021d24a8(arg0->unknown_95_);
    }
}
