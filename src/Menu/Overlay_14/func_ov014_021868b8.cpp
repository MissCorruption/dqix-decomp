#include "Combat/MenuNodeChain.h"
#if defined(jpn)
#define R(j,u) (j)
#define func_ov008_021889f8 func_ov008_0218973c
#define data_ov005_0215cd20 data_ov005_0215e100
#define data_ov014_021894b8 data_ov014_0218a2f8
#define data_ov015_02193cfc data_ov015_0219482c
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_02194129 data_ov015_02194c69
#define func_ov008_02188730 func_ov008_02189444
#define func_ov014_02185c90 func_ov014_02186d00
#else
#define R(j,u) (u)
#endif
#include "globaldefs.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov014_021868b8 { char unknown_0_[0x28]; };
struct Struct_ov014_021868b8_2 { char unknown_0_[0x20]; };
struct Struct_ov014_021868b8_3 { char unknown_0_[0xe0]; };
struct Struct_ov014_021868b8_4 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 1;
    unsigned int unknown_1_3_ : 7;
    unsigned int unknown_2_2_ : 7;
    unsigned int unknown_3_1_ : 7;
};
struct Struct_ov014_021868b8_5 {
    char unknown_0_[0xb4];
    SafeAllocator* unknown_b4_;
    char unknown_b8_[8];
    Struct_0207f7f0* unknown_c0_;
    Struct_ov014_021868b8_2* unknown_c4_;
    Struct_ov014_021868b8_3* unknown_c8_;
    void* unknown_cc_;
    void* unknown_d0_;
    Struct_ov014_021868b8* unknown_d4_;
    void* unknown_d8_;
    Struct_ov014_021868b8_4* unknown_dc_;
};
struct Struct_ov014_02184300_3;
extern "C" {
void func_0205a198(void*);
void func_0205a234(void*);
void func_0204af64(void*);
void func_0204c684(void*);
void func_ov014_02184300(Struct_ov014_02184300_3*, SafeAllocator*);
extern const unsigned int data_ov014_021894b8[5];
}

extern "C" ARM void func_ov014_021868b8(Struct_ov014_021868b8_5* arg0, SafeAllocator* arg1) {
    if (!arg1) return;
    arg0->unknown_cc_ = arg1->Allocate(0x4000);
    arg0->unknown_d4_ = (Struct_ov014_021868b8*)arg1->Allocate(0x140);
    arg0->unknown_d8_ = arg1->Allocate(8);
    arg0->unknown_b4_ = (SafeAllocator*)arg1->Allocate(0x64);
    arg0->unknown_dc_ = (Struct_ov014_021868b8_4*)arg1->Allocate(0x4d0);
    for (unsigned char var0 = 0; var0 < 8; ++var0) func_0205a198(&arg0->unknown_d4_[var0]);
    func_0205a234(arg0->unknown_d8_);
    for (int var1 = 0; var1 < 5; ++var1) {
        unsigned int var2;
        unsigned int var3 = var1 * sizeof(SafeAllocator);
        var2 = data_ov014_021894b8[var1];
        void* var4 = arg1->Allocate(var2);
        ((SafeAllocator*)((char*)arg0->unknown_b4_ + var3))->CreateTypeA(var4, var2);
        ((SafeAllocator*)((char*)arg0->unknown_b4_ + var3))->Reset();
    }
    for (unsigned short var5 = 0; var5 < 0x134; ++var5) {
        Struct_ov014_021868b8_4* var6 = &arg0->unknown_dc_[var5];
        var6->unknown_0_0_ = 0;
        var6->unknown_1_2_ = 0;
        var6->unknown_1_3_ = 0;
        var6->unknown_2_2_ = 0;
    }
    arg0->unknown_c0_ = static_cast<Struct_0207f7f0*>(arg1->Allocate(R(0x34,0x40)));
    arg0->unknown_c4_ = (Struct_ov014_021868b8_2*)arg1->Allocate(0x40);
    arg0->unknown_c8_ = (Struct_ov014_021868b8_3*)arg1->Allocate(0x380);
    func_0207f84c(arg0->unknown_c0_);
    for (unsigned char var7 = 0; var7 < 2; ++var7) func_0204af64(&arg0->unknown_c4_[var7]);
    for (unsigned char var8 = 0; var8 < 4; ++var8) func_0204c684(&arg0->unknown_c8_[var8]);
    func_ov014_02184300((Struct_ov014_02184300_3*)arg0, arg1);
}
