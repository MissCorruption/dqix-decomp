#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>
#include <Resource/Brightness.h>
#include <Resource/CharacterCreationUI.h>
#include <Combat/MapDisplay.h>
#include "Resource/GameResources.h"

struct Struct_0205d6a0;
struct Struct_02020cb8_5;
struct Struct_0204b12c;
struct Struct_0204af38;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_0204b8d0;
struct Struct_02020cb8_2;
struct Struct_0204c7a8;
struct Struct_0205cf78;
struct Struct_0205cf78_2;
struct Struct_02081870_2 {
    char unknown_0_[0x98];
    Struct_02020cb8* unknown_98_;
    char unknown_9c_[0xb2 - 0x9c];
    unsigned char unknown_b2_;
    char unknown_b3_[0xbc - 0xb3];
};
struct Struct_ov006_02158478 {
    Struct_ov006_02158478* unknown_0_;
    Struct_02020cb8* unknown_4_;
    char unknown_8_[0xe0 - 8];
};
struct Struct_ov008_021842a0_2 {
    char unknown_0_[0x14];
    SafeAllocator unknown_14_;
    char unknown_28_[0xa0 - 0x28];
    Struct_0201099c_3 unknown_a0_;
    char unknown_a8_[0xf0 - 0xa8];
    Struct_02020cb8 unknown_f0_;
    Struct_02020cb8 unknown_110_;
    Struct_02081870_2 unknown_130_;
    Struct_ov006_02158478 unknown_1ec_[6];
    int unknown_72c_;
    char unknown_730_[0xb12 - 0x730];
    unsigned char unknown_b12_;
    char unknown_b13_[0xb20 - 0xb13];
    int unknown_b20_;
};

extern "C" const char* func_020e0434(Struct_0201099c_3*, int);
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b5b4(Struct_02020cb8*, int);
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
extern "C" void func_0204b12c(Struct_0204b12c*, SafeAllocator*);
extern "C" void func_0204af38(Struct_0204af38*, int, SafeAllocator*);
extern "C" int func_02046900(Struct_02020cb8_4*);
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" void func_0204b174(Struct_02020cb8*, void*, SafeAllocator*, int);
extern "C" void func_0204b8d0(Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
extern "C" void func_0204b0e8(Struct_02020cb8_2*, void*);
extern "C" void func_0204bc74(Struct_02020cb8*, int, int, int, int, int, int);
extern "C" void func_0204c7a8(Struct_0204c7a8*, SafeAllocator*, int, unsigned int);
extern "C" void func_0205cf78(Struct_0205cf78*, Struct_0205cf78_2*, unsigned char);

// USA: func_ov008_02188a54
extern "C" ARM int func_ov008_02188a54(Struct_ov008_021842a0_2* arg0, int arg1) {
    GameResources* var0 = GetGameResources();
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int var2 = arg0->unknown_b12_;
    if (var2 == 0) {
#if defined(jpn)
        int var3 = 1;
        if (arg1) var3 = 2;
        const char* var4 = func_020e0434(&arg0->unknown_a0_, var3);
        arg0->unknown_b20_ = var1->QueueLoadFile(var4, 0);
#else
        int var5 = 1;
        int var6 = 2;
        if (arg1) {
            var5 = 3;
            var6 = 4;
        }
        const char* var7 = func_020e0434(&arg0->unknown_a0_, var6);
        const char* var8 = func_020e0434(&arg0->unknown_a0_, var5);
        arg0->unknown_b20_ = var1->QueueLoadFileInGP2(var8, var7, 0);
#endif
        ++arg0->unknown_b12_;
    }
    if (var2 == 1) {
        if (IsBrightnessTransitionActive(var0)) return 0;
        func_0205d6a0((Struct_0205d6a0*)&arg0->unknown_130_, 1);
        ++arg0->unknown_b12_;
    }
    if (var2 == 2) {
        if (var1->GetTaskStatus(arg0->unknown_b20_)) {
            arg0->unknown_14_.Reset();
            func_0204af64(&arg0->unknown_f0_);
            func_0204b11c((unsigned char*)&arg0->unknown_f0_, 0);
            arg0->unknown_f0_.unknown_1c_0_ = 1;
            arg0->unknown_f0_.unknown_1c_4_ = 0;
            func_0204b5b4(&arg0->unknown_f0_, 1);
            func_0204b5e8((Struct_02020cb8_5*)&arg0->unknown_f0_, 0, 0);
            func_0204b12c((Struct_0204b12c*)&arg0->unknown_f0_, &arg0->unknown_14_);
            func_0204af38((Struct_0204af38*)&arg0->unknown_f0_, 1, &arg0->unknown_14_);
            func_0204af64(&arg0->unknown_110_);
            func_0204b11c((unsigned char*)&arg0->unknown_110_, 0);
            arg0->unknown_110_.unknown_1c_0_ = 1;
            arg0->unknown_110_.unknown_1c_4_ = 1;
            func_0204b5b4(&arg0->unknown_110_, 0);
            func_0204b5e8((Struct_02020cb8_5*)&arg0->unknown_110_, 0, 0);
            func_0204b12c((Struct_0204b12c*)&arg0->unknown_110_, &arg0->unknown_14_);
            void* var9;
            void* var10;
            unsigned int var11;
            var1->GetLoadedFileByID(arg0->unknown_b20_, &var10, &var11);
            int var12 = func_02046900((Struct_02020cb8_4*)var10);
            int var13;
            for (int var14 = 0; var14 < var12; ++var14) {
                void* var15 = func_020467f0((Struct_02020aec*)var10, var14, &var9, &var13);
                if (var15) {
                    if (var14 == var12 - 1) func_0204b174(&arg0->unknown_110_, var15, &arg0->unknown_14_, var13);
                    else func_0204b174(&arg0->unknown_f0_, var15, &arg0->unknown_14_, var13);
                }
            }
            var1->RemoveTask(arg0->unknown_b20_);
            arg0->unknown_b20_ = -1;
            func_0204b8d0((Struct_0204b8d0*)&arg0->unknown_f0_, 0, 0, 0, 0, 0, 32, 24, 0xffff);
            func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_f0_, 0);
            func_0204bc74(&arg0->unknown_110_, 0, 0, 0, 32, 25, 0);
            func_0204b0e8((Struct_02020cb8_2*)&arg0->unknown_110_, 0);
            Struct_ov006_02158478* var16;
            for (int var17 = 0; var17 < 6; ++var17) {
                var16 = &arg0->unknown_1ec_[var17];
                func_0204c7a8((Struct_0204c7a8*)var16, &arg0->unknown_14_, arg0->unknown_72c_, 512);
                var16->unknown_4_ = &arg0->unknown_110_;
            }
            arg0->unknown_130_.unknown_98_ = &arg0->unknown_110_;
            arg0->unknown_130_.unknown_b2_ = 1;
            func_0205cf78((Struct_0205cf78*)&arg0->unknown_130_, (Struct_0205cf78_2*)arg0->unknown_1ec_, 6);
            arg0->unknown_b12_ = 0;
            return 1;
        }
    }
    return 0;
}
