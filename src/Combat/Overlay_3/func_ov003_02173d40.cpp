#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02173d40_216 = 0xd4 };
enum { Enum_ov003_02173d40_250 = 0x108 };
enum { Enum_ov003_02173d40_268 = 0x11a };
enum { Enum_ov003_02173d40_288 = 0x12c };
enum { Enum_ov003_02173d40_296 = 0x134 };
enum { Enum_ov003_02173d40_300 = 0x138 };
enum { Enum_ov003_02173d40_304 = 0x13c };
enum { Enum_ov003_02173d40_388 = 0x190 };
enum { Enum_ov003_02173d40_448 = 0x1cc };
enum { Enum_ov003_02173d40_456 = 0x1d4 };
enum { Enum_ov003_02173d40_2494 = 0x7ee };
enum { Enum_ov003_02173d40_728 = 0x228 };
enum { Enum_ov003_02173d40_732 = 0x22c };
enum { Enum_ov003_02173d40_736 = 0x230 };
#else
enum { Enum_ov003_02173d40_216 = 0xd8 };
enum { Enum_ov003_02173d40_250 = 0xfa };
enum { Enum_ov003_02173d40_268 = 0x10c };
enum { Enum_ov003_02173d40_288 = 0x120 };
enum { Enum_ov003_02173d40_296 = 0x128 };
enum { Enum_ov003_02173d40_300 = 0x12c };
enum { Enum_ov003_02173d40_304 = 0x130 };
enum { Enum_ov003_02173d40_388 = 0x184 };
enum { Enum_ov003_02173d40_448 = 0x1c0 };
enum { Enum_ov003_02173d40_456 = 0x1c8 };
enum { Enum_ov003_02173d40_2494 = 0x9be };
enum { Enum_ov003_02173d40_728 = 0x2d8 };
enum { Enum_ov003_02173d40_732 = 0x2dc };
enum { Enum_ov003_02173d40_736 = 0x2e0 };
#endif
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Brightness.h"

extern "C" int func_020421a0(void);
extern "C" void* func_020d6c00(void);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
struct Struct_0205a244;
extern "C" void func_0205a244(struct Struct_0205a244* arg0);
extern "C" void func_0205a494(void* arg0);
extern "C" void func_020a64e8(void* arg0);
struct Struct_02074bd0;
extern "C" void func_02074bd0(struct Struct_02074bd0* arg0);
struct Struct_02074bf4;
extern "C" void func_02074bf4(struct Struct_02074bf4* arg0);
struct Struct_020727d8 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};
extern "C" void func_020727ec(struct Struct_020727d8* arg0);
void CleanCacheRange(const void* addr, unsigned int size);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToMainBG1CharacterData(const void* src, unsigned int offset, unsigned int size);
extern "C" void* GetMainBG1ScreenBase(void);
unsigned long long GetCurrentTimestamp(void);

struct Struct_ov003_02173d40 {
    unsigned char unknown_0_[Enum_ov003_02173d40_216];
    unsigned char unknown_d8_[Enum_ov003_02173d40_250 - Enum_ov003_02173d40_216];
    unsigned char unknown_fa_[Enum_ov003_02173d40_268 - Enum_ov003_02173d40_250];
    unsigned char unknown_10c_[Enum_ov003_02173d40_288 - Enum_ov003_02173d40_268];
    int unknown_120_;
    int unknown_124_;
    unsigned char unknown_128_[Enum_ov003_02173d40_300 - Enum_ov003_02173d40_296];
    struct Struct_0205a244* unknown_12c_;
    unsigned char unknown_130_[Enum_ov003_02173d40_388 - Enum_ov003_02173d40_304];
    SafeAllocator unknown_184_[3];
    unsigned char unknown_1c0_[Enum_ov003_02173d40_456 - Enum_ov003_02173d40_448];
    struct Struct_020727d8 unknown_1c8_[3];
};

// USA: func_ov003_02173d40
extern "C" ARM void func_ov003_02173d40(Struct_ov003_02173d40* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    unsigned char* var2 = (unsigned char*)func_020421a0();
    func_020466f4((struct Struct_02038598_4*)func_020d6c00(), 0x1000);
    var2[0x1000 + Enum_ov003_02173d40_2494] = 0;
    func_0205a244(arg0->unknown_12c_);
    func_0205a494(arg0->unknown_130_);
    func_020a64e8(arg0->unknown_d8_);
    *(volatile int*)0x4001010 = 0;
    func_02074bd0((struct Struct_02074bd0*)arg0->unknown_fa_);
    func_02074bf4((struct Struct_02074bf4*)arg0->unknown_10c_);

    volatile unsigned int* var3 = (volatile unsigned int*)0x4000000;
    *var3 = (*var3 & ~0x1f00) | (arg0->unknown_120_ << 8);
    volatile unsigned int* var4 = (volatile unsigned int*)0x4001000;
    *var4 = (*var4 & ~0x1f00) | (arg0->unknown_124_ << 8);

    ClearFlags00(var1, 4);
    ClearFlags04(var1, 0x81e);
    func_020727ec(&arg0->unknown_1c8_[0]);
    func_020727ec(&arg0->unknown_1c8_[1]);
    func_020727ec(&arg0->unknown_1c8_[2]);
    arg0->unknown_184_[0].Destroy();
    arg0->unknown_184_[1].Destroy();
    arg0->unknown_184_[2].Destroy();

    unsigned char var5[0x20];
    memset(var5, 0, 0x20);
    CleanCacheRange(var5, 0x20);
    CleanInvalidateCacheRange(var5, 0x20);
    LoadToMainBG1CharacterData(var5, 0, 0x20);
    memset(GetMainBG1ScreenBase(), 0, 0x800);

    *(int*)(var2 + Enum_ov003_02173d40_728) = 0;
    *(int*)(var2 + Enum_ov003_02173d40_732) = 0;
    *(int*)(var2 + Enum_ov003_02173d40_736) = 0;
    var0->mainTimestamp_ = GetCurrentTimestamp();
    var0->altTimestamp_ = GetCurrentTimestamp();
}
