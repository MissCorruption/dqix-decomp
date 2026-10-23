#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Combat/MapDisplay.h"
#include "Resource/GameResources.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "Resource/Brightness.h"

extern "C" unsigned short* func_02012fe4(void);
extern "C" void* func_0203bd08(void);
extern "C" void* func_0203b628(void);
extern "C" void func_02021428(void* arg0, int arg1);

extern "C" void func_0203b66c(char* arg0);
extern "C" void func_0203bd78(char* arg0);
extern "C" void func_0203bd24(char* arg0);
extern "C" void func_0203b718(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0203ba74(void* arg0);
struct Struct_02043368_2;
extern "C" void func_0205a198(struct Struct_02043368_2* arg0);
extern "C" void func_0205a444(char* arg0);

extern "C" void* func_0203bd14();
extern "C" void* func_0203be4c(void);
struct Struct_02020aec;
extern "C" int func_0205a498(void* arg0, struct Struct_02020aec* arg1, int arg2, void* arg3);
extern "C" void func_0205af38(int arg0, char* arg1, int arg2, int arg3);
extern "C" int func_0205a1f0(void* arg0, void* arg1, int arg2);
extern "C" int func_020421a0(void);
extern "C" void VectorizedInvertedMemcpy(void* dst, void* src, int size);
extern "C" void func_020c9820(void);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToSubObjVRAM(int, int, unsigned int);
extern "C" void func_02020aa0(void* arg0);
extern "C" void func_02027974(void* arg0, int arg1, void* arg2);
#if defined(jpn)
extern "C" void func_02020fc4(void* arg0, int arg1, SafeAllocator* arg2);
#else
extern "C" void func_02020fc4(void* arg0, int* arg1, SafeAllocator* arg2);
#endif
extern "C" void func_020210f8(char* arg0, int* arg1, SafeAllocator* arg2);
struct Struct_02020cb8;
extern "C" void func_0204af64(struct Struct_02020cb8* arg0);
extern "C" void func_0204b174(void* arg0, void* arg1, SafeAllocator* arg2, int arg3);
extern "C" void func_0202445c(void* arg0);
extern "C" void func_ov017_02191234(void* arg0);
extern "C" void func_0202343c(void* arg0);
extern "C" void func_02026b7c(unsigned char* arg0);
extern "C" void func_02026bdc(void* arg0, int arg1);
extern "C" int func_02020b98(void* arg0);
extern "C" int func_0201b5d8(int arg0);
extern "C" int func_0201b5b0(int arg0);
extern "C" void func_02023b0c(char* arg0, char* arg1);

extern "C" void __clear(void* arg0, unsigned int arg1);
extern int data_020ef460;
extern char data_020ef5fa[];
extern char data_020ef613[];
extern char data_020ef622[];
extern char data_020ef632[];
extern char data_020ef642[];
extern char data_020ef649[];
extern char data_020ef5b9[];
extern char data_020ef654[];
extern char data_020ef65d[];
extern char data_020ef668[];
extern char data_020ef671[];

struct Struct_02021f88_2 {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
    void* unknown_14_;
};

struct Struct_02021f88 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short* unknown_4_;
    int unknown_8_;
    int unknown_c_;
    struct Struct_02021f88* unknown_10_;
};

static inline SafeAllocator* inline_02021f88(GameResources* arg0, int arg1) {
    return &arg0->allocator_array_38[arg1];
}

#if defined(jpn)
enum { Enum_02021f88_172 = 0xac, Enum_02021f88_0_2 = 4, Enum_02021f88_1004 = 0xc,
       Enum_02021f88_8192 = 0x2400, Enum_02021f88_9146 = 0x23da, Enum_02021f88_1288 = 0x608,
       Enum_02021f88_96 = 0x2c, Enum_02021f88_32 = 0x40 };
#else
enum { Enum_02021f88_0 = 0, Enum_02021f88_0_2 = 0, Enum_02021f88_1004 = 0x3ec,
       Enum_02021f88_8192 = 0x2000, Enum_02021f88_9146 = 0x23ba, Enum_02021f88_1288 = 0x508,
       Enum_02021f88_96 = 0x60, Enum_02021f88_32 = 0x20 };
#endif

static inline char* inline_02021f88_2(void* arg0) {
    return (char*)arg0 + Enum_02021f88_1004;
}

static inline char* inline_02021f88_3(char* arg0) {
    return arg0 + Enum_02021f88_8192;
}

// USA: func_02021f88
extern "C" ARM void func_02021f88(Struct_02020554* arg0) {
    char var0[Enum_02021f88_32];
    char var1[0x10];
    char var2[0x40];
    char var3[0x40];
    void* var4;
    unsigned int var5;
    Struct_02021f88_2* var6;
    void* var7;
    void* var8;
    unsigned int var9;
    unsigned int var10;

    BackgroundLoader* var11;
    unsigned short* var12;
    GameResources* var13;
    char* var14;
    char* var15;
    int var16;
    SafeAllocator* var17;

    GameState::GetInstance();
    var11 = BackgroundLoader::GetInstance();
    var12 = func_02012fe4();
    var13 = GetGameResources();
    var14 = (char*)func_0203bd08();
    var15 = (char*)func_0203b628();
    var16 = arg0->unknown_9c2_;
    var17 = inline_02021f88(var13, 12);

    if (var16 == 0) {
        func_02021428(arg0, 0x19);
        var11->AddFence();
        arg0->unknown_a10_ = var11->QueueLoadFile(data_020ef5fa, (SafeAllocator*)0);
        int var18 = *(signed char*)((char*)var12 + Enum_02021f88_9146);
#if !defined(jpn)
        __clear(var0, 0x20);
#endif
        if (func_0201b5d8(*var12)) {
            strcpy(var0, data_020ef613);
        } else {
            sprintf(var0, data_020ef622, var18);
        }
#if defined(jpn)
        arg0->unknown_a14_ = var11->QueueLoadFile(var0, (SafeAllocator*)0);
#else
        arg0->unknown_a14_ = var11->QueueLoadFileInGP2(data_020ef632, var0, (SafeAllocator*)0);
#endif
        if (func_0201b5d8(*var12)) {
            arg0->unknown_9d0_ = func_02020b98(arg0);
        } else if (func_0201b5b0(*var12)) {
#if !defined(jpn)
            __clear(var1, 0x10);
#endif
            sprintf(var1, data_020ef642, *var12);
            func_02023b0c((char*)arg0, var1);
        }
        arg0->unknown_9c2_ = arg0->unknown_9c2_ + 1;
    } else if (var16 == 1) {
        if (var11->GetTaskStatus(arg0->unknown_a10_) == 0) return;
        if (var11->GetTaskStatus(arg0->unknown_a14_) == 0) return;
        func_02021428(arg0, 0x19);
        if (IsBrightnessWithinValidRange((GameResources*)var13, true) != 0) return;
        func_02020720(arg0);
        arg0->unknown_14_ = 0;
        func_02020838(arg0);
        func_0203b66c(var15);
        var17->Reset();
        func_0203bd78(var14);
        func_0203bd24(var14);
        func_0203b718(var15, 1, 0, 0);
        func_0203b718(var15, 1, 1, 0);
        func_0203ba74(var15);
        for (int var19 = 0; var19 < 0x1c; var19++) {
            func_0205a198(&arg0->unknown_e8_[var19]);
        }
        func_0205a444((char*)&arg0->unknown_94_);
        arg0->unknown_94_.unknown_50_ = 1;
        arg0->unknown_94_.unknown_40_ = arg0->unknown_e8_;
        arg0->unknown_94_.unknown_4c_ = 0x1b;
        char* var20 = (char*)func_0203bd14();
        *(int*)(var20 + Enum_02021f88_1288) = 0x2000;
        func_0203bd08();
        char* var21 = (char*)func_0203be4c() + 0x2c0;
        var20 = (char*)func_0203bd14();
        *(char**)var20 = var21;
        if (func_0201b5d8(*var12)) {
            if (var11->GetTaskStatus(arg0->unknown_9d0_) == 0) return;
        }
        var4 = 0;
        var5 = 0;
        var11->GetLoadedFileByID(arg0->unknown_a10_, &var4, &var5);
        func_0205a498((char*)&arg0->unknown_94_, (struct Struct_02020aec*)var4, var5, var17);
        func_0205af38((int)((char*)&arg0->unknown_94_), (char*)&arg0->unknown_e8_[9], 1, 1);
        func_0205af38((int)((char*)&arg0->unknown_94_), (char*)&arg0->unknown_e8_[11], 1, 1);
        BackgroundLoader::GetInstance()->RemoveTask(arg0->unknown_a10_);
        arg0->unknown_a10_ = -1;
        var11->GetLoadedFileByID(arg0->unknown_a14_, &var4, &var5);
        var6 = 0;
        if (func_0205a1f0(&var6, var4, var5) != 0) return;
        char* var22 = (char*)func_020421a0();
        char* var23 = *(char**)(var22 + Enum_02021f88_96);
        VectorizedInvertedMemcpy(var6->unknown_14_, var23, var6->unknown_10_);
        func_020c9820();
        CleanInvalidateCacheRange(var23, var6->unknown_10_);
        LoadToSubObjVRAM((int)var23, 0x2c20, var6->unknown_10_);
        BackgroundLoader::GetInstance()->RemoveTask(arg0->unknown_a14_);
        arg0->unknown_a14_ = -1;
        func_02020aa0(arg0);
        arg0->unknown_24_ = 0;
        arg0->unknown_30_ = 0;
        if (func_0201b5b0(*var12)) {
            strcpy(arg0->unknown_548_, data_020ef649);
            arg0->unknown_38_ = 0x2000;
            arg0->unknown_6c_ = var17->Allocate(0x800);
            func_02027974(arg0, (int)((ActiveGrottoClass*)inline_02021f88_3(inline_02021f88_2(var12)))->floorMap_.pMapAdjacencyData, arg0->unknown_6c_);
            arg0->unknown_18_ = -1;
            arg0->unknown_1c_ = -1;
            Struct_02021f88* var24 = (Struct_02021f88*)var17->Allocate(0x14);
            if (var24 == 0) return;
            var24->unknown_0_ = 0;
            var24->unknown_2_ = 1;
            var24->unknown_4_ = (short*)var17->Allocate(var24->unknown_2_ * 2);
            if (var24->unknown_4_ == 0) return;
            for (int var25 = 0; var25 < var24->unknown_2_; var25++) {
                var24->unknown_4_[var25] = *var12;
            }
            Struct_02021f88* var26 = arg0->unknown_754_;
            var24->unknown_1_ = var26 ? var26->unknown_1_ + 1 : 1;
            var24->unknown_10_ = arg0->unknown_754_;
            arg0->unknown_754_ = var24;
        } else {
#if defined(jpn)
            func_02020c18(arg0, arg0->unknown_9d0_, var17);
#else
            func_02020c18(arg0, &arg0->unknown_9d0_, var17);
#endif
        }
        var11->AddFence();
        sprintf(var2, data_020ef5b9, arg0->unknown_548_);
        arg0->unknown_9d4_ = var11->QueueLoadFileInGP2(
            *(const char**)((char*)&data_020ef460 + 8 - Enum_02021f88_0_2), var2, (SafeAllocator*)0);
        if (func_0201b5d8(*var12)) {
            for (int var27 = 0; var27 < arg0->unknown_24_; var27++) {
                sprintf(var2, data_020ef5b9,
                        arg0->unknown_20_[var27].unknown_4_);
                arg0->unknown_9d8_[var27] = var11->QueueLoadFileInGP2(
                    *(const char**)((char*)&data_020ef460 + 8 - Enum_02021f88_0_2), var2, (SafeAllocator*)0);
            }
        }
        arg0->unknown_9c2_ = arg0->unknown_9c2_ + 1;
    } else if (var16 == 2) {
        if (var11->GetTaskStatus(arg0->unknown_9d4_) == 0) return;
        if (func_0201b5d8(*var12)) {
            for (int var28 = 0; var28 < arg0->unknown_24_; var28++) {
                if (var11->GetTaskStatus(arg0->unknown_9d8_[var28]) == 0) return;
            }
        }
#if defined(jpn)
        func_02020fc4(arg0, arg0->unknown_9d4_, var17);
#else
        func_02020fc4(arg0, &arg0->unknown_9d4_, var17);
#endif
        if (func_0201b5b0(*var12)) {
            arg0->unknown_70_ = arg0->unknown_74_ + 1;
            char* var29 = inline_02021f88_2(var12);
            func_0204af64(&arg0->unknown_4c_);
            arg0->unknown_4c_.unknown_1c_0_ = 1;
            arg0->unknown_4c_.unknown_1c_4_ = 0;
            arg0->unknown_4c_.unknown_0_ = arg0->unknown_70_ << 5;
            var11->AddFence();
            ActiveGrottoClass* var30 = (ActiveGrottoClass*)(var29 + Enum_02021f88_8192);
            if (var30->GetActiveGrottoEnviron() == 0) {
                sprintf(var3, data_020ef654);
            } else {
                sprintf(var3, data_020ef65d, var30->GetActiveGrottoEnviron());
            }
            arg0->unknown_a18_ = var11->QueueLoadFileInGP2(
                *(const char**)((char*)&data_020ef460 + 8 - Enum_02021f88_0_2), var3, (SafeAllocator*)0);
            if (var30->GetActiveGrottoEnviron() == 0) {
                sprintf(var3, data_020ef668);
            } else {
                sprintf(var3, data_020ef671, var30->GetActiveGrottoEnviron());
            }
            arg0->unknown_a1c_ = var11->QueueLoadFileInGP2(
                *(const char**)((char*)&data_020ef460 + 8 - Enum_02021f88_0_2), var3, (SafeAllocator*)0);
        } else {
            func_020210f8((char*)arg0, arg0->unknown_9d8_, var17);
        }
        arg0->unknown_9c2_ = arg0->unknown_9c2_ + 1;
    } else if (var16 == 3) {
        if (func_0201b5b0(*var12)) {
            if (var11->GetTaskStatus(arg0->unknown_a18_) == 0) return;
            if (var11->GetTaskStatus(arg0->unknown_a1c_) == 0) return;
            var7 = 0;
            var8 = 0;
            var9 = 0;
            var10 = 0;
            var11->GetLoadedFileByID(arg0->unknown_a18_, &var7, &var9);
            var9 = (var9 + 3) & ~3;
            var11->GetLoadedFileByID(arg0->unknown_a1c_, &var8, &var10);
            var10 = (var10 + 3) & ~3;
            func_0204b174(&arg0->unknown_4c_, var7, var17, var9);
            func_0204b174(&arg0->unknown_4c_, var8, var17, var10);
            BackgroundLoader::GetInstance()->RemoveTask(arg0->unknown_a18_);
            arg0->unknown_a18_ = -1;
            BackgroundLoader::GetInstance()->RemoveTask(arg0->unknown_a1c_);
            arg0->unknown_a1c_ = -1;
        }
        func_0202445c(arg0);
        func_ov017_02191234(var13);
        arg0->unknown_55c_ = 1;
        arg0->unknown_9c4_ = 1;
        arg0->unknown_9c8_ = 0;
        arg0->unknown_9c3_ = 0;
        arg0->unknown_9c2_ = arg0->unknown_9c2_ + 1;
        func_020c9820();
        func_0202343c(arg0);
        func_02026b7c((unsigned char*)arg0);
        func_02026bdc(arg0, 0);
    }
}
