#include "Combat/MenuNodeChain.h"
#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov006_02154348_1948 = 0x718, Enum_ov006_02154348_76 = 0x48, Enum_ov006_02154348_64 = 0x34 };
#else
enum { Enum_ov006_02154348_1948 = 0x79c, Enum_ov006_02154348_76 = 0x4c, Enum_ov006_02154348_64 = 0x40 };
#endif

#include "Memory/SafeAllocator.h"

struct Struct_ov006_02154348 {
#if !defined(jpn)
    char unknown_0_[0x180];
#endif
    SafeAllocator* unknown_180_;
    SafeAllocator* unknown_184_;
    SafeAllocator* unknown_188_;
    char unknown_18c_[0x38];
    unsigned char* unknown_1c4_;
    void* unknown_1c8_;
    char (*unknown_1cc_)[0x20];
    char (*unknown_1d0_)[0xe0];
    Struct_0207f7f0* unknown_1d4_;
    char unknown_1d8_[8];
    char (*unknown_1e0_)[0x28];
    char unknown_1e4_[0x8a0];
    SafeAllocator unknown_a84_[4];
    char unknown_ad4_[0x10];
    char unknown_ae4_[Enum_ov006_02154348_1948];
    SafeAllocator* unknown_1280_;
    SafeAllocator* unknown_1284_;
};
extern "C" {
extern unsigned int data_ov006_0215ff7c[];
void func_ov023_021dbfd0(void*, SafeAllocator*);
void func_ov023_021dbfa8(void*, void*);
void func_ov023_021e20c0(void*);
void func_0204af64(void*);
void func_0204c684(void*);
void func_0205a198(void*);
}
// USA: func_ov006_02154348
extern "C" ARM void func_ov006_02154348(Struct_ov006_02154348* arg0, SafeAllocator* arg1, void* arg2)
{
    arg0->unknown_180_ = (SafeAllocator*)arg1->Allocate(0x78);
    arg0->unknown_184_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_188_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_1c4_ = (unsigned char*)arg1->Allocate(0x80);
    arg0->unknown_1c8_ = arg1->Allocate(Enum_ov006_02154348_76);
    arg0->unknown_1cc_ = (char (*)[0x20])arg1->Allocate(0x40);
    arg0->unknown_1d0_ = (char (*)[0xe0])arg1->Allocate(0xe0);
    arg0->unknown_1d4_ = static_cast<Struct_0207f7f0*>(arg1->Allocate(Enum_ov006_02154348_64));
    arg0->unknown_1e0_ = (char (*)[0x28])arg1->Allocate(0x2a8);
    arg0->unknown_184_->CreateTypeA(arg1->Allocate(0x258), 0x258);
    arg0->unknown_188_->CreateTypeA(arg1->Allocate(0x258), 0x258);
    arg0->unknown_184_->Reset();
    arg0->unknown_188_->Reset();
    arg0->unknown_1280_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_1284_ = (SafeAllocator*)arg1->Allocate(0x14);
    arg0->unknown_1280_->CreateTypeA(arg1->Allocate(0x1e00), 0x1e00);
    arg0->unknown_1280_->Reset();
    arg0->unknown_1284_->CreateTypeA(arg1->Allocate(0x80), 0x80);
    arg0->unknown_1284_->Reset();
    func_ov023_021dbfd0(arg0->unknown_ae4_, arg0->unknown_1280_);
    func_ov023_021dbfa8(arg0->unknown_ae4_, arg2);
    for (unsigned char var0 = 0; var0 < 6; var0++) {
        unsigned int var1 = data_ov006_0215ff7c[var0];
        arg0->unknown_180_[var0].CreateTypeA(arg1->Allocate(var1), var1);
        arg0->unknown_180_[var0].Reset();
    }
    for (unsigned char var2 = 0; var2 < 4; var2++) {
        arg0->unknown_a84_[var2].CreateTypeA(arg1->Allocate(0x280), 0x280);
        arg0->unknown_a84_[var2].Reset();
    }
    arg0->unknown_1c4_[0] = 0;
    func_ov023_021e20c0(arg0->unknown_1c8_);
    for (unsigned char var3 = 0; var3 < 2; var3++) func_0204af64(arg0->unknown_1cc_[var3]);
    for (unsigned char var4 = 0; var4 < 1; var4++) func_0204c684(arg0->unknown_1d0_[var4]);
    func_0207f84c(arg0->unknown_1d4_);
    for (unsigned char var5 = 0; var5 < 17; var5++) func_0205a198(arg0->unknown_1e0_[var5]);
}
