#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "World/ZoneChest.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_ov001_021561e0_4 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[0x44];
    unsigned short unknown_50_;
    char unknown_52_[RG(0x2a, 0x26)];
    SafeAllocator unknown_7c_;
    char unknown_90_[0x6c];
    unsigned char unknown_fc_;
    char unknown_fd_[6];
    unsigned char unknown_103_;
    char unknown_104_[2];
    unsigned char unknown_106_;
    char unknown_107_[0x13];
    unsigned short unknown_11a_;
    char unknown_11c_[8];
    SafeAllocator unknown_124_;
    SafeAllocator* unknown_138_;
    char unknown_13c_[0x20];
    int unknown_15c_;
    void* unknown_160_;
};
struct Struct_ov001_021561e0 { char unknown_0_[RG(0x5cac, 0x5a4c)]; unsigned char unknown_5cac_; };
struct Struct_ov001_021561e0_2 { Object3D unknown_0_; char unknown_ac_[RG(0xe0, 0xd4)]; unsigned int unknown_18c_; };
struct Struct_ov001_021561e0_3 { char unknown_0_[0x8c]; unsigned char unknown_8c_[1]; };
struct Struct_020fdd44;
struct Struct_02018300_2;
extern "C" int func_ov001_02153994();
extern "C" int* func_0202ae18();
extern "C" void func_ov001_0215aac8();
extern "C" void func_ov027_021d8c20(void*);
extern "C" void func_ov001_0215aaa8(int, int);
extern "C" void func_ov001_02154974(void*);
extern "C" void func_02012da4(AllocatorUnion*, void*);
extern "C" void func_ov001_0215aa5c();
extern "C" void* func_02012fe4();
extern "C" void* func_0201e838(unsigned char*, unsigned int);
extern "C" Struct_020fdd44* func_02027ca4();
extern "C" Struct_02018300_2* func_02028bd0(Struct_020fdd44*, int);
extern "C" void func_02028c64(Struct_02018300_2*, int);
extern "C" Struct_ov001_021561e0_3* func_0205ec34();
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" int func_0202b7d8(int*);
extern "C" int func_0202c508(void*);
extern "C" void func_ov017_021d0490(int);
extern AllocatorUnion data_02114e20;

// USA: func_ov001_021561e0
extern "C" ARM int func_ov001_021561e0(Struct_ov001_021561e0_4* arg0) {
    if (func_ov001_02153994() != 1) return arg0->unknown_a_;
    arg0->unknown_106_ = 1;
    if (!func_02094b4c(func_02094a00())) return 11;
    GameResources* var0 = GetGameResources();
    GameState* var1 = GameState::GetInstance();
    int* var2 = func_0202ae18();
    if (arg0->unknown_15c_) ((Struct_ov001_021561e0*)var1)->unknown_5cac_ = 0;
    func_ov001_0215aac8();
    if (arg0->unknown_160_) {
        func_ov027_021d8c20(arg0->unknown_160_);
        arg0->unknown_160_ = 0;
    }
    if (arg0->unknown_50_ & 4) func_ov001_0215aaa8(1, 0);
    func_ov001_02154974(arg0);
    if ((arg0->unknown_50_ & 2) || (arg0->unknown_50_ & 8)) {
        SignedAllocatorHeader* var3 = arg0->unknown_124_.GetSignedAllocator();
        if (var3) {
            arg0->unknown_124_.Destroy();
            arg0->unknown_7c_.Free(var3);
        }
        if (arg0->unknown_138_) {
            SignedAllocatorHeader* var4 = arg0->unknown_138_->GetSignedAllocator();
            if (var4) {
                arg0->unknown_138_->Destroy();
                func_02012da4(&data_02114e20, var4);
                arg0->unknown_138_ = 0;
            }
        }
    }
    if (!TestFlags00(var0, 0x1000) || !arg0->unknown_11a_) {
        SignedAllocatorHeader* var5 = arg0->unknown_7c_.GetSignedAllocator();
        if (var5) {
            arg0->unknown_7c_.Destroy();
            func_02012da4(&data_02114e20, var5);
        }
        func_ov001_0215aa5c();
    }
    Zone3D* var6 = (Zone3D*)func_02012fe4();
    Struct_020134e0::Struct_02018300* var7 = (Struct_020134e0::Struct_02018300*)func_0201e838((unsigned char*)&var6->substruct_6c_, 2);
    while (var7) {
        if (var7->unknown_2c_.unknown1_0_.unknown_2_4_ & 0x200) {
            int var8 = func_02018bc4(var6, var7);
            Struct_02018300_2* var9 = func_02028bd0(func_02027ca4(), var6->currentZoneID_);
            if (var9) func_02028c64(var9, var8);
            var7->unknown_2c_.unknown1_0_.unknown_2_4_ &= ~0x200;
        }
        var7 = var7->unknown_70_;
    }
    if (arg0->unknown_8_ == 0x730a) {
        Struct_ov001_021561e0_3* var10 = func_0205ec34();
        func_0206df6c(var10, var10->unknown_8c_, 0x1142, 0);
    }
    for (int var11 = 0; var11 < 4; ++var11) {
        Struct_ov001_021561e0_2* var12 = (Struct_ov001_021561e0_2*)func_0200ff1c(var1, var11);
        if (var12) {
            var12->unknown_0_.DisableFlag(0x800000);
            var12->unknown_18c_ &= ~2;
        }
    }
    if (!func_0202b7d8(var2) || func_0202c508(var2)) return 10;
    func_ov017_021d0490(0);
    arg0->unknown_fc_ = 0;
    arg0->unknown_103_ = 0;
    return 16;
}
