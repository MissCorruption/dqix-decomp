#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov017_021c17fc_189632 = 0x2d0fc, Enum_ov017_021c17fc_28 = 0x14, Enum_ov017_021c17fc_5308 = 0x14f8, Enum_ov017_021c17fc_5312 = 0x14fc };
#else
enum { Enum_ov017_021c17fc_189632 = 0x2e4c0, Enum_ov017_021c17fc_28 = 0x1c, Enum_ov017_021c17fc_5308 = 0x14bc, Enum_ov017_021c17fc_5312 = 0x14c0 };
#endif

struct AllocatorUnion;
struct Struct_02018300_3;

extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_020a0cc4(unsigned int arg0);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020a1940(unsigned int arg0);
extern "C" void func_020a1df8(int arg0);
extern "C" void func_020a1ef0(int arg0);
extern "C" void func_ov012_021843d4(void* arg0);
extern "C" void func_ov012_02184884(void* arg0, SafeAllocator* arg1);
extern "C" int func_ov012_02184acc(void* arg0, unsigned int arg1);
extern "C" void func_ov012_02185af0(void* arg0);
extern "C" void func_020dc2d0(int arg0);
extern "C" void func_ov017_021a5530(char* arg0);
extern "C" void func_ov017_0218d77c(GameResources* arg0, int arg1);
extern char data_02114e20;

struct Struct_ov017_021c17fc {
    char unknown_0_[Enum_ov017_021c17fc_28];
    int unknown_1c_;
    char unknown_20_[Enum_ov017_021c17fc_5308 - Enum_ov017_021c17fc_28 - 4];
    unsigned char unknown_14bc_;
};

struct Struct_ov017_021c17fc_2 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[8 - 2];
    SafeAllocator unknown_8_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    char unknown_1e_[0x20 - 0x1e];
    Struct_ov017_021c17fc* unknown_20_;
};

extern "C" void func_ov017_021c1a24(Struct_ov017_021c17fc_2* arg0);

// USA: func_ov017_021c17fc
extern "C" ARM void func_ov017_021c17fc(Struct_ov017_021c17fc_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    GameObject* var2 = var0->GetUnknownGameObject();
    func_020397cc((Struct_02018300_3*)var2, 1);
    SetFlags04(var1, 0xc0);
    unsigned char* var3 = (unsigned char*)func_020100f8((char*)var0);
    func_020a28a0(var3, 3);
    if (arg0->unknown_1c_ == 0) {
        func_020a0cc4(Enum_ov017_021c17fc_189632);
        void* var4 = func_02012d88((AllocatorUnion*)&data_02114e20, Enum_ov017_021c17fc_189632);
        if (var4 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        arg0->unknown_8_.CreateTypeA(var4, Enum_ov017_021c17fc_189632);
        arg0->unknown_8_.Reset();
#if !defined(jpn)
        if (arg0->unknown_1d_) {
            func_020a1df8(3);
        }
#endif
        func_020a1940(OVERLAY_ID(12));
        func_020a1ef0(1);
        arg0->unknown_20_ = (Struct_ov017_021c17fc*)arg0->unknown_8_.Allocate(Enum_ov017_021c17fc_5312);
        func_ov012_021843d4(arg0->unknown_20_);
        func_ov012_02184884(arg0->unknown_20_, &arg0->unknown_8_);
        arg0->unknown_1c_++;
        return;
    }
    if (arg0->unknown_1c_ == 1) {
        if (func_ov012_02184acc(arg0->unknown_20_, var0->GetTickCount())) {
            arg0->unknown_1c_++;
        }
        return;
    }
    if (arg0->unknown_1c_ == 2) {
        func_ov012_02185af0(arg0->unknown_20_);
        arg0->unknown_1c_++;
        return;
    }
    if (arg0->unknown_1c_ != 3) {
        return;
    }
    unsigned char var5 = arg0->unknown_20_->unknown_14bc_;
    *(volatile unsigned int*)0x4000000 = (arg0->unknown_20_->unknown_1c_ << 8) | (*(volatile unsigned int*)0x4000000 & ~0x1f00);
    func_ov017_021c1a24(arg0);
    func_020dc2d0(0);
    if (arg0->unknown_1d_) {
        if (var5) {
            func_020397c0(var2);
            func_020a28b0(var3, 3);
            ClearFlags04(var1, 0xc0);
        } else {
            func_ov017_021a5530((char*)var1);
        }
    } else {
        func_ov017_0218d77c(var1, 1);
    }
    func_020a0c0c();
    arg0->unknown_1_ = 1;
}
