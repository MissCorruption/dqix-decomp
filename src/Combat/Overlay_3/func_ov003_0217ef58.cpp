#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0217ef58_5140 = 0x12a4 };
#else
enum { Enum_ov003_0217ef58_5140 = 0x1414 };
#endif
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/GameResources.h"
#include "Resource/Brightness.h"

struct Struct_02018300_3;

struct Struct_ov003_0217ef58 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[4];
    short unknown_a_;
};

struct Struct_ov003_0217ef58_2 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    int unknown_8_;
    Struct_ov003_0217ef58* unknown_c_;
    int unknown_10_;
    SafeAllocator unknown_14_;
    char unknown_28_[2];
    char unknown_2a_[0x10];
};

extern "C" void func_02074af4(void* arg0);
extern "C" void func_020a0cc4(unsigned int arg0);
extern "C" void func_020a0c0c(void);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void VectorizedMemset(void* dst, int val, unsigned int len);
extern "C" void func_020a1df8(int arg0);
extern "C" void func_ov003_0216d63c(Struct_ov003_0217ef58* arg0);
extern "C" void func_ov003_0216ae0c(Struct_ov003_0217ef58* arg0, SafeAllocator* arg1);
extern "C" int func_ov003_0216af14(Struct_ov003_0217ef58* arg0);
extern "C" void func_020397cc(Struct_02018300_3* arg0, int arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27b8(unsigned char* arg0);
extern "C" int func_ov017_021959b4(void);
extern "C" void func_ov003_0217f194(Struct_ov003_0217ef58_2* arg0);
extern "C" void func_ov003_0217f118(Struct_ov003_0217ef58_2* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_ov003_0217f1b8(unsigned char* arg0);
extern AllocatorUnion data_02114e20;

// USA: func_ov003_0217ef58
extern "C" ARM void func_ov003_0217ef58(Struct_ov003_0217ef58_2* arg0) {
    GameState* var0 = GameState::GetInstance();

    if (arg0->unknown_10_ == 0) {
        func_02074af4(arg0->unknown_2a_);
        SetFlags04(GetGameResources(), 0xc0);
        func_020a0cc4(0x1e800);
        void* var1 = func_02012d88(&data_02114e20, 0xb000);
        if (var1 == 0) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        VectorizedMemset(var1, 0, 0xb000);
        arg0->unknown_14_.CreateTypeA(var1, 0xb000);
        arg0->unknown_14_.Reset();
        arg0->unknown_c_ = (Struct_ov003_0217ef58*)arg0->unknown_14_.Allocate(Enum_ov003_0217ef58_5140);
        if (arg0->unknown_c_ == 0) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        func_020a1df8(3);
        func_ov003_0216d63c(arg0->unknown_c_);
        func_ov003_0216ae0c(arg0->unknown_c_, &arg0->unknown_14_);
        arg0->unknown_c_->unknown_a_ = arg0->unknown_8_;
        func_020397cc((Struct_02018300_3*)var0->GetUnknownGameObject(), 1);
        func_020a27b8((unsigned char*)func_020100f8((char*)var0));
        arg0->unknown_10_ = 1;
    } else if (arg0->unknown_10_ == 1) {
        if (func_ov003_0216af14(arg0->unknown_c_) == 0) {
            arg0->unknown_10_ = 2;
        }
        func_ov017_021959b4();
        if (func_ov017_021959b4() != 0 && arg0->unknown_c_->unknown_4_ != 5) {
            func_ov003_0217f194(arg0);
            arg0->unknown_10_ = 3;
        }
    } else if (arg0->unknown_10_ == 2) {
        func_ov003_0217f118(arg0);
        func_020397c0(var0->GetUnknownGameObject());
        int var2 = func_020100f8((char*)var0);
        func_020a27ac((void*)var2);
        func_020a28b0((unsigned char*)var2, 2);
        ClearFlags04(GetGameResources(), 0xc0);
        arg0->unknown_10_ = -1;
    } else if (arg0->unknown_10_ == 3) {
        if (func_ov003_0216af14(arg0->unknown_c_) == 0) {
            func_ov003_0217f1b8((unsigned char*)arg0);
        }
    }
}
