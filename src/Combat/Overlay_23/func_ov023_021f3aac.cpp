#include <globaldefs.h>
#include <std_library_functions.h>
#include <Filesystem/BackgroundLoader.h>
#include <Memory/SafeAllocator.h>

#define GUIDE_WINDOW_MESSAGE_WINDOW 4

struct Struct_0209fee4;
struct Struct_0209ff64;
struct Struct_0209ff6c;
struct Struct_ov023_021f1868_10;
struct Struct_020a13c4;
struct Struct_020a15bc;
struct Struct_0201099c_14;
struct Struct_0201099c_3;
struct Struct_ov023_021f1868_11;

struct Struct_ov023_021f3aac_5 {
    unsigned char unknown_0_0_ : 1;
};

struct Struct_ov023_021f3aac_6 {
    char unknown_0_[0x49c];
    Struct_ov023_021f3aac_5 unknown_49c_;
};

struct Struct_ov023_021f3aac_7 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif

    Struct_ov023_021f3aac_6* unknown_150_;
};

struct GameState {
    static GameState* GetInstance();
    Struct_ov023_021f3aac_7* GetProtagonist();
};

struct Struct_ov023_021f3aac_8 {
    char unknown_0_[0x68];
    short unknown_68_;
    short unknown_6a_[1];
};

struct Struct_ov023_021f3aac_9 {
#if defined(jpn)
    char unknown1_0_[0x15c];
#else
    char unknown_0_[0x244];
#endif

};

struct Struct_ov023_021f3aac {
    char unknown_0_[0x438];
    unsigned short unknown_438_;
};

struct Struct_ov023_021f3aac_2 {
    char unknown_0_[0x18];
};

struct Struct_ov023_021f3aac_3 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov023_021f3aac_4 {
    char unknown_0_[0x30];
    SafeAllocator unknown_30_;
#if defined(jpn)
    char unknown_44_[0xe28 - 0x44];
#else
    char unknown1_44_[0xeac - 0x44];
#endif

    int unknown_eac_;
#if defined(jpn)
    char unknown_e2c_[0x371c - 0xe2c];
#else
    char unknown_eb0_[0x3760 - 0xeb0];
#endif

#if defined(jpn)
    char unknown_3760_[0x1bf8];
#else
    char unknown_3760_[0x1af8];
#endif

    SafeAllocator unknown_5258_;
#if defined(jpn)
    char unknown_5328_[0x5778 - 0x5328];
#else
    char unknown_526c_[0x5588 - 0x526c];
#endif

    void* unknown_5588_;
    char unknown_558c_[0x55c4 - 0x558c];
    Struct_ov023_021f3aac_8* unknown_55c4_;
    void* unknown_55c8_;
    Struct_ov023_021f3aac* unknown_55cc_;
    Struct_ov023_021f3aac_9* unknown_55d0_;
    unsigned char unknown_55d4_;
    unsigned char unknown_55d5_;
    char unknown_55d6_[0x77d1 - 0x55d6];
    unsigned char unknown_77d1_;
};

extern "C" Struct_ov023_021f3aac_3* _ZZ21inline_ov023_021f4c04vE1s;
#if defined(jpn)
extern const char data_ov023_021fd533[];
extern "C" void func_020e1fc4(Struct_ov023_021f3aac_2*, SafeAllocator*, const char*, short*, unsigned short, int, int);
#endif
extern const char data_ov023_021fe316[];
extern const char data_ov023_021fe2a0[];
extern const char data_ov023_021fe2b7[];

extern "C" char* func_020421a0();
extern "C" void func_02043204(char* arg0);
extern "C" void func_ov023_021d8b6c(void* arg0);
extern "C" void func_0209fe9c(char* arg0);
extern "C" void func_0209fee4(Struct_0209fee4* arg0, SafeAllocator* arg1, int arg2, int arg3);
extern "C" void func_0209ff64(Struct_0209ff64* arg0, int arg1);
extern "C" void func_0209ff6c(Struct_0209ff6c* arg0);
extern "C" int func_ov023_021f21f4(Struct_ov023_021f1868_10* arg0);
extern "C" void func_020a13c4(Struct_020a13c4* arg0);
extern "C" void func_020a13e4(void* arg0, void* arg1, int arg2, unsigned short arg3, unsigned char arg4);
extern "C" void* func_020dfc2c(void* arg0);
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void* func_020a15bc(Struct_020a15bc* arg0, int arg1);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void func_ov023_021f222c(Struct_ov023_021f1868_11* arg0);
extern "C" void func_ov023_021f2304(void* arg0, char* arg1);
extern "C" void func_ov023_021f2348(void* arg0, int arg1);

extern "C" {
void __clear(void* arg0, unsigned long arg1);
void func_ov023_021f1818(void* arg0, int arg1);
void func_ov023_021d8af8(void* arg0);
int func_ov023_021ed724(void* arg0, short* arg1, int arg2);
void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);
void func_020e0028(Struct_ov023_021f3aac_2* arg0, SafeAllocator* arg1, void* arg2, unsigned int arg3, short* arg4, unsigned short arg5);
void func_ov023_021f229c(Struct_ov023_021f3aac_9* arg0, void* arg1);
void func_ov023_021eb138(Struct_ov023_021f3aac* arg0, int arg1);
void func_ov023_021eb080(Struct_ov023_021f3aac* arg0, SafeAllocator* arg1);
void func_ov023_021eb564(Struct_ov023_021f3aac* arg0, Struct_ov023_021f3aac_9* arg1, int arg2);
void func_ov023_021eb26c(Struct_ov023_021f3aac* arg0);
}

// USA: func_ov023_021f3aac
extern "C" ARM int func_ov023_021f3aac(Struct_ov023_021f3aac_4* arg0)
{
    Struct_ov023_021f3aac_3* var0 = _ZZ21inline_ov023_021f4c04vE1s;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    int var2 = var0->unknown_0_;
    if (var2 == 0)
    {
        func_02043204(func_020421a0());
        if (arg0->unknown_5588_ != NULL)
        {
            func_ov023_021f1818(arg0->unknown_3760_, 1);
            func_ov023_021d8b6c(arg0->unknown_5588_);
            func_ov023_021d8af8(arg0->unknown_5588_);
            arg0->unknown_5588_ = NULL;
        }
        arg0->unknown_77d1_ = 1;
        arg0->unknown_55c4_ = NULL;
        var0->unknown_4_ = var1->QueueLoadFile(data_ov023_021fe316, NULL);
        var0->unknown_0_++;
    }
    else if (var2 == 1)
    {
        BackgroundLoader* var3 = BackgroundLoader::GetInstance();
        if (var3->GetTaskStatus(var0->unknown_4_))
        {
            unsigned int var4;
            void* var5;
            var3->GetLoadedFileByID(var0->unknown_4_, &var5, &var4);
            arg0->unknown_30_.Reset();
            void* var6 = arg0->unknown_30_.Allocate(var4);
            memcpy(var6, var5, var4);
            arg0->unknown_55c4_ = (Struct_ov023_021f3aac_8*)arg0->unknown_30_.Allocate(0xd0);
            func_0209fe9c((char*)arg0->unknown_55c4_);
            func_0209fee4((Struct_0209fee4*)arg0->unknown_55c4_, &arg0->unknown_30_, (int)var6, var4);
            var3->RemoveTask(var0->unknown_4_);
            var0->unknown_4_ = -1;
            func_0209ff64((Struct_0209ff64*)arg0->unknown_55c4_, 100);
            var0->unknown_0_++;
        }
    }
    else if (var2 == 2)
    {
        func_0209ff6c((Struct_0209ff6c*)arg0->unknown_55c4_);
        if (func_ov023_021f21f4((Struct_ov023_021f1868_10*)arg0->unknown_55c4_))
            var0->unknown_0_++;
    }
    else if (var2 == 3)
    {
        short* var7;
#if defined(jpn)
        Struct_ov023_021f3aac_9* var8;
#endif
        int var9;
        int var10 = arg0->unknown_55c4_->unknown_68_;
        if (var10 > 0)
        {
            SafeAllocator* var11 = &arg0->unknown_5258_;
            var11->Reset();
            var10 = arg0->unknown_55c4_->unknown_68_;
            var7 = (short*)var11->Allocate(var10 * 2);
            for (int var12 = 0; var12 < var10; var12++)
                var7[var12] = arg0->unknown_55c4_->unknown_6a_[var12];
            arg0->unknown_30_.Reset();
            arg0->unknown_55c4_ = NULL;
            arg0->unknown_55c8_ = arg0->unknown_30_.Allocate(0x14);
            func_020a13c4((Struct_020a13c4*)arg0->unknown_55c8_);
            func_020a13e4(arg0->unknown_55c8_, &arg0->unknown_30_, 0, 0, 2);
            arg0->unknown_55d5_ = func_ov023_021ed724(arg0->unknown_55c8_, var7, var10) & 1 ? 1 : 0;
            Struct_ov023_021f3aac_7* var13 = GameState::GetInstance()->GetProtagonist();
            Struct_ov023_021f3aac_2 var14;
            func_020dfc2c(&var14);
            func_020dfc40((Struct_0201099c_14*)&var14);
#if defined(jpn)
            func_020e1fc4(&var14, &arg0->unknown_30_, data_ov023_021fd533, var7, (unsigned short)var10, var13->unknown_150_->unknown_49c_.unknown_0_0_, 1);
            var8 = (Struct_ov023_021f3aac_9*)var11->Allocate(var10 * sizeof(void*));
            for (var9 = 0; var9 < var10; var9++)
            {
                void* var15 = func_020a15bc((Struct_020a15bc*)arg0->unknown_55c8_, var7[var9]);
                if (var15 == NULL)
                    continue;
                const char* var16 = func_020e0434((Struct_0201099c_3*)&var14, var7[var9]);
                if (var16 == NULL)
                    continue;
                func_ov023_021f222c((Struct_ov023_021f1868_11*)&var8[var9]);
                func_ov023_021f229c(&var8[var9], var15);
                func_ov023_021f2304(&var8[var9], (char*)var16);
            }
            arg0->unknown_30_.Reset();
            arg0->unknown_55c8_ = NULL;
            arg0->unknown_55d0_ = (Struct_ov023_021f3aac_9*)arg0->unknown_30_.Allocate(var10 * sizeof(Struct_ov023_021f3aac_9));
            for (var9 = 0; var9 < var10; var9++)
            {
                func_ov023_021f222c((Struct_ov023_021f1868_11*)&arg0->unknown_55d0_[var9]);
                func_ov023_021f229c(&arg0->unknown_55d0_[var9], &var8[var9]);
                func_ov023_021f2304(&arg0->unknown_55d0_[var9], (char*)&var8[var9] + 0xc);
            }

#else
            BackgroundLoader::AddLockGlobal();
            unsigned int var17 = 0;
            char var18[0x40];
            __clear(var18, sizeof(var18));
            char var19[0x20];
            __clear(var19, sizeof(var19));
            sprintf(var18, data_ov023_021fe2a0, var13->unknown_150_->unknown_49c_.unknown_0_0_);
            sprintf(var19, data_ov023_021fe2b7, var13->unknown_150_->unknown_49c_.unknown_0_0_);
            void* var20 = ExtractFileFromGP2(var18, var19, &var17);
            if (var20 != NULL)
                func_020e0028(&var14, &arg0->unknown_30_, var20, var17, var7, (unsigned short)var10);
            BackgroundLoader::RemoveLockGlobal();
            arg0->unknown_55d0_ = (Struct_ov023_021f3aac_9*)arg0->unknown_30_.Allocate(var10 * sizeof(Struct_ov023_021f3aac_9));
            for (var9 = 0; var9 < var10; var9++)
            {
                void* var21 = func_020a15bc((Struct_020a15bc*)arg0->unknown_55c8_, var7[var9]);
                if (var21 == NULL)
                    continue;
                const char* var22 = func_020e0434((Struct_0201099c_3*)&var14, var7[var9]);
                if (var22 == NULL)
                    continue;
                func_ov023_021f222c((Struct_ov023_021f1868_11*)&arg0->unknown_55d0_[var9]);
                func_ov023_021f229c(&arg0->unknown_55d0_[var9], var21);
                func_ov023_021f2304(&arg0->unknown_55d0_[var9], (char*)var22);
            }
            arg0->unknown_55c8_ = NULL;

#endif
            arg0->unknown_55d4_ = var10;
            var11->Reset();
            var0->unknown_0_++;
        }
        else if (var10 == 0)
        {
            arg0->unknown_30_.Reset();
            arg0->unknown_55c4_ = NULL;
            arg0->unknown_77d1_ = 0;
            return 0x10;
        }
    }
    else if (var2 == 4)
    {
        arg0->unknown_55cc_ = (Struct_ov023_021f3aac*)arg0->unknown_30_.Allocate(0x44c);
        func_ov023_021eb138(arg0->unknown_55cc_, 2);
        func_ov023_021eb080(arg0->unknown_55cc_, &arg0->unknown_30_);
        func_ov023_021eb564(arg0->unknown_55cc_, arg0->unknown_55d0_, arg0->unknown_55d4_);
        func_ov023_021f2348(arg0->unknown_55cc_, arg0->unknown_55d5_);
        var0->unknown_0_++;
    }
    else if (var2 == 5)
    {
        if (arg0->unknown_55cc_->unknown_438_ & GUIDE_WINDOW_MESSAGE_WINDOW)
            var0->unknown_0_ = var2 + 1;
    }
    else if (var2 == 6)
    {
        func_ov023_021eb26c(arg0->unknown_55cc_);
        arg0->unknown_30_.Reset();
        arg0->unknown_55cc_ = NULL;
        arg0->unknown_55d0_ = NULL;
        arg0->unknown_55d4_ = 0;
        arg0->unknown_55d5_ = 0;
        arg0->unknown_77d1_ = 0;
        return 0x10;
    }
    return arg0->unknown_eac_;
}
