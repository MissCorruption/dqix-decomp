#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"

#include "Resource/GameResources.h"

struct Struct_ov017_021b1e24;

extern "C" void func_020a1940(unsigned int arg0);
extern "C" void func_ov031_02243518(void* arg0, int arg1);
extern "C" void func_ov031_02243690(Struct_ov017_021b1e24* arg0);
extern "C" void func_0205e92c(void* arg0);
extern "C" void func_0209c278(void* arg0);
extern "C" void func_0209c290(void* arg0);
extern "C" void func_0205ea20(void* arg0, int arg1);
extern char data_02108760;
extern char data_02109bf4;

struct Struct_ov017_021b1e24_2 {
    char unknown_0_[0x28];
    SafeAllocator* unknown_28_;
    char unknown_2c_[0x30 - 0x2c];
    int unknown_30_;
    char unknown_34_[0x37c - 0x34];
    int unknown_37c_;
    int unknown_380_;
};

struct Struct_ov017_021b1e24_3 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[8 - 2];
    SafeAllocator* unknown_8_;
    SafeAllocator unknown_c_;
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    char unknown_22_[0x24 - 0x22];
    Struct_ov017_021b1e24_2* unknown_24_;
    char unknown_28_[0x32 - 0x28];
    unsigned char unknown_32_;
    char unknown_33_;
    int unknown_34_;
    int unknown_38_;
};

static inline void inline_ov017_021b1e24(Struct_ov017_021b1e24_2* arg0, int arg1, int arg2) {
    arg0->unknown_37c_ = arg1;
    arg0->unknown_380_ = arg2;
}

// USA: func_ov017_021b1e24
extern "C" ARM void func_ov017_021b1e24(Struct_ov017_021b1e24_3* arg0) {
    GameState::GetInstance();
    GetGameResources();
    if (arg0->unknown_20_ == 0) {
        if (arg0->unknown_8_ == NULL || arg0->unknown_32_ != 0) {
            arg0->unknown_1_ = 1;
            return;
        }
        arg0->unknown_24_ = (Struct_ov017_021b1e24_2*)arg0->unknown_8_->Allocate(0xa3c);
        if (arg0->unknown_24_ == NULL) {
            arg0->unknown_1_ = 1;
            return;
        }
        unsigned int var0 = arg0->unknown_8_->GetMaxPossibleAllocation();
        arg0->unknown_c_.CreateTypeA(arg0->unknown_8_->Allocate(var0), var0);
        arg0->unknown_c_.Reset();
        func_0205e92c(&data_02108760);
        func_0209c278(&data_02109bf4);
        func_020a1940(OVERLAY_ID(31));
        func_ov031_02243518(arg0->unknown_24_, arg0->unknown_21_);
        arg0->unknown_24_->unknown_28_ = &arg0->unknown_c_;
        inline_ov017_021b1e24(arg0->unknown_24_, arg0->unknown_34_, arg0->unknown_38_);
        func_ov031_02243690((Struct_ov017_021b1e24*)arg0->unknown_24_);
        arg0->unknown_20_++;
        return;
    }
    if (arg0->unknown_20_ != 1) {
        return;
    }
    func_ov031_02243690((Struct_ov017_021b1e24*)arg0->unknown_24_);
    if (arg0->unknown_24_->unknown_30_ == 0) {
        return;
    }
    func_020a1940(OVERLAY_ID(32));
    func_0209c278(&data_02109bf4);
    func_0209c290(&data_02109bf4);
    func_0205e92c(&data_02108760);
    func_0205ea20(&data_02108760, 100);
    SignedAllocatorHeader* var1 = arg0->unknown_c_.GetSignedAllocator();
    if (var1 != NULL) {
        arg0->unknown_c_.Destroy();
        arg0->unknown_8_->Free(var1);
    }
    arg0->unknown_1_ = 1;
}
