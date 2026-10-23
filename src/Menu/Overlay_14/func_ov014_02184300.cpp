#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include "globaldefs.h"
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

struct Struct_ov014_02184300 { char unknown_0_[0x28]; };
struct Struct_ov014_02184300_2 {
    char unknown_0_[0x40];
    Struct_ov014_02184300* unknown_40_;
    char unknown_44_[8];
    short unknown_4c_;
    char unknown_4e_[2];
    unsigned char unknown_50_;
    char unknown_51_[3];
};
struct Struct_ov014_02184300_3 {
    void** unknown_0_;
    Struct_ov014_02184300_2* unknown_4_;
    Struct_ov014_02184300* unknown_8_;
    char unknown_c_[0x30];
    SafeAllocator* unknown_3c_;
    Object3D* unknown_40_;
    void* unknown_44_;
    char unknown_48_[0x10];
    void* unknown_58_;
    void* unknown_5c_;
    void* unknown_60_;
    void* unknown_64_;
    void* unknown_68_;
    char unknown_6c_[0x16];
    unsigned char unknown_82_0_ : 2;
    unsigned char unknown_82_2_ : 1;
    unsigned char unknown_82_3_ : 5;
};
struct Struct_ov014_02189498 { unsigned int unknown_0_[6]; };
extern "C" {
extern const Struct_ov014_02189498 data_ov014_02189498;
extern const unsigned int data_ov014_02189480[3];
void func_0205a198(void*);
void func_0205a444(Struct_ov014_02184300_2*);
}

extern "C" ARM void func_ov014_02184300(Struct_ov014_02184300_3* arg0, SafeAllocator* arg1) {
    if (arg1) {
        Struct_ov014_02189498 var0 = data_ov014_02189498;
        arg0->unknown_3c_ = (SafeAllocator*)arg1->Allocate(0x78);
        arg0->unknown_0_ = (void**)arg1->Allocate(0xc);
        for (int var1 = 0; var1 < 3; ++var1) {
            arg0->unknown_0_[var1] = arg1->Allocate(data_ov014_02189480[var1]);
        }
        arg0->unknown_40_ = (Object3D*)arg1->Allocate(0xac);
        arg0->unknown_44_ = arg1->Allocate(0x2c8);
        arg0->unknown_58_ = arg1->Allocate(R(0x48, 0x4c));
        arg0->unknown_60_ = arg1->Allocate(R(0x40, 0x48));
        arg0->unknown_64_ = arg1->Allocate(R(0x40, 0x48));
        arg0->unknown_68_ = arg1->Allocate(R(0xc0, 0x200));
        arg0->unknown_4_ = (Struct_ov014_02184300_2*)arg1->Allocate(0x54);
        arg0->unknown_8_ = (Struct_ov014_02184300*)arg1->Allocate(0x78);
        for (unsigned char var2 = 0; var2 < 3; ++var2) func_0205a198(&arg0->unknown_8_[var2]);
        func_0205a444(arg0->unknown_4_);
        arg0->unknown_4_->unknown_50_ = 0;
        Struct_ov014_02184300_2* var3 = arg0->unknown_4_;
        var3->unknown_40_ = arg0->unknown_8_;
        var3->unknown_4c_ = 3;
        for (int var4 = 0; var4 < 6; ++var4) {
            unsigned int var5;
            unsigned int var6 = var4 * sizeof(SafeAllocator);
            var5 = var0.unknown_0_[var4];
            void* var7 = arg1->Allocate(var5);
            ((SafeAllocator*)((char*)arg0->unknown_3c_ + var6))->CreateTypeA(var7, var5);
            ((SafeAllocator*)((char*)arg0->unknown_3c_ + var6))->Reset();
        }
        arg0->unknown_40_->Initialize();
        arg0->unknown_40_->EnableFlag(4);
        arg0->unknown_82_2_ = 1;
    }
}
