#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov017_021bacd8_62524 = 0xf454, Enum_ov017_021bacd8_1020 = 0x414 };
#else
enum { Enum_ov017_021bacd8_62524 = 0xf43c, Enum_ov017_021bacd8_1020 = 0x3fc };
#endif

extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_020a1df8(int arg0);

struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);

struct Struct_ov017_021bac8c;
extern "C" void func_ov017_021bac8c(struct Struct_ov017_021bac8c* arg0);

extern "C" void func_020a0cc4(unsigned int);
extern "C" void func_020a0c0c(void);
extern "C" int func_ov017_021959b4(void);

extern "C" void func_ov003_0215c650(void* arg0);
extern "C" void func_ov003_0215c568(void* arg0, void* arg1);
extern "C" void func_ov003_0215caa4(void* arg0);
extern "C" int func_ov003_0215c924(void* arg0, int arg1);
extern "C" void func_ov003_0215c800(void* arg0);

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

struct Struct_ov017_021bacd8 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[6];
    int unknown_8_;
    SafeAllocator unknown_c_;
    void* unknown_20_;
};

// USA: func_ov017_021bacd8
extern "C" ARM void func_ov017_021bacd8(Struct_ov017_021bacd8* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned int* var1 = ((unsigned int*)GetGameResources());
    GameObject* var2 = var0->GetUnknownGameObject();
    int var3 = func_020100f8((char*)var0);
    SetFlags04((GameResources*)var1, 0xc0);
    func_020397cc((struct Struct_02018300_3*)var2, 1);
    func_020a28a0((unsigned char*)var3, 3);
    int var4 = (int)var0->GetTickCount();
    if (var4 < 0) {
        var4 = 1;
    }
    int var5 = arg0->unknown_8_;
    if (var5 == 0) {
        func_020a0cc4(Enum_ov017_021bacd8_62524);
        void* var6 = func_02012d88(&data_02114e20, Enum_ov017_021bacd8_62524);
        if (var6 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        arg0->unknown_c_.CreateTypeA(var6, Enum_ov017_021bacd8_62524);
        arg0->unknown_c_.Reset();
        void* var7 = arg0->unknown_c_.Allocate(Enum_ov017_021bacd8_1020);
        arg0->unknown_20_ = var7;
        if (var7 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        func_020a1df8(3);
        func_ov003_0215c650(arg0->unknown_20_);
        func_ov003_0215c568(arg0->unknown_20_, &arg0->unknown_c_);
        arg0->unknown_8_ += 1;
        return;
    }
    if (var5 == 1) {
        if (func_ov017_021959b4() != 0) {
            func_ov003_0215caa4(arg0->unknown_20_);
        }
        if (func_ov003_0215c924(arg0->unknown_20_, var4) != 0) {
            arg0->unknown_8_ += 1;
        }
        return;
    }
    if (var5 == 2) {
        func_ov003_0215c800(arg0->unknown_20_);
        arg0->unknown_8_ += 1;
        return;
    }
    if (var5 != 3) {
        return;
    }
    func_ov017_021bac8c((struct Struct_ov017_021bac8c*)arg0);
    ClearFlags04((GameResources*)var1, 0xc0);
    func_020397c0(var2);
    func_020a28b0((unsigned char*)var3, 3);
    func_020a0c0c();
    arg0->unknown_1_ = 1;
}
