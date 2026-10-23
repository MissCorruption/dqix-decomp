#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Filesystem/BackgroundLoader.h>
#include <Combat/MapDisplay.h>

struct Struct_ov017_021a5cbc { unsigned char unknown_0_[2]; };
struct Struct_ov017_021a5ad0 {
    char unknown_0_[0x18];
    int unknown_18_;
    unsigned char unknown_1c_0_ : 4;
    unsigned char unknown_1c_4_ : 4;
    char unknown_1d_[3];
};
struct Struct_ov017_021a5cbc_2 { short unknown_0_[5]; };
struct Struct_ov017_021a5cbc_3 {
    char unknown_0_[0x98];
    Struct_ov017_021a5ad0* unknown_98_;
    char unknown_9c_[4];
    short unknown_a0_;
    short unknown_a2_;
    short unknown_a4_;
    short unknown_a6_;
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_;
    unsigned char unknown_b1_;
    unsigned char unknown_b2_;
    char unknown_b3_[2];
    unsigned char unknown_b5_;
};
struct Struct_0204c7a8 {
    char unknown_0_[4];
    Struct_ov017_021a5ad0* unknown_4_;
    char unknown_8_[0xba];
    unsigned short unknown_c2_;
};
struct Struct_02020cb8_5;
struct Struct_02020cb8_4;
struct Struct_02020aec;
struct Struct_02020cb8_2;
struct Struct_0205cf78;
struct Struct_0205cf78_2;
struct Struct_02000c9c_8;
#if defined(jpn)
enum { Enum_ov017_021a5cbc_1280 = 0x400 };
#define data_ov017_021d76e8 data_ov017_021d7b28
#define data_ov017_021d7719 data_ov017_021d7b54
extern const char data_ov017_021d7b3b[];
#else
enum { Enum_ov017_021a5cbc_1280 = 0x500 };
#endif
extern "C" void func_0204b11c(unsigned char*, int);
extern "C" void func_0204b5b4(Struct_ov017_021a5ad0*, unsigned char);
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
extern "C" void ColorEffect_ConfigureAlphaBlend(void*, int, int, int, int);
extern "C" int func_02046900(Struct_02020cb8_4*);
extern "C" void* func_020467f0(Struct_02020aec*, int, void**, int*);
extern "C" void func_0204b174(Struct_ov017_021a5ad0*, void*, SafeAllocator*, int);
extern "C" void func_0205a198(Struct_02043368_2*);
extern "C" void func_0205a444(char*);
extern "C" int func_0205a528(Struct_02021578*, void*, int, SafeAllocator*);
extern "C" void func_ov017_021a5ad0(Struct_ov017_021a5ad0*, int, int);
extern "C" void func_0204bc74(Struct_ov017_021a5ad0*, int, int, int, int, int, int);
extern "C" void func_0204b0e8(Struct_02020cb8_2*, void*);
extern "C" void func_ov017_021a5b08(Struct_ov017_021a5ad0*, int);
extern "C" void func_0204c7a8(Struct_0204c7a8*, SafeAllocator*, int, unsigned int);
extern "C" void func_0205cf78(Struct_0205cf78*, Struct_0205cf78_2*, unsigned char);
extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" void func_0205d304(Struct_ov017_021a5cbc_3*, const char*, int, unsigned char, unsigned char, unsigned char, void*
#if !defined(jpn)
    , unsigned char
#endif
);
extern "C" void func_0205d0e0(Struct_ov017_021a5cbc_3*, unsigned int);
extern const unsigned char data_ov017_021d6a8c[];
extern const char data_ov017_021d76e8[];
extern const char data_ov017_021d76fb[];
extern const char data_ov017_021d770c[];
extern const short data_ov017_021d6a94[];
extern const char data_ov017_021d7719[];
#define REG_DISPLAY_CONTROL (*(volatile unsigned int*)0x04000000)
#define REG_BACKGROUND_1 (*(volatile unsigned short*)0x0400000a)
#define REG_BACKGROUND_2 (*(volatile unsigned short*)0x0400000c)
#define REG_BACKGROUND_0 (*(volatile unsigned short*)0x04000008)
#define REG_BACKGROUND_3 (*(volatile unsigned short*)0x0400000e)

// USA: func_ov017_021a5cbc
extern "C" ARM void func_ov017_021a5cbc(GameResources* arg0) {
    if ((*reinterpret_cast<void**>(arg0->unknown_4094 + 0x120)) || !(*reinterpret_cast<int*>(arg0->unknown_4094 + 0x12c))) return;
    if ((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x124)) == 0) {
        arg0->allocator_array_38[16].Reset();
        Struct_ov017_021a5cbc var0 = *(const Struct_ov017_021a5cbc*)(data_ov017_021d6a8c + 2);
        Struct_ov017_021a5cbc var1 = *(const Struct_ov017_021a5cbc*)data_ov017_021d6a8c;
        for (int var2 = 0; var2 < 2; ++var2) {
            Struct_ov017_021a5ad0* var3 = &reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094)[var2];
            func_0204b11c((unsigned char*)var3, 0);
            var3->unknown_1c_0_ = 0;
            var3->unknown_1c_4_ = var0.unknown_0_[var2];
            func_0204b5b4(var3, var1.unknown_0_[var2]);
            func_0204b5e8((Struct_02020cb8_5*)var3, 0, 0);
        }
        REG_DISPLAY_CONTROL = (REG_DISPLAY_CONTROL & ~0x1f00) | 0x100;
        REG_BACKGROUND_1 = (REG_BACKGROUND_1 & 0x43) | 0x1d00;
        REG_BACKGROUND_2 = (REG_BACKGROUND_2 & 0x43) | 0x1e00;
        ColorEffect_ConfigureAlphaBlend((void*)0x04000050, 2, 1, 9, 7);
        (*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)) = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov017_021d76e8, 0);
        ++(*reinterpret_cast<int*>(arg0->unknown_4094 + 0x124));
    } else if ((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x124)) == 1) {
        BackgroundLoader* var4 = BackgroundLoader::GetInstance();
        if (!var4->GetTaskStatus((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)))) return;
        void* var5;
        void* var6;
        unsigned int var7;
        var4->GetLoadedFileByID((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)), &var6, &var7);
        int var8 = func_02046900((Struct_02020cb8_4*)var6);
        void* var9[4];
        int var10[4];
        for (int var11 = 0; var11 < var8; ++var11) var9[var11] = func_020467f0((Struct_02020aec*)var6, var11, &var5, &var10[var11]);
        for (int var12 = 0; var12 < var8; ++var12) {
            if (var9[var12]) func_0204b174(reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094 + sizeof(Struct_ov017_021a5ad0)), var9[var12], &arg0->allocator_array_38[16], var10[var12]);
        }
        var4->RemoveTask((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)));
        (*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)) = -1;
        for (int var13 = 0; var13 < 7; ++var13) func_0205a198(&reinterpret_cast<Struct_02043368_2*>(arg0->unknown_41c8)[var13]);
        func_0205a444((char*)static_cast<Struct_02021578*>(arg0->unknown_ptr_41c4));
        static_cast<Struct_02021578*>(arg0->unknown_ptr_41c4)->unknown_50_ = 0;
        Struct_02021578* var14 = static_cast<Struct_02021578*>(arg0->unknown_ptr_41c4);
        var14->unknown_40_ = reinterpret_cast<Struct_02043368_2*>(arg0->unknown_41c8);
        var14->unknown_4c_ = 7;
        #if defined(jpn)
        (*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)) = BackgroundLoader::GetInstance()->QueueLoadFile(data_ov017_021d7b3b, 0);
#else
        (*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)) = BackgroundLoader::GetInstance()->QueueLoadFileInGP2(data_ov017_021d76fb, data_ov017_021d770c, 0);
#endif
        ++(*reinterpret_cast<int*>(arg0->unknown_4094 + 0x124));
    } else if ((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x124)) == 2) {
        BackgroundLoader* var15 = BackgroundLoader::GetInstance();
        if (!var15->GetTaskStatus((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)))) return;
        void* var16;
        void* var17;
        unsigned int var18;
        var15->GetLoadedFileByID((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)), &var17, &var18);
        int var19 = func_02046900((Struct_02020cb8_4*)var17);
        int var20;
        for (int var21 = 0; var21 < var19; ++var21) {
            void* var22 = func_020467f0((Struct_02020aec*)var17, var21, &var16, &var20);
            func_0205a528(static_cast<Struct_02021578*>(arg0->unknown_ptr_41c4), var22, var20, &arg0->allocator_array_38[16]);
        }
        var15->RemoveTask((*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)));
        (*reinterpret_cast<int*>(arg0->unknown_4094 + 0x128)) = -1;
        func_ov017_021a5ad0(reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094), 2, 0x800);
        for (int var23 = 0; var23 < 2; ++var23) {
            Struct_ov017_021a5ad0* var24 = &reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094)[var23];
            func_0204bc74(var24, 0, 0, 0, 0x20, 0x19, 0);
            func_0204b0e8((Struct_02020cb8_2*)var24, 0);
        }
        func_ov017_021a5b08(reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094), 2);
        (*reinterpret_cast<void**>(arg0->unknown_4094 + 0x120)) = arg0->allocator_array_38[16].Allocate(Enum_ov017_021a5cbc_1280);
        func_0204c7a8(&(*reinterpret_cast<Struct_0204c7a8*>(arg0->unknown_4094 + 0x40)), &arg0->allocator_array_38[16], (int)(*reinterpret_cast<void**>(arg0->unknown_4094 + 0x120)), 0x40);
        (*reinterpret_cast<Struct_0204c7a8*>(arg0->unknown_4094 + 0x40)).unknown_4_ = reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094 + sizeof(Struct_ov017_021a5ad0));
        Struct_ov017_021a5cbc_3* var25 = static_cast<Struct_ov017_021a5cbc_3*>(arg0->unknown_ptr_array_4088[2]);
        var25->unknown_98_ = reinterpret_cast<Struct_ov017_021a5ad0*>(arg0->unknown_4094);
        var25->unknown_b2_ = 2;
        func_0205cf78((Struct_0205cf78*)static_cast<Struct_ov017_021a5cbc_3*>(arg0->unknown_ptr_array_4088[2]), (Struct_0205cf78_2*)&(*reinterpret_cast<Struct_0204c7a8*>(arg0->unknown_4094 + 0x40)), 1);
        REG_BACKGROUND_0 = (REG_BACKGROUND_0 & ~3) | 2;
        REG_BACKGROUND_1 = (REG_BACKGROUND_1 & ~3) | 1;
        REG_BACKGROUND_2 = REG_BACKGROUND_2 & ~3;
        REG_BACKGROUND_3 = (REG_BACKGROUND_3 & ~3) | 3;
        REG_DISPLAY_CONTROL = (REG_DISPLAY_CONTROL & ~0x1f00) | 0x1700;
        Struct_ov017_021a5cbc_3* var26 = static_cast<Struct_ov017_021a5cbc_3*>(arg0->unknown_ptr_array_4088[2]);
        #if defined(jpn)
        int var29 = 9;
#else
        Struct_ov017_021a5cbc_2 var27 = *(const Struct_ov017_021a5cbc_2*)data_ov017_021d6a94;
        int var28 = func_0200fb08((Struct_02000c9c_8*)GameState::GetInstance());
        int var29 = var27.unknown_0_[var28 - 1];
#endif
        var26->unknown_a0_ = var29;
        var26->unknown_a2_ = 2;
        var26->unknown_a4_ = 0x20 - (var29 + 1);
        var26->unknown_a6_ = 0x15;
        var26->unknown_a8_ = 3;
        var26->unknown_aa_ = 3;
        var26->unknown_ac_ = 10;
        var26->unknown_ae_ = 11;
        var26->unknown_b1_ = 0;
        var26->unknown_b5_ = 1;
        func_0205d304(var26, data_ov017_021d7719, 0, 0, 0, 1, 0
#if !defined(jpn)
            , 0
#endif
        );
        func_0205d0e0(var26, GameState::GetInstance()->GetTickCount());
        (*reinterpret_cast<Struct_0204c7a8*>(arg0->unknown_4094 + 0x40)).unknown_c2_ = 0;
        ++(*reinterpret_cast<int*>(arg0->unknown_4094 + 0x124));
    }
}
