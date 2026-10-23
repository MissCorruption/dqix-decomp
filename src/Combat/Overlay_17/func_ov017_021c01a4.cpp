#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_02018300_3;
extern "C" void func_020397cc(struct Struct_02018300_3* arg0, int arg1);
extern "C" unsigned char* func_020100f8(char* arg0);
extern "C" void func_020a28a0(unsigned char* arg0, unsigned char arg1);
extern "C" void func_020a28b0(unsigned char* arg0, int arg1);
extern "C" void func_020397c0(void* arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
struct Struct_02092aa4;
extern "C" void func_02092aa4(Struct_02092aa4*, int);
extern "C" void func_02092a74(SafeAllocator* arg0, SafeAllocator* arg1);
extern "C" int func_020a0cc4(int arg0);
extern "C" void func_020a0c0c();
extern "C" int func_02092bcc(struct Struct_02092aa4* arg0, int arg1);
extern "C" void func_02092b34(struct Struct_02092aa4* arg0);

extern AllocatorUnion data_02114e20;
extern struct Struct_02092aa4* data_ov017_021d8474;

struct Struct_ov017_021c01a4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[6];
    SafeAllocator unknown_8_;
    int unknown_1c_;
    signed char unknown_20_;
};

extern "C" void func_ov017_021c0160(struct Struct_ov017_021c01a4* arg0);

// USA: func_ov017_021c01a4
extern "C" ARM void func_ov017_021c01a4(struct Struct_ov017_021c01a4* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetUnknownGameObject();
    func_020397cc((struct Struct_02018300_3*)var1, 1);
    unsigned char* var2 = func_020100f8((char*)var0);
    func_020a28a0(var2, 1);

    if (arg0->unknown_1c_ == 0) {
        func_020a0cc4(0xc3c);
        void* var3 = func_02012d88(&data_02114e20, 0xc3c);
        if (var3 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        arg0->unknown_8_.CreateTypeA(var3, 0xc3c);
        arg0->unknown_8_.Reset();
        data_ov017_021d8474 = (struct Struct_02092aa4*)arg0->unknown_8_.Allocate(0x3c);
        if (data_ov017_021d8474 == NULL) {
            func_020a0c0c();
            arg0->unknown_1_ = 1;
            return;
        }
        func_02092aa4(data_ov017_021d8474, arg0->unknown_20_);
        func_02092a74((SafeAllocator*)data_ov017_021d8474, &arg0->unknown_8_);
        arg0->unknown_1c_++;
    } else if (arg0->unknown_1c_ == 1) {
        if (func_02092bcc(data_ov017_021d8474, GameState::GetInstance()->GetTickCount())) {
            arg0->unknown_1c_++;
        }
    } else if (arg0->unknown_1c_ == 2) {
        func_02092b34(data_ov017_021d8474);
        arg0->unknown_1c_++;
    } else if (arg0->unknown_1c_ == 3) {
        func_ov017_021c0160(arg0);
        func_020a28b0(var2, 1);
        func_020397c0(var1);
        arg0->unknown_1c_++;
        arg0->unknown_1_ = 1;
        func_020a0c0c();
    }
}
