#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/OverlayId.h"

struct AllocatorUnion;
struct Struct_020979c0;

extern "C" void func_020a0cc4(unsigned int arg0);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_020979c0(Struct_020979c0* arg0, unsigned char arg1);
extern "C" void func_020a1940(unsigned int arg0);
extern "C" void func_020a1ef0(int arg0);
extern "C" void func_020a1f4c(int arg0);
extern "C" void func_ov014_02186a70(void* arg0);
extern "C" void func_ov014_021868b8(void* arg0, SafeAllocator* arg1);
extern "C" int func_ov014_02186bc8(void* arg0, unsigned int arg1);
extern "C" void func_ov014_02186b30(void* arg0);
extern "C" int func_02097a04(void* arg0);
extern "C" void func_02097b34(void* arg0);
extern char data_02114e20;

struct Struct_ov017_021c03a4 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[8 - 2];
    SafeAllocator unknown_8_;
    void* unknown_1c_;
    void* unknown_20_;
    unsigned char unknown_24_;
};

extern "C" void func_ov017_021c0364(Struct_ov017_021c03a4* arg0);

// USA: func_ov017_021c03a4
extern "C" ARM void func_ov017_021c03a4(Struct_ov017_021c03a4* arg0) {
    if (arg0->unknown_24_ == 0) {
        *(unsigned short*)0x4000304 |= 0x8000;
        func_020a0cc4(0x3f000);
        void* var0 = func_02012d88((AllocatorUnion*)&data_02114e20, 0x3f000);
        if (var0 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        arg0->unknown_8_.CreateTypeA(var0, 0x3f000);
        arg0->unknown_8_.Reset();
        arg0->unknown_1c_ = arg0->unknown_8_.Allocate(0x20);
        arg0->unknown_20_ = arg0->unknown_8_.Allocate(0x194);
        if (arg0->unknown_1c_ == NULL || arg0->unknown_20_ == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        func_020979c0((Struct_020979c0*)arg0->unknown_1c_, 1);
        func_020a1940(OVERLAY_ID(14));
        func_020a1ef0(1);
        func_ov014_02186a70(arg0->unknown_20_);
        func_ov014_021868b8(arg0->unknown_20_, &arg0->unknown_8_);
        arg0->unknown_24_++;
        return;
    }
    if (arg0->unknown_24_ == 1) {
        if (func_02097a04(arg0->unknown_1c_)) {
            arg0->unknown_24_++;
        }
        return;
    }
    if (arg0->unknown_24_ == 2) {
        if (func_ov014_02186bc8(arg0->unknown_20_, GameState::GetInstance()->GetTickCount())) {
            arg0->unknown_24_++;
        }
        return;
    }
    if (arg0->unknown_24_ != 3) {
        return;
    }
    func_ov014_02186b30(arg0->unknown_20_);
    func_02097b34(arg0->unknown_1c_);
    func_ov017_021c0364(arg0);
    func_020a0c0c();
    func_020a1f4c(1);
    arg0->unknown_1_ = 1;
}
