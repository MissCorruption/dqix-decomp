#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov003_02168654_128=0x7c, Enum_ov003_02168654_16=8 };
#else
enum { Enum_ov003_02168654_128=0x80, Enum_ov003_02168654_16=16 };
#endif
struct Struct_ov003_02168654_2 { char unknown_0_[0x1c]; unsigned char unknown_1c_0_:4; unsigned char unknown_1c_4_:4; char unknown_1d_[3]; };
struct Struct_ov003_02168654_3 { int unknown_0_; void* unknown_4_; char unknown_8_[0xd8]; };
struct Struct_ov003_02168654_4 { char unknown_0_[0x98]; void* unknown_98_; char unknown_9c_[0x16]; unsigned char unknown_b2_; char unknown_b3_[9]; };
struct Struct_ov003_02168654_5 {
    SafeAllocator unknown_0_[4]; char unknown_50_[0x14]; char unknown_64_[Enum_ov003_02168654_128];
    Struct_ov003_02168654_4 unknown_e4_; Struct_ov003_02168654_2 unknown_1a0_[2]; Struct_ov003_02168654_3 unknown_1e0_[3]; char unknown_480_[0x3c];
    void* unknown_4bc_; void* unknown_4c0_; char unknown_4c4_[8]; short unknown_4cc_; char unknown_4ce_[2]; unsigned char unknown_4d0_;
    char unknown_4d1_[3]; void* unknown_4d4_; void* unknown_4d8_; char unknown_4dc_[4]; int unknown_4e0_; void* unknown_4e4_;
    unsigned char unknown_4e8_; char unknown_4e9_[3]; unsigned char unknown_4ec_; char unknown_4ed_[0xb7];
    unsigned char unknown_5a4_; unsigned char unknown_5a5_;
};
extern "C" {
void func_020dfec0(void*,SafeAllocator*,void*,unsigned int);
void func_0204b11c(void*,int);
void func_0204b5b4(void*,int);
void func_0204b12c(void*,SafeAllocator*);
void func_0204b5e8(void*,int,int);
void ColorEffect_ConfigureAlphaBlend(unsigned int*,unsigned char,unsigned char,unsigned char,int);
int func_02046900(void*);
void* func_020467f0(void*,int,void**,int*);
void func_0204b174(void*,void*,SafeAllocator*,int);
void func_0204bc74(void*,int,int,int,int,int,int);
void func_0204b0e8(void*,void*);
void func_0204c7a8(void*,SafeAllocator*,void*,unsigned int);
void func_0205cf78(void*,void*,unsigned char);
void func_0205a528(void*,void*,int,SafeAllocator*);
}
extern char data_ov003_021800e0[];
extern char data_ov003_021800fb[];
struct Struct_ov003_02168654 { unsigned char unknown_0_[2]; };
struct Struct_ov003_0217f528 {
#if defined(jpn)
    Struct_ov003_02168654 unknown_2_; Struct_ov003_02168654 unknown_0_;
#else
    Struct_ov003_02168654 unknown_0_; Struct_ov003_02168654 unknown_2_;
#endif
};
extern const Struct_ov003_0217f528 data_ov003_0217f528;
extern char data_ov003_0218010d[];
extern char data_ov003_02180120[];
#if defined(jpn)
extern char data_ov003_0217e8a0[];
#endif

// USA: func_ov003_02168654
extern "C" ARM void func_ov003_02168654(Struct_ov003_02168654_5* arg0) {
    if (arg0->unknown_4e8_==0) {
#if defined(jpn)
        arg0->unknown_4e0_=BackgroundLoader::GetInstance()->QueueLoadFile(data_ov003_0217e8a0,0);
#else
        arg0->unknown_4e0_=BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_ov003_021800e0,data_ov003_021800fb,0);
#endif
        arg0->unknown_4e8_++;
    } else if (arg0->unknown_4e8_==1) {
        if (BackgroundLoader::GetInstance()->GetTaskStatus(arg0->unknown_4e0_)!=0) {
            void* var0; unsigned int var1;
            BackgroundLoader::GetInstance()->GetLoadedFileByID(arg0->unknown_4e0_,&var0,&var1);
            arg0->unknown_0_[0].Reset();
            func_020dfec0(arg0->unknown_64_,arg0->unknown_0_,var0,var1);
            BackgroundLoader::GetInstance()->RemoveTask(arg0->unknown_4e0_);
            arg0->unknown_4e0_=-1;
            Struct_ov003_02168654 var2=data_ov003_0217f528.unknown_0_;
            Struct_ov003_02168654 var3=data_ov003_0217f528.unknown_2_;
            Struct_ov003_02168654_2* var4;
            for (int var5=0;var5<2;var5++) {
                var4=arg0->unknown_1a0_+var5;
                func_0204b11c(var4,0);
                int var6=var2.unknown_0_[var5]; int var7=var3.unknown_0_[var5];
                var4->unknown_1c_0_=0;
                var4->unknown_1c_4_=var6;
                func_0204b5b4(var4,var7);
                func_0204b12c(var4,arg0->unknown_0_+1);
                func_0204b5e8(var4,0,0);
            }
            *(volatile unsigned short*)0x400000a=(*(volatile unsigned short*)0x400000a&0x43)|0x1d00;
            *(volatile unsigned short*)0x400000c=(*(volatile unsigned short*)0x400000c&0x43)|0x1e00;
            ColorEffect_ConfigureAlphaBlend((unsigned int*)0x4000050,2,1,10,6);
            arg0->unknown_4e0_=BackgroundLoader::GetInstance()->QueueLoadFile(data_ov003_0218010d,0);
            arg0->unknown_4e8_++;
        }
    } else if (arg0->unknown_4e8_==2) {
        BackgroundLoader* var8=BackgroundLoader::GetInstance();
        if (var8->GetTaskStatus(arg0->unknown_4e0_)!=0) {
            void* var9; void* var10; unsigned int var11; void* var12[2]; int var13[2];
            var8->GetLoadedFileByID(arg0->unknown_4e0_,&var10,&var11);
            int var14=func_02046900(var10);
            for (int var15=0;var15<var14;var15++) var12[var15]=func_020467f0(var10,var15,&var9,var13+var15);
            for (int var16=0;var16<var14;var16++) {
                if (var12[var16]) {
                    func_0204b174(arg0->unknown_1a0_+1,var12[var16],arg0->unknown_0_+1,var13[var16]);
                    func_0204b174(arg0->unknown_1e0_,var12[var16],arg0->unknown_0_+1,var13[var16]);
                }
            }
            var8->RemoveTask(arg0->unknown_4e0_);
            arg0->unknown_4e0_=-1;
            Struct_ov003_02168654_2* var17;
            for (int var18=0;var18<2;var18++) {
                var17=arg0->unknown_1a0_+var18;
                func_0204bc74(var17,0,0,0,0x20,0x19,0);
                func_0204b0e8(var17,0);
            }
            arg0->unknown_0_[2].Reset();
            arg0->unknown_4e4_=arg0->unknown_0_[2].Allocate(0x4000);
            Struct_ov003_02168654_3* var19;
            for (int var20=0;var20<3;var20++) {
                var19=arg0->unknown_1e0_+var20;
                func_0204c7a8(var19,arg0->unknown_0_+1,arg0->unknown_4e4_,0x400);
                var19->unknown_4_=arg0->unknown_1a0_+1;
            }
            arg0->unknown_e4_.unknown_98_=arg0->unknown_1a0_;
            arg0->unknown_e4_.unknown_b2_=2;
            func_0205cf78(&arg0->unknown_e4_,arg0->unknown_1e0_,3);
            arg0->unknown_4e8_++;
        }
    } else if (arg0->unknown_4e8_==3) {
        arg0->unknown_4d0_=0;
        arg0->unknown_4c0_=arg0->unknown_4d4_;
        arg0->unknown_4cc_=Enum_ov003_02168654_16;
        arg0->unknown_4bc_=arg0->unknown_4d8_;
        arg0->unknown_4e0_=BackgroundLoader::GetInstance()->QueueLoadFile(data_ov003_02180120,0);
        arg0->unknown_4e8_++;
    } else if (arg0->unknown_4e8_==4) {
        BackgroundLoader* var21=BackgroundLoader::GetInstance();
        if (var21->GetTaskStatus(arg0->unknown_4e0_)!=0) {
            void* var22; void* var23; unsigned int var24; int var25;
            var21->GetLoadedFileByID(arg0->unknown_4e0_,&var23,&var24);
            int var26=func_02046900(var23);
            arg0->unknown_0_[3].Reset();
            for (int var27=0;var27<var26;var27++) {
                void* var28=func_020467f0(var23,var27,&var22,&var25);
                func_0205a528(arg0->unknown_480_,var28,var25,arg0->unknown_0_+3);
            }
            var21->RemoveTask(arg0->unknown_4e0_);
            arg0->unknown_4e0_=-1;
            arg0->unknown_4e8_++;
        }
    } else if (arg0->unknown_4e8_==5) {
        *(volatile unsigned short*)0x4000008=(*(volatile unsigned short*)0x4000008&~3)|2;
        *(volatile unsigned short*)0x400000a=(*(volatile unsigned short*)0x400000a&~3)|1;
        *(volatile unsigned short*)0x400000c&=~3;
        *(volatile unsigned short*)0x400000e=(*(volatile unsigned short*)0x400000e&~3)|3;
        *(volatile unsigned int*)0x4000000=(*(volatile unsigned int*)0x4000000&~0x1f00)|0x1700;
        arg0->unknown_4ec_=1;
        arg0->unknown_4e8_=0;
        arg0->unknown_5a4_=1;
        arg0->unknown_5a5_=0;
    }
}
