#include <globaldefs.h>
#include "GameState/BattleRecordSnapshot.h"
#include "GameState/GameState.h"
#include "World/Object3D.h"
#include <Memory/SafeAllocator.h>

struct Struct_ov008_021843f8_2 {
    Struct_020ac4f8 unknown_0_[2];
    unsigned int unknown_8_0_ : 17;
    unsigned int unknown_a_1_ : 7;
    unsigned int unknown_b_0_ : 7;
    unsigned int unknown_b_7_ : 1;
    unsigned int unknown_c_0_ : 17;
    unsigned int unknown_e_1_ : 7;
    unsigned int unknown_f_0_ : 7;
    unsigned int unknown_f_7_ : 1;
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
    unsigned int unknown_12_7_ : 9;
    unsigned int unknown_14_;
};

struct Struct_ov008_021843f8_3 {
    Struct_020ac4f8 unknown_0_;
    Struct_020ac4f8 unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_0_ : 9;
    unsigned int unknown_11_1_ : 14;
    unsigned int unknown_12_7_ : 9;
    char unknown_14_[0x90 - 0x14];
    Struct_ov008_021843f8_2 unknown_90_;
    unsigned int unknown_a8_;
    unsigned int unknown_ac_;
};

struct Struct_ov000_021735d0 {
    unsigned int unknown_0_[15];
};

struct Struct_ov008_021843f8 {
    Struct_ov000_021735d0 unknown_0_;
    Struct_ov008_021843f8_3 unknown_3c_;
};

static inline Struct_ov008_021843f8* inline_ov008_021843f8(GameState* arg0)
{
#if defined(jpn)
    return (Struct_ov008_021843f8*)((char*)arg0 + 0x2c4 + 0x7000);
#else
    return (Struct_ov008_021843f8*)((char*)arg0 + 0x104 + 0x7400);
#endif
}

struct Struct_0201099c_14;
struct Struct_020a13c4;
struct Struct_02020cb8;
struct Struct_0205cfd4;
struct Struct_0205bef8;

extern "C" void* func_020d6c00();
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_020a13c4(Struct_020a13c4* arg0);
extern "C" void func_0204af64(Struct_02020cb8* arg0);
extern "C" void func_0205cfd4(Struct_0205cfd4* arg0);
extern "C" void func_0205bef8(Struct_0205bef8* arg0);
extern "C" void func_020a2010(void* arg0);
extern "C" void func_0204c684(void* arg0);

struct Struct_ov008_021842a0_2 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    SafeAllocator unknown_50_;
    SafeAllocator unknown_64_;
    SafeAllocator unknown_78_;
    SafeAllocator unknown_8c_;
    char unknown_a0_[0x18];
    char* unknown_b8_;
    char unknown_bc_[0x14];
    char unknown_d0_[3][0x20];
    char unknown_130_[0xbc];
    char unknown_1ec_[6][0xe0];
    void* unknown_72c_;
    void* unknown_730_;
    void* unknown_734_;
    void* unknown_738_;
    void* unknown_73c_;
    void* unknown_740_;
    unsigned char unknown_744_[8];
    unsigned char unknown_74c_;
    char unknown_74d_[3];
    char unknown_750_[0x40];
    Object3D unknown_790_;
    char unknown_83c_[0x2c8];
    void* unknown_b04_;
    void* unknown_b08_;
    void* unknown_b0c_;
    signed char unknown_b10_;
    unsigned char unknown_b11_;
    unsigned char unknown_b12_;
    unsigned char unknown_b13_;
    short unknown_b14_;
    short unknown_b16_;
    int unknown_b18_;
    int unknown_b1c_;
    int unknown_b20_;
    int unknown_b24_;
    unsigned char unknown_b28_;
    unsigned char unknown_b29_;
    unsigned char unknown_b2a_;
    int unknown_b2c_;
    const void* unknown_b30_;
    void* unknown_b34_;
    void* unknown_b38_;
#if !defined(jpn)
    void* unknown_b3c_;
#endif
    Struct_020ac4f8 unknown_b40_[2];
};

extern "C" void func_ov008_02186cec(Struct_ov008_021842a0_2* arg0);

// USA: func_ov008_021843f8
extern "C" ARM void func_ov008_021843f8(Struct_ov008_021842a0_2* arg0)
{
    func_020466e4((unsigned int*)func_020d6c00(), 0xf);
    arg0->unknown_0_.ResetAllocatorPointer();
    arg0->unknown_14_.ResetAllocatorPointer();
    arg0->unknown_28_.ResetAllocatorPointer();
    arg0->unknown_3c_.ResetAllocatorPointer();
    arg0->unknown_50_.ResetAllocatorPointer();
    arg0->unknown_64_.ResetAllocatorPointer();
    arg0->unknown_78_.ResetAllocatorPointer();
    arg0->unknown_8c_.ResetAllocatorPointer();
    func_020dfc40((Struct_0201099c_14*)arg0->unknown_a0_);
    arg0->unknown_b8_ = NULL;
    func_020a13c4((Struct_020a13c4*)arg0->unknown_bc_);
    func_0204af64((Struct_02020cb8*)arg0->unknown_d0_[0]);
    func_0204af64((Struct_02020cb8*)arg0->unknown_d0_[1]);
    func_0204af64((Struct_02020cb8*)arg0->unknown_d0_[2]);
    func_0205cfd4((Struct_0205cfd4*)arg0->unknown_130_);
    for (int var0 = 0; var0 < 6; var0++)
        func_0204c684(arg0->unknown_1ec_[var0]);
    arg0->unknown_72c_ = NULL;
    arg0->unknown_730_ = NULL;
    arg0->unknown_734_ = NULL;
    arg0->unknown_738_ = NULL;
    arg0->unknown_73c_ = NULL;
    arg0->unknown_734_ = NULL;
    func_0205bef8((Struct_0205bef8*)arg0->unknown_750_);
    arg0->unknown_790_.Initialize();
    func_020a2010(arg0->unknown_83c_);
    arg0->unknown_b04_ = NULL;
    arg0->unknown_b08_ = NULL;
    arg0->unknown_b0c_ = NULL;
    arg0->unknown_b10_ = 0;
    arg0->unknown_b11_ = 0;
    arg0->unknown_b12_ = 0;
    arg0->unknown_b13_ = 0;
    arg0->unknown_b14_ = -1;
    arg0->unknown_b16_ = -1;
    arg0->unknown_b18_ = 0;
    arg0->unknown_b1c_ = 0;
    arg0->unknown_b20_ = 0;
    arg0->unknown_b24_ = 0;
    arg0->unknown_b28_ = 0;
    arg0->unknown_b29_ = 0;
    arg0->unknown_b2a_ = 0;
    arg0->unknown_b2c_ = 0;
    arg0->unknown_b30_ = NULL;
    arg0->unknown_b34_ = NULL;
    arg0->unknown_b38_ = NULL;
#if !defined(jpn)
    arg0->unknown_b3c_ = NULL;
#endif
    func_ov008_02184598(&arg0->unknown_b40_[0]);
    func_ov008_02184598(&arg0->unknown_b40_[1]);
    Struct_ov008_021843f8* var1 = inline_ov008_021843f8(GameState::GetInstance());
    if (var1->unknown_3c_.unknown_10_0_ != 0)
        arg0->unknown_b18_ |= 0x2000;
    if (var1->unknown_3c_.unknown_90_.unknown_12_7_ != 0)
        arg0->unknown_b18_ |= 4;
    func_ov008_02186cec(arg0);
}
