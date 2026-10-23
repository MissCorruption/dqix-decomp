#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov017_021b2758_261 = 0x125, Enum_ov017_021b2758_268 = 0x12c };
#else
enum { Enum_ov017_021b2758_261 = 0x105, Enum_ov017_021b2758_268 = 0x10c };
#endif

extern "C" void func_020100c4(GameState* arg0, int arg1);
extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov017_0218f758(void* arg0);

struct Struct_ov011_021849bc;
extern "C" int func_ov011_021849bc(struct Struct_ov011_021849bc* arg0, int arg1);

struct Struct_ov017_021a3ef0_12;
extern "C" void func_ov017_021b2200(struct Struct_ov017_021a3ef0_12* arg0);

extern "C" void* func_02012fe4(void);
extern "C" void func_020a0c0c(void);
extern "C" void func_ov017_0219bd1c(int, int, int, int);

struct Struct_ov017_021d83f0_8 { unsigned int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d83f0_8 data_ov017_021d83f0;

struct Struct_ov017_021b2758 { unsigned char unknown_0_[0x90]; int unknown_90_; unsigned char unknown_94_[4]; int unknown_98_; };

union Struct_ov017_021b2758_2 {
    unsigned int unknown_0_;
    struct {
        unsigned int unknown_0_0_ : 1;
        unsigned int unknown_0_1_ : 1;
        unsigned int unknown_0_2_ : 1;
        unsigned int : 2;
        unsigned int unknown_0_5_ : 1;
        unsigned int : 26;
    } unknown1_0_;
};

struct Struct_ov017_021b2758_3 {
    unsigned char unknown_0_[0x38];
    Struct_ov017_021b2758_2 unknown_38_;
    unsigned char unknown_3c_[2];
    unsigned char unknown_3e_;
    unsigned char unknown_3f_[1];
    int unknown_40_;
    int unknown_44_;
    unsigned char unknown_48_;
};

// USA: func_ov017_021b2758
extern "C" ARM int func_ov017_021b2758(Struct_ov017_021b2758_3* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    func_020100c4(var0, arg0->unknown_44_);

    if (data_ov017_021d83f0.unknown_4_ != 0) {
        if (func_ov011_021849bc((struct Struct_ov011_021849bc*)data_ov017_021d83f0.unknown_4_, 1)) arg0->unknown_38_.unknown1_0_.unknown_0_0_ = 1;
        if (func_ov011_021849bc((struct Struct_ov011_021849bc*)data_ov017_021d83f0.unknown_4_, 2)) arg0->unknown_38_.unknown_0_ |= 2;
        if (func_ov011_021849bc((struct Struct_ov011_021849bc*)data_ov017_021d83f0.unknown_4_, 4)) arg0->unknown_38_.unknown_0_ |= 4;
        func_ov017_021b2200((struct Struct_ov017_021a3ef0_12*)arg0);
        func_020a0c0c();
    }

    ClearFlags00(var1, 0x10);
    if (arg0->unknown_38_.unknown1_0_.unknown_0_0_) {
        func_02012fe4();
        ClearFlags00(var1, 4);
        func_ov017_0219bd1c(1, 0, 0, 0);
        arg0->unknown_38_.unknown_0_ &= ~2;
        void* var2 = func_0200fd0c(var0);
        if (arg0->unknown_48_ != 0) ((char*)var2)[0x67] = 1;
        return 5;
    }
    if (arg0->unknown_38_.unknown1_0_.unknown_0_1_) return 6;
    if (arg0->unknown_38_.unknown1_0_.unknown_0_2_) return 7;

    var0->GetUnknownGameObject();
    int var3 = func_020100f8((char*)var0);
    unsigned char* var4 = (unsigned char*)func_02012fe4();
    if (var3 != 0) {
        func_020a28b0((unsigned char*)var3, 2);
        if (arg0->unknown_3e_ != 0) {
            func_020a28a0((unsigned char*)var3, 2);
        }
        func_020a27ac((void*)var3);
    }
    if (var4 != 0) {
        var4[Enum_ov017_021b2758_261] &= ~1;
    }

    if (!arg0->unknown_38_.unknown1_0_.unknown_0_5_) {
        ClearFlags04(var1, 0x609fe);
        SetFlags04(var1, arg0->unknown_40_);
    }

    Struct_ov017_021b2758* var5 = (Struct_ov017_021b2758*)LightingManager::GetInstance();
    int var6 = var5->unknown_90_;
    int var7 = var5->unknown_98_;
    unsigned char* var8 = var4 + Enum_ov017_021b2758_268;
    if (var6 != 0) var7 = var6;
    unsigned short var9;
    if (*(int*)(var8 + 0x304) == 1) {
        var9 = *(unsigned short*)(var8 + var7 * 2 + 0x8c);
    } else {
        var9 = *(unsigned short*)(var8 + var7 * 2 + 0x126);
    }
    func_020c5588(var9, 0x10, 0x7fff, 0, 0);
    func_ov017_0218f758(var1);
    return 4;
}
