#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_0216aaec_2400 = 0x800, Enum_ov004_0216aaec_4 = 9 };
#define func_02046608 func_020474a8
#else
enum { Enum_ov004_0216aaec_2400 = 0x960, Enum_ov004_0216aaec_4 = 4 };
#endif

#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov004_02170138 {
    int unknown_0_[7];
};

struct Struct_ov004_0216aaec {
    char unknown_0_[0x8c];
    unsigned char unknown_8c_[0x234];
};

struct Struct_ov004_0216aaec_2 {
    char unknown_0_[4];
    SafeAllocator unknown_4_;
};

struct Struct_ov004_0216aaec_3 {
    char unknown_0_[0x20];
    void* unknown_20_;
};

struct Struct_02072a68_2;
struct Struct_020465c0;
struct Struct_02021410;
struct Struct_020213fc;

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" int func_0201081c(char* arg0);
extern "C" struct Struct_ov004_0216aaec_2* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" struct Struct_ov004_0216aaec_3* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" struct Struct_02072a68_2* func_ov023_021fa598(void* arg0);
extern "C" struct Struct_020465c0* func_020421a0(void);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* arg0);
extern "C" void func_02046380(struct Struct_020465c0* arg0);
extern "C" void func_020465c0(struct Struct_020465c0* arg0, int arg1, int arg2);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
#if defined(jpn)
extern "C" void func_02046608(struct Struct_020465c0* arg0, int arg1, void* arg2, void* arg3);
#else
extern "C" void func_02046608(struct Struct_020465c0* arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
#endif
extern "C" void func_ov023_021f8960(char* arg0, short arg1, unsigned short arg2);
extern "C" void func_02021410(struct Struct_02021410* arg0, int arg1, int arg2);
extern "C" void func_020213fc(struct Struct_020213fc* arg0, int arg1);

extern struct Struct_ov004_02170138 data_ov004_02170138;

// USA: func_ov004_0216aaec
extern "C" ARM int func_ov004_0216aaec(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov004_0216aaec* var1 = (struct Struct_ov004_0216aaec*)func_0205ec34();
    struct Struct_ov004_02170138 var2 = data_ov004_02170138;
    unsigned char var3 = 0;
    int var4;
    for (var4 = 0; var4 < 7; var4++) {
        if (func_0206dfb0((int)var1, var1->unknown_8c_, var2.unknown_0_[var4])) {
            var3++;
        }
    }
    int var5 = func_0201081c((char*)var0);

    struct Struct_ov004_0216aaec_2* var6 = func_ov011_021845f8(arg0, 4);
    if (var6 == 0) {
        return 0;
    }
    var6->unknown_4_.GetSizeWithLargestBlockRemoved();
#if defined(jpn)
    void* var10 = var6->unknown_4_.Allocate(4);
#endif

    struct Struct_ov004_0216aaec_3* var7 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x192);
    if (var7 == 0) {
        return 0;
    }
    if (func_ov023_021f6f10(var7) != 4) {
        return 0;
    }
    struct Struct_02072a68_2* var8 = func_ov023_021fa598(var7);
    struct Struct_020465c0* var9 = func_020421a0();
#if !defined(jpn)
    void* var10 = var6->unknown_4_.Allocate(4);
#endif
    if (func_0202c540(func_0202ae18()) != 0) {
        var5 = 1000;
    }
    memset(var10, 0, Enum_ov004_0216aaec_2400);
    func_02046380(var9);
    func_020465c0(var9, 0, var3);
#if defined(jpn)
    func_02046608(var9, 0xc, func_02072a68(var8, (short)var5), var10);
#else
    func_02046608(var9, 0xc, func_02072a68(var8, (short)var5), var10, 0xd7, 0, 1);
#endif

    struct Struct_ov004_0216aaec_3* var11 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x32);
    if (var11 != 0) {
        var11->unknown_20_ = var10;
    }

    struct Struct_ov004_0216aaec_3* var12 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0xc8);
    if (var12 != 0 && func_ov023_021f6f10(var12) == 6) {
        func_ov023_021f8960((char*)var12, 0, Enum_ov004_0216aaec_4);
    }

    struct Struct_02021410* var13 = (struct Struct_02021410*)GetGameResources()->unknown_ptr_36d0;
    func_02021410(var13, 1, 0);
    func_020213fc((struct Struct_020213fc*)var13, 0);
    return 0;
}
