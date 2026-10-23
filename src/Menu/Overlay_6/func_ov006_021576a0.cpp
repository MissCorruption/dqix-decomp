#include "Combat/MenuNodeChain.h"
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define R(j, u) (j)
#else
#define R(j, u) (u)
#endif

struct Struct_ov006_02154348;
struct Struct_ov006_021576a0 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x1a4];
#endif
    void* unknown_1a4_;
    char unknown_1a8_[4];
    void* unknown_1ac_;
    void* unknown_1b0_;
};
struct Struct_ov006_021576a0_2 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};
struct Struct_ov006_021576a0_3 {
    char unknown_0_[0x3e];
    unsigned char unknown_3e_;
    inline unsigned char inline_ov006_021576a0() { return unknown_3e_ = 1; }
};
struct Struct_ov006_021576a0_4 {
    char unknown_0_[0xc];
    Struct_ov006_021576a0_3* unknown_c_;
};
struct Struct_ov006_021576a0_5 {
#if !defined(jpn)
    char unknown_0_[4];
    unsigned char** unknown_4_;
#endif
    void* unknown_8_;
    SafeAllocator* unknown_c_;
    Struct_ov006_02154348* unknown_10_;
    Struct_0207f7f0* unknown_14_;
    Struct_ov006_021576a0_4* unknown_18_;
    char (*unknown_1c_)[0x20];
    char (*unknown_20_)[0xe0];
    char (*unknown_24_)[0x28];
    void* unknown_28_;
    char unknown_2c_[0xc];
    Struct_ov006_021576a0_2* unknown_38_;
    char unknown_3c_[0xc];
    short** unknown_48_;
    unsigned char** unknown_4c_;
    unsigned short* unknown_50_;
#if defined(jpn)
    char unknown1_4c_[0x100];
#else
    char unknown_54_[0x104];
#endif
    char unknown_158_[0x18];
#if defined(jpn)
    char unknown_170_[0x230];
#else
    char unknown_170_[0x224];
#endif
    unsigned short unknown_394_;
};
extern "C" {
extern unsigned short data_ov006_0215fffe[];
extern unsigned int data_ov006_02160054[];
void* memcpy(void*, const void*, unsigned int);
void* memset(void*, int, unsigned int);
void func_020e2490(void*, int, int, void*, SafeAllocator*, int, int);
void func_0204af64(void*);
void func_0204c684(void*);
void func_0205a198(void*);
void func_ov006_02154614(void*);
void func_ov006_02154348(Struct_ov006_02154348*, SafeAllocator*, void*);
void func_ov006_021553a8(void*);
void func_020ac234(Struct_ov006_021576a0_2*);
}
extern "C" ARM void func_ov006_021576a0(Struct_ov006_021576a0_5* arg0, SafeAllocator* arg1, void* arg2)
{
    unsigned short var0[9];
    memcpy(var0, data_ov006_0215fffe, 0x12);
    arg0->unknown_48_ = (short**)arg1->Allocate(0x24);
    arg0->unknown_4c_ = (unsigned char**)arg1->Allocate(0x24);
    arg0->unknown_50_ = (unsigned short*)arg1->Allocate(0x12);
    for (unsigned char var1 = 0; var1 < 9; var1++) {
        unsigned int var2 = var0[var1];
        arg0->unknown_48_[var1] = (short*)arg1->Allocate(var2 * 2);
        arg0->unknown_4c_[var1] = (unsigned char*)arg1->Allocate(var2);
        memset(arg0->unknown_48_[var1], -1, var2 * 2);
        memset(arg0->unknown_4c_[var1], 0, var2);
        arg0->unknown_50_[var1] = 0;
    }
    arg0->unknown_8_ = arg1->Allocate(0x4000);
    arg0->unknown_c_ = (SafeAllocator*)arg1->Allocate(0xc8);
    arg0->unknown_14_ = static_cast<Struct_0207f7f0*>(arg1->Allocate(R(0x34, 0x40)));
    arg0->unknown_1c_ = (char (*)[0x20])arg1->Allocate(0x40);
    arg0->unknown_20_ = (char (*)[0xe0])arg1->Allocate(0x620);
    arg0->unknown_24_ = (char (*)[0x28])arg1->Allocate(0x488);
    arg0->unknown_28_ = arg1->Allocate(8);
    arg0->unknown_10_ = (Struct_ov006_02154348*)arg1->Allocate(R(0x10bc, 0x12c0));
    arg0->unknown_38_ = (Struct_ov006_021576a0_2*)arg1->Allocate(0x75c);
    arg0->unknown_18_ = (Struct_ov006_021576a0_4*)arg1->Allocate(0x24);
    func_020e2490(arg0->unknown_18_, 1, 1, arg0->unknown_28_, arg1, R(3, 4), 0x40);
    Struct_ov006_021576a0_3* var3 = arg0->unknown_18_->unknown_c_;
    var3->inline_ov006_021576a0();
    for (unsigned char var4 = 0; var4 < 10; var4++) {
        arg0->unknown_c_[var4].ResetAllocatorPointer();
        unsigned int var5 = data_ov006_02160054[var4];
        arg0->unknown_c_[var4].CreateTypeA(arg1->Allocate(var5), var5);
        arg0->unknown_c_[var4].Reset();
    }
    func_0207f84c(arg0->unknown_14_);
    for (unsigned char var6 = 0; var6 < 2; var6++) func_0204af64(arg0->unknown_1c_[var6]);
    for (unsigned char var7 = 0; var7 < 7; var7++) func_0204c684(arg0->unknown_20_[var7]);
    for (unsigned char var8 = 0; var8 < 29; var8++) func_0205a198(arg0->unknown_24_[var8]);
    for (unsigned short var9 = 0; var9 < 471; var9++) {
        Struct_ov006_021576a0_2* var10 = &arg0->unknown_38_[var9];
        var10->unknown_0_ = -1;
        var10->unknown_2_0_ = 0;
        var10->unknown_2_1_ = 0;
        var10->unknown_2_2_ = 0;
    }
    func_ov006_02154614(arg0->unknown_10_);
    func_ov006_02154348(arg0->unknown_10_, arg1, arg2);
    ((Struct_ov006_021576a0*)arg0->unknown_10_)->unknown_1a4_ = arg0->unknown_8_;
    ((Struct_ov006_021576a0*)arg0->unknown_10_)->unknown_1ac_ = arg0->unknown_170_;
    ((Struct_ov006_021576a0*)arg0->unknown_10_)->unknown_1b0_ = arg0->unknown_158_;
    if (arg0->unknown_394_ & 2) func_ov006_021553a8(arg0->unknown_10_);
    func_020ac234(arg0->unknown_38_);
#if !defined(jpn)
    arg0->unknown_4_ = (unsigned char**)arg1->Allocate(0x40);
    for (int var11 = 0; var11 < 16; var11++) {
        arg0->unknown_4_[var11] = (unsigned char*)arg1->Allocate(0x80);
        memset(arg0->unknown_4_[var11], 0, 0x80);
    }
#endif
}
