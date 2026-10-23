#include <globaldefs.h>
#include <Filesystem/BackgroundLoader.h>
#include <GameState/GameState.h>
#include <Memory/SafeAllocator.h>
#include <NitroSDK/Cache.h>
#include <NitroSDK/LoadToVRAM.h>
#include <std_library_functions.h>
#include "Resource/Brightness.h"

#define REG_DISPCNT (*(volatile unsigned int*)0x04000000)

struct Struct_0205d6a0;
struct Struct_02074bd0;
struct Struct_0204b010;
struct Struct_02020cb8_3;

extern "C" void func_ov023_021dc354(void* arg0);
extern "C" void func_020c5588(int arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" unsigned int* func_0200fb8c(int* arg0);
extern "C" void func_0205d6a0(Struct_0205d6a0* arg0, int arg1);
extern "C" void func_0205d048(void* arg0);
extern "C" void func_02074bd0(Struct_02074bd0* arg0);
extern "C" void func_0204b010(Struct_0204b010* arg0, void* arg1);
extern "C" void func_0204b04c(void* arg0, int arg1);
extern "C" void func_0204b088(void* arg0, int arg1);
extern "C" void func_0204afb4(Struct_02020cb8_3* arg0);

struct Struct_ov005_02153954 {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_[8];
    SafeAllocator unknown_c8_[16];
    SafeAllocator unknown_208_;
    SafeAllocator unknown_21c_;
    SafeAllocator unknown_230_;
    SafeAllocator unknown_244_;
    SafeAllocator unknown_258_;
    SafeAllocator unknown_26c_;
    SafeAllocator unknown_280_;
    char unknown_294_[0xe10 - 0x294];
    unsigned short* unknown_e10_;
#if defined(jpn)
    char unknown_e14_[0xe68 - 0xe14];
#else
    char unknown1_e14_[0xe6c - 0xe14];
#endif
    char unknown_e6c_[0x10];
    char unknown_e7c_[4];
    int unknown_e80_;
    char unknown_e84_[0xee4 - 0xe84];
    char unknown_ee4_[0x1244 - 0xee4];
#if defined(jpn)
    char unknown_1244_[0x3d00 - 0x1240];
#else
    char unknown_1244_[0x3d88 - 0x1244];
#endif
    char* unknown_3d88_;
    char* unknown_3d8c_;
    char* unknown_3d90_;
    char* unknown_3d94_;
    char unknown_3d98_[0x3dc2 - 0x3d98];
    unsigned short unknown_3dc2_;
    char unknown_3dc4_[4];
    int unknown_3dc8_;
};

// USA: func_ov005_02154198
extern "C" ARM void func_ov005_02154198(Struct_ov005_02153954* arg0) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_3dc8_ >= 0) {
        var0->RemoveTask(arg0->unknown_3dc8_);
        arg0->unknown_3dc8_ = -1;
    }
    func_ov023_021dc354(arg0->unknown_1244_);
    func_020c5588(arg0->unknown_3dc2_, 0x10, 0x7fff, 0, 0);
    GameState* var1 = GameState::GetInstance();
    ClearFlags04((GameResources*)(func_0200fb8c((int*)var1)), 0x800);
    REG_DISPCNT = (REG_DISPCNT & ~0x1f00) | (arg0->unknown_e80_ << 8);
    func_0205d6a0((Struct_0205d6a0*)arg0->unknown_ee4_, 1);
    func_0205d048(arg0->unknown_ee4_);
    func_02074bd0((Struct_02074bd0*)arg0->unknown_e6c_);
    func_0204b010((Struct_0204b010*)arg0->unknown_e84_, 0);
    func_0204b04c(arg0->unknown_e84_, 0);
    func_0204b088(arg0->unknown_e84_, 0);
    func_0204afb4((Struct_02020cb8_3*)arg0->unknown_e84_);
    if (arg0->unknown_3d88_ != NULL) {
        memset(arg0->unknown_3d88_, 0, 0x20);
        CleanInvalidateCacheRange(arg0->unknown_3d88_, 0x20);
        LoadToMainBG1CharacterData(arg0->unknown_3d88_, 0, 0x20);
    }
    arg0->unknown_14_.Destroy();
    for (int var2 = 0; var2 < 8; var2++)
        arg0->unknown_28_[var2].Destroy();
    for (int var3 = 0; var3 < 16; var3++)
        arg0->unknown_c8_[var3].Destroy();
    arg0->unknown_208_.Destroy();
    arg0->unknown_21c_.Destroy();
    arg0->unknown_0_.Destroy();
    arg0->unknown_230_.Destroy();
    arg0->unknown_244_.Destroy();
    arg0->unknown_258_.Destroy();
    arg0->unknown_26c_.Destroy();
    arg0->unknown_280_.Destroy();
    arg0->unknown_3d88_ = NULL;
    arg0->unknown_3d8c_ = NULL;
    arg0->unknown_3d90_ = NULL;
    arg0->unknown_3d94_ = NULL;
    arg0->unknown_e10_ = NULL;
}
