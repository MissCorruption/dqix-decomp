#if defined(jpn)
enum {Enum_ov017_021b71d8_128988=0x1f9cc};
#else
enum {Enum_ov017_021b71d8_128988=0x1f7dc};
#endif
#include <globaldefs.h>
#include "Memory/AllocatorLifecycle.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"

struct Struct_ov017_021b71d8 {
    unsigned char unknown_0_[0x8e44];
    unsigned char unknown_8e44_[3];
    unsigned char unknown_8e47_;
    unsigned char unknown_8e48_[0x8eb4 - 0x8e48];
};

struct Struct_ov017_021b71d8_2 {
    unsigned short unknown_0_;
};

struct Struct_ov017_021b71d8_3 {
    unsigned char unknown_0_[0x8];
    SafeAllocator unknown_8_;
    unsigned char unknown_1c_[0x1c - 0x8 - sizeof(SafeAllocator)];
    unsigned short unknown1_1c_;
    unsigned char unknown_1e_[0x6b0 - 0x1e];
    Struct_ov017_021b71d8* unknown_6b0_;
    unsigned char unknown_6b4_[0x6c0 - 0x6b4];
    unsigned char unknown_6c0_[3];
    unsigned char unknown_6c3_;
};

extern "C" Struct_ov017_021b71d8_2* func_02012fe4(void);
extern "C" void func_020a0cc4(unsigned int arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern AllocatorUnion data_02114e20;
extern "C" void func_ov000_0215ce80(Struct_ov017_021b71d8* arg0);
extern "C" void func_ov000_0215fab0(Struct_ov017_021b71d8* arg0, unsigned char arg1);

// USA: func_ov017_021b71d8
extern "C" ARM void func_ov017_021b71d8(Struct_ov017_021b71d8_3* arg0) {
    GameState::GetInstance();
    Struct_ov017_021b71d8_2* var0 = func_02012fe4();
    func_02012de4(&data_02114e20);
    func_020a0cc4(Enum_ov017_021b71d8_128988);
    arg0->unknown_8_.CreateTypeA(func_02012d88(&data_02114e20, Enum_ov017_021b71d8_128988), Enum_ov017_021b71d8_128988);
    arg0->unknown1_1c_ = var0->unknown_0_;
    arg0->unknown_6b0_ = (Struct_ov017_021b71d8*)arg0->unknown_8_.Allocate(sizeof(Struct_ov017_021b71d8));
    func_ov000_0215ce80(arg0->unknown_6b0_);
    for (int var1 = 0; var1 < arg0->unknown_6c3_; var1++) {
        func_ov000_0215fab0(arg0->unknown_6b0_, arg0->unknown_6c0_[var1]);
    }
    memset(arg0->unknown_6c0_, 0, sizeof(arg0->unknown_6c0_));
    arg0->unknown_6c3_ = 0;
}
