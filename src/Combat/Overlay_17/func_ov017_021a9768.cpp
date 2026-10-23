#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "NitroSDK/OverlayId.h"
#include "Resource/Brightness.h"

struct AllocatorUnion;
struct Struct_02018300_3;
struct Struct_020d7aa0_2;
struct Struct_0202b2f0;
struct Struct_ov008_02189284;
struct Struct_ov008_0218936c;

extern "C" Struct_0202b2f0* func_0202ae18(void);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" void func_020a0cc4(unsigned int arg0);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" Struct_020d7aa0_2* func_020d7a50();
extern "C" void func_020d7aa0(Struct_020d7aa0_2* arg0);
extern "C" void func_020a1ef0(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_020a1940(unsigned int arg0);
extern "C" void func_ov008_02188f5c(void* arg0, int arg1, int arg2);
extern "C" void func_ov008_02189284(Struct_ov008_02189284* arg0, SafeAllocator* arg1);
extern "C" unsigned char func_ov008_0218936c(Struct_ov008_0218936c* arg0, unsigned int arg1);
extern "C" int func_0202c578(Struct_0202b2f0* arg0, int arg1);
extern "C" void func_ov008_0218b240(void* arg0);
extern "C" void func_ov008_021894b8(void* arg0);
extern "C" void func_020397c0(void* arg0);
extern char data_02114e20;

struct Struct_ov017_021a9768 {
    char unknown_0_[0x14];
    int unknown_14_;
};

struct Struct_ov017_021a9768_2 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[8 - 2];
    unsigned char unknown_8_;
    char unknown_9_[0xc - 9];
    SafeAllocator unknown_c_;
    Struct_ov017_021a9768* unknown_20_;
    signed char unknown_24_;
    char unknown_25_[0x54 - 0x25];
    int unknown_54_;
};

extern "C" void func_ov017_021a9714(Struct_ov017_021a9768_2* arg0);

// USA: func_ov017_021a9768
extern "C" ARM void func_ov017_021a9768(Struct_ov017_021a9768_2* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    GameObject* var2 = var0->GetUnknownGameObject();
    Struct_0202b2f0* var3 = func_0202ae18();
    func_020397cc((Struct_02018300_3*)var2, 1);
    SetFlags04((GameResources*)var1, 0xc0);
    if (arg0->unknown_8_ == 0) {
#if defined(jpn)
        func_020a0cc4(0x1c704);
        void* var4 = func_02012d88((AllocatorUnion*)&data_02114e20, 0x1c704);
#else
        func_020a0cc4(0x1c70c);
        void* var4 = func_02012d88((AllocatorUnion*)&data_02114e20, 0x1c70c);
#endif
        if (var4 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        func_020d7aa0(func_020d7a50());
#if defined(jpn)
        arg0->unknown_c_.CreateTypeA(var4, 0x1c704);
#else
        arg0->unknown_c_.CreateTypeA(var4, 0x1c70c);
#endif
        arg0->unknown_c_.Reset();
        func_020a1ef0(1);
        func_020a1940(OVERLAY_ID(8));
#if defined(jpn)
        arg0->unknown_20_ = (Struct_ov017_021a9768*)arg0->unknown_c_.Allocate(0xec4);
#else
        arg0->unknown_20_ = (Struct_ov017_021a9768*)arg0->unknown_c_.Allocate(0xecc);
#endif
        if (arg0->unknown_54_ == 0) {
            func_ov008_02188f5c(arg0->unknown_20_, arg0->unknown_24_, 0);
        } else {
            func_ov008_02188f5c(arg0->unknown_20_, -1, arg0->unknown_54_);
        }
        func_ov008_02189284((Struct_ov008_02189284*)arg0->unknown_20_, &arg0->unknown_c_);
        arg0->unknown_8_++;
        return;
    }
    if (arg0->unknown_8_ == 1) {
        if (func_ov008_0218936c((Struct_ov008_0218936c*)arg0->unknown_20_, var0->GetTickCount())) {
            arg0->unknown_8_++;
        }
        if (func_0202c578(var3, 0)) {
            func_ov008_0218b240(arg0->unknown_20_);
        }
        int var5 = 0;
        if (arg0->unknown_24_ >= 0 && arg0->unknown_24_ <= 3) {
            var5 = 1;
        }
        if (!var5) {
            return;
        }
        if (var0->GetGameObjectByIndex(arg0->unknown_24_) != NULL && !func_0202c578(var3, arg0->unknown_24_)) {
            return;
        }
        func_ov008_0218b240(arg0->unknown_20_);
        return;
    }
    if (arg0->unknown_8_ == 2) {
        func_ov008_021894b8(arg0->unknown_20_);
        arg0->unknown_8_++;
        return;
    }
    if (arg0->unknown_8_ != 3) {
        return;
    }
    func_020397c0(GameState::GetInstance()->GetUnknownGameObject());
    *(volatile unsigned int*)0x4000000 = (arg0->unknown_20_->unknown_14_ << 8) | (*(volatile unsigned int*)0x4000000 & ~0x1f00);
    arg0->unknown_20_ = NULL;
    func_020a1f4c(1);
    func_ov017_021a9714(arg0);
    func_020a0c0c();
    ClearFlags04((GameResources*)var1, 0x80);
    arg0->unknown_1_ = 1;
}
