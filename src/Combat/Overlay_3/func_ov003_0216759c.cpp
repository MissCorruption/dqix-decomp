#include "Combat/MenuNodeChain.h"
#include "Combat/MapDisplay.h"
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

struct Struct_ov003_0216759c {
    int unknown_0_; SafeAllocator* unknown_4_; Struct_02020cb8* unknown_8_; Struct_0207f7f0_2* unknown_c_; Struct_0207f7f0* unknown_10_;
#if defined(jpn)
    char unknown_14_[0x34-0x14];
#else
    char unknown1_14_[0x64-0x14];
#endif
    int unknown_64_; char unknown_68_[8]; int unknown_70_; unsigned char unknown_74_; unsigned char unknown_75_; signed char unknown_76_;
};
struct Struct_ov003_0216759c_2 { char unknown_0_[8]; unsigned int unknown_8_; void* unknown_c_; };
extern "C" {
void* __clear(void*, int);
void func_0204af64(void*);
void func_0204b11c(void*, int);
void func_0204b5b4(void*, int);
void func_0204b12c(void*,SafeAllocator*);
void func_0204b5e8(void*,int,int);
void func_0204af38(void*,int,SafeAllocator*);
void DisableSubBGVRAMBanks();
void MapVRAMBanksToSubBG(int);
int func_02046900(void*);
void* func_020467f0(void*,int,void**,int*);
void func_0204b174(void*,void*,SafeAllocator*,int);
void func_0204bc74(void*,int,int,int,int,int,int);
void func_0204b0e8(void*,void*);
Struct_ov003_0216759c_2* func_0204af14(void*,unsigned int);
void _Z25CleanInvalidateCacheRangePKvj(const void*,unsigned int);
void LoadToSubBG1ScreenData(void*,int,unsigned int);
void func_0204c684(void*);
void func_0204c7a8(void*,SafeAllocator*,int,unsigned int);
#if defined(jpn)
void func_02080654(void*,SafeAllocator*,const char*);
#else
void func_0207f914(void*,SafeAllocator*,const char*,const char*);
#endif
int func_0207f9f4(void*);
void LoadToSubBGStandardPalette(const void*,unsigned int,unsigned int);
void _Z15CleanCacheRangePKvj(const void*,unsigned int);
void func_0207fe44(void*);
void func_ov003_02167a5c(void*,int,int);
}
extern char data_ov003_021800a4[];
extern char data_ov003_021800bb[];
extern char data_ov003_021800d5[];
extern unsigned short data_ov003_0217f4dc[];
#if defined(jpn)
extern char data_ov003_0217e87f[];
#endif

// USA: func_ov003_0216759c
extern "C" ARM int func_ov003_0216759c(Struct_ov003_0216759c* arg0) {
    if (arg0->unknown_74_ != 0) return 1;
    int var0 = 1;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    if (arg0->unknown_75_ == 0) {
        *(volatile unsigned int*)0x4001010 = 0;
        *(volatile unsigned int*)0x4001014 = 0;
        SafeAllocator* var2 = arg0->unknown_4_;
        var2->Reset();
        arg0->unknown_8_ = (Struct_02020cb8*)var2->Allocate(0x40);
        int var3[2];
        __clear(var3, sizeof(var3));
        Struct_02020cb8* var4;
        for (int var5=0; var5<2; var5++) {
            var4 = arg0->unknown_8_+var5;
            func_0204af64(var4);
            func_0204b11c(var4, var3[var5]);
            var4->unknown_1c_0_=1;
            var4->unknown_1c_4_=var5;
            func_0204b5b4(var4,var5);
            func_0204b12c(var4,var2);
            func_0204b5e8(var4,0,0);
        }
        func_0204af38(arg0->unknown_8_+1,1,var2);
        DisableSubBGVRAMBanks();
        MapVRAMBanksToSubBG(0x80);
        *(volatile unsigned short*)0x4001008 = (*(volatile unsigned short*)0x4001008 & 0x43) | 0xe00;
        *(volatile unsigned short*)0x400100a = (*(volatile unsigned short*)0x400100a & 0x43) | 0xf00;
        *(volatile unsigned short*)0x4001050 = 0;
        var1->MaybeFreeAllocations();
        arg0->unknown_64_ = var1->QueueLoadFile(data_ov003_021800a4,0);
        arg0->unknown_75_++;
        var0=0;
    } else if (arg0->unknown_75_ == 1) {
        if (var1->GetTaskStatus(arg0->unknown_64_) != 0) {
            void* var6; void* var7; unsigned int var8; int var9;
            var1->GetLoadedFileByID(arg0->unknown_64_,&var7,&var8);
            int var10 = func_02046900(var7);
            SafeAllocator* var11=arg0->unknown_4_;
            Struct_02020cb8* var12=arg0->unknown_8_;
            for (int var13=0;var13<var10;var13++) {
                void* var14=func_020467f0(var7,var13,&var6,&var9);
                if (var14) {
                    func_0204b174(var12,var14,var11,var9);
                    var12=arg0->unknown_8_+1;
                }
            }
            var1->RemoveTask(arg0->unknown_64_);
            arg0->unknown_64_=-1;
            var12=arg0->unknown_8_;
            func_0204bc74(var12,0,0,0,0x20,0x19,0);
            func_0204b0e8(var12,0);
            Struct_ov003_0216759c_2* var15=func_0204af14(arg0->unknown_8_+1,0);
            if (var15) {
                void* var16; unsigned int var17=var15->unknown_8_; var16=var15->unknown_c_;
                _Z25CleanInvalidateCacheRangePKvj(var16,var17);
                LoadToSubBG1ScreenData(var16,0,var17);
            }
            var11=arg0->unknown_4_;
            var11[1].Reset();
            arg0->unknown_c_=(Struct_0207f7f0_2*)var11[1].Allocate(0x380);
            for (var0=0;var0<4;var0++) {
                Struct_0207f7f0_2* var18=arg0->unknown_c_+var0;
                func_0204c684(var18);
                func_0204c7a8(var18,var11+1,arg0->unknown_0_,0x600);
                var18->unknown_4_=arg0->unknown_8_;
            }
            arg0->unknown_75_++;
        }
        var0=0;
    } else if (arg0->unknown_75_ == 2) {
        SafeAllocator* var19=arg0->unknown_4_;
        var19[2].Reset();
#if defined(jpn)
        arg0->unknown_10_=(Struct_0207f7f0*)var19[2].Allocate(0x34);
#else
        arg0->unknown_10_=(Struct_0207f7f0*)var19[2].Allocate(0x40);
#endif
        func_0207f84c(arg0->unknown_10_);
#if defined(jpn)
        func_02080654(arg0->unknown_10_,var19+2,data_ov003_0217e87f);
#else
        func_0207f914(arg0->unknown_10_,var19+2,data_ov003_021800bb,data_ov003_021800d5);
#endif
        arg0->unknown_75_++;
        var0=0;
    } else if (arg0->unknown_75_ == 3) {
        int var20=func_0207f9f4(arg0->unknown_10_);
        if (var20==0) arg0->unknown_75_++;
        if (var20<0) arg0->unknown_74_=2;
        var0=0;
    } else if (arg0->unknown_75_ == 4) {
        *(volatile unsigned short*)0x4001008 &= ~3;
        *(volatile unsigned short*)0x400100a = (*(volatile unsigned short*)0x400100a & ~3) | 1;
        *(volatile unsigned short*)0x400100c = (*(volatile unsigned short*)0x400100c & ~3) | 2;
        *(volatile unsigned short*)0x400100e = (*(volatile unsigned short*)0x400100e & ~3) | 3;
        *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x1300;
        _Z25CleanInvalidateCacheRangePKvj(data_ov003_0217f4dc,2);
        LoadToSubBGStandardPalette(data_ov003_0217f4dc,2,2);
        _Z15CleanCacheRangePKvj(data_ov003_0217f4dc,2);
        _Z25CleanInvalidateCacheRangePKvj(data_ov003_0217f4dc,2);
        LoadToSubBGStandardPalette(data_ov003_0217f4dc,0x22,2);
        _Z15CleanCacheRangePKvj(data_ov003_0217f4dc,2);
        func_0207f7f0(arg0->unknown_10_,arg0->unknown_c_,4);
        Struct_0207f7f0* var21=arg0->unknown_10_;
        var21->unknown_2c_=arg0->unknown_8_;
        var21->unknown_38_=1;
        arg0->unknown_10_->unknown_3a_=0;
        arg0->unknown_74_=1;
        arg0->unknown_75_=0;
        if (arg0->unknown_70_ != 0 && arg0->unknown_76_>=0) {
            func_0207fe44(arg0->unknown_10_);
            signed char var22=arg0->unknown_76_;
            arg0->unknown_76_=-1;
            func_ov003_02167a5c(arg0,arg0->unknown_70_,var22);
        }
    }
    return var0;
}
