#if defined(jpn)
enum { Enum_020dac94_228 = 0xe0 };
#else
enum { Enum_020dac94_228 = 0xe4 };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void func_020a0cc4(unsigned int);
extern "C" void func_020a0c0c(void);
extern "C" int func_ov003_0217ce3c(void*);
extern "C" int func_ov017_021959b4(void);
extern "C" int func_ov003_0217daf0(void*);
extern "C" void func_ov003_0217cd24(void*, void*);
extern "C" void func_020dae08(void*);

struct Struct_02114e20;
extern "C" unsigned int func_02012dd0(struct Struct_02114e20* arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;

extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27b8(unsigned char* arg0);
extern "C" void func_020a27ac(void* arg0);
extern "C" void func_020397c0(void* arg0);
extern "C" void func_020a1df8(int arg0);
extern "C" void func_020daeb0(void* arg0);

struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);

struct Struct_020dac94 {
    char unknown_0_;
    unsigned char unknown_1_;
    char unknown_2_[0xa];
    void* unknown_c_;
    int unknown_10_;
    SafeAllocator unknown_14_;
};

// USA: func_020dac94
extern "C" ARM void func_020dac94(void* arg0, void*) {
    struct Struct_020dac94* var0 = (struct Struct_020dac94*)arg0;
    GameState* var1 = GameState::GetInstance();
    int var2 = var0->unknown_10_;
    if (var2 == 0) {
        SetFlags04(GetGameResources(), 0xc0);
        unsigned int var3 = func_02012dd0((struct Struct_02114e20*)&data_02114e20);
        if (var3 < 0x6000) {
            func_020a0cc4(0x6000);
        }
        void* var4 = func_02012d88(&data_02114e20, 0x6000);
        if (var4 == NULL) {
            func_020a0c0c();
            var0->unknown_1_ = 1;
            return;
        }
        var0->unknown_14_.CreateTypeA(var4, 0x6000);
        var0->unknown_14_.Reset();
        void* var5 = var0->unknown_14_.Allocate(Enum_020dac94_228);
        var0->unknown_c_ = var5;
        if (var5 == NULL) {
            func_020a0c0c();
            var0->unknown_1_ = 1;
            return;
        }
        func_020a1df8(3);
        func_ov003_0217daf0(var0->unknown_c_);
        func_ov003_0217cd24(var0->unknown_c_, &var0->unknown_14_);
        GameObject* var6 = var1->GetUnknownGameObject();
        func_020397cc((struct Struct_02018300_3*)var6, 1);
        int var7 = func_020100f8((char*)var1);
        func_020a27b8((unsigned char*)var7);
        var0->unknown_10_ = 1;
        return;
    }
    if (var2 == 1) {
        void* var8 = var0->unknown_c_;
        if (func_ov003_0217ce3c(var8) == 0) {
            var0->unknown_10_ = 2;
        }
        if (func_ov017_021959b4() != 0) {
            func_020daeb0(arg0);
            var0->unknown_10_ = 3;
        }
        return;
    }
    if (var2 != 2) {
        return;
    }
    func_020dae08(arg0);
    GameObject* var9 = var1->GetUnknownGameObject();
    func_020397c0(var9);
    int var10 = func_020100f8((char*)var1);
    func_020a27ac((void*)var10);
    func_020a28b0((unsigned char*)var10, 2);
    ClearFlags04(GetGameResources(), 0xc0);
    var0->unknown_10_ = -1;
}
