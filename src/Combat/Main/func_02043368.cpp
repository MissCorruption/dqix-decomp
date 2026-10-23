#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"

struct Struct_02043368_2;
struct Struct_02043368;
struct Struct_02020cb8_4;
struct Struct_02020aec;

extern "C" void func_0205a444(char* arg0);
extern "C" void func_0205a198(struct Struct_02043368_2* arg0);
extern "C" void func_0205a234(struct Struct_02043368* arg0);
extern "C" int func_02046900(struct Struct_02020cb8_4* arg0);
extern "C" void* func_020467f0(struct Struct_02020aec* arg0, int arg1, void** arg2, int* arg3);
extern "C" void func_0205a528(void* arg0, void* arg1, int arg2, void* arg3);

extern char data_020f007f;
extern char data_020f0093;

struct Struct_02043368_3 {
    char unknown_0_[0x3c];
    struct Struct_02043368* unknown_3c_;
    void* unknown_40_;
    char unknown_44_[8];
    unsigned short unknown_4c_;
    char unknown_4e_[2];
    unsigned char unknown_50_;
};

struct Struct_02043368_4 {
#if defined(jpn)
    char unknown_0_[0x220];
#else
    char unknown1_0_[0x2d0];
#endif
    int unknown_2d0_;
    SafeAllocator* unknown_2d4_;
    struct Struct_02043368_3* unknown_2d8_;
    char* unknown_2dc_;
    struct Struct_02043368* unknown_2e0_;
    unsigned short unknown_2e4_;
    char unknown_2e6_[1];
    unsigned char unknown_2e7_;
};

// USA: func_02043368
extern "C" ARM void func_02043368(struct Struct_02043368_4* arg0) {
    if (arg0->unknown_2d4_ == 0) {
        return;
    }
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();

    if (arg0->unknown_2e7_ == 0) {
        if (arg0->unknown_2d8_ != 0) {
            return;
        }
        GrottoStruct* var1 = GameState::GetInstance()->GetGrottoStruct();
        if (var1 != 0 && var1->unknown_0[0] != 0 && var1->unknown_0[2] == 0) {
            return;
        }
#if defined(jpn)
        arg0->unknown_2d0_ = var0->QueueLoadFile(&data_020f0093, 0);
#else
        arg0->unknown_2d0_ = var0->QueueLoadFileInGP2(&data_020f007f, &data_020f0093, 0);
#endif
        arg0->unknown_2e7_++;
        return;
    }

    if (arg0->unknown_2e7_ == 1) {
        if (var0->GetTaskStatus(arg0->unknown_2d0_) == 0) {
            return;
        }
        arg0->unknown_2d4_->Reset();
        arg0->unknown_2d8_ = (struct Struct_02043368_3*)arg0->unknown_2d4_->Allocate(0x54);
        arg0->unknown_2dc_ = (char*)arg0->unknown_2d4_->Allocate(0xf0);
        arg0->unknown_2e0_ = (struct Struct_02043368*)arg0->unknown_2d4_->Allocate(8);

        if (arg0->unknown_2d8_ != 0 && arg0->unknown_2dc_ != 0 && arg0->unknown_2e0_ != 0) {
            func_0205a444((char*)arg0->unknown_2d8_);
            for (unsigned short var2 = 0; var2 < 6; var2++) {
                func_0205a198((struct Struct_02043368_2*)(arg0->unknown_2dc_ + var2 * 0x28));
            }
            func_0205a234(arg0->unknown_2e0_);
            arg0->unknown_2d8_->unknown_50_ = 0;
            {
                struct Struct_02043368_3* var3 = arg0->unknown_2d8_;
                var3->unknown_40_ = arg0->unknown_2dc_;
                var3->unknown_4c_ = 6;
            }
            arg0->unknown_2d8_->unknown_3c_ = arg0->unknown_2e0_;
            arg0->unknown_2e4_ = 0;

            void* var4;
            void* var5;
            unsigned int var6;
            int var7;
            var0->GetLoadedFileByID(arg0->unknown_2d0_, &var5, &var6);
            int var8 = func_02046900((struct Struct_02020cb8_4*)var5);
            for (int var9 = 0; var9 < var8; var9++) {
                void* var10 = func_020467f0((struct Struct_02020aec*)var5, var9, &var4, &var7);
                func_0205a528(arg0->unknown_2d8_, var10, var7, arg0->unknown_2d4_);
            }
        }

        var0->RemoveTask(arg0->unknown_2d0_);
        arg0->unknown_2d0_ = -1;
        arg0->unknown_2e7_++;
        return;
    }

    if (arg0->unknown_2e7_ == 2) {
        if (arg0->unknown_2d8_ != 0 && arg0->unknown_2e0_ != 0) {
            return;
        }
        arg0->unknown_2d8_ = 0;
        arg0->unknown_2dc_ = 0;
        arg0->unknown_2e0_ = 0;
        arg0->unknown_2e4_ = 0;
        arg0->unknown_2d0_ = -1;
        arg0->unknown_2e7_ = 0;
    }
}
