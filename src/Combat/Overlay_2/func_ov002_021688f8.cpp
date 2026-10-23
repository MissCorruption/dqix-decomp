#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include <globaldefs.h>

#if defined(jpn)
#define REGION_VALUE(j, u) (j)
#else
#define REGION_VALUE(j, u) (u)
#endif

struct Struct_020a13c4;
struct Struct_020a15bc;
struct Struct_0201099c_14;
struct Struct_ov002_021688f8 {
    unsigned int unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_;
    char unknown_c_[0x38];
    char unknown_44_[REGION_VALUE(0x118, 0x200)];
};
struct Struct_ov002_021688f8_2 {
    unsigned char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};
struct Struct_0201099c_3;
extern "C" int func_ov002_02168c00(unsigned char *arg0);
extern "C" void func_020a13c4(struct Struct_020a13c4 *arg0);
extern "C" void func_020a13e4(void *arg0, void *arg1, int arg2, unsigned short arg3, unsigned char arg4);
extern "C" void *func_020a15bc(struct Struct_020a15bc *arg0, int arg1);
extern "C" void *func_020dfc2c(void *arg0);
extern "C" void func_020dfc40(struct Struct_0201099c_14 *arg0);
extern "C" void func_ov002_02168c38(struct Struct_ov002_021688f8 *arg0);
extern "C" void func_ov002_02168d10(unsigned char *arg0, int arg1);
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" void *ExtractFileFromGP2(const char *arg0, const char *arg1, unsigned int *arg2);
extern "C" int func_ov023_021ed724(void *arg0, short *arg1, int arg2);
extern "C" void func_020e0028(void *arg0, void *arg1, void *arg2, unsigned int arg3, short *arg4, unsigned short arg5);
extern "C" void func_ov002_02168ca8(unsigned char *arg0, void *arg1);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" char data_ov002_0216d326[];
extern "C" char data_ov002_0216d33d[];

#if defined(jpn)
extern "C" const char data_ov002_0216dab4[];
extern "C" int func_020e1fc4(void* arg0, SafeAllocator* arg1, const char* arg2,
    short* arg3, unsigned short arg4, short arg5, bool arg6);
#endif

// USA: func_ov002_021688f8; JPN: func_ov002_021691dc
extern "C" ARM void func_ov002_021688f8(char *arg0) {
    char var0[0x18];
#if !defined(jpn)
    char var1[0x40];
    char var2[0x20];
    unsigned int var3;
#endif
    short *var4;
    unsigned char *var5;
    int var6;
    int var7;
    GameState *var8 = GameState::GetInstance();
    BackgroundLoader::GetInstance();
    if (!func_ov002_02168c00(*(unsigned char **) (arg0 + 0x2000 + REGION_VALUE(0x290, 0x460)))) return;
    var7 = *(short *) (*(char **) (arg0 + 0x2000 + REGION_VALUE(0x290, 0x460)) + 0x68);
    if (var7 > 0) {
        var4 = (short *) ((SafeAllocator *) (arg0 + REGION_VALUE(0x3c8, 0x64) + REGION_VALUE(0x400, 0x800)))->Allocate(var7 * 2);
        for (int var9 = 0; var9 < var7; var9++) {
            var4[var9] = *(short *) (*(char **) (arg0 + 0x2000 + REGION_VALUE(0x290, 0x460)) + var9 * 2 + 0x6a);
        }
        *(void **) (arg0 + 0x2000 + REGION_VALUE(0x290, 0x460)) = NULL;
        ((SafeAllocator *) (arg0 + REGION_VALUE(0x38c, 0x28) + REGION_VALUE(0x400, 0x800)))->Reset();
        *(void **) (arg0 + 0x2000 + REGION_VALUE(0x294, 0x464)) = ((SafeAllocator *) (arg0 + REGION_VALUE(0x38c, 0x28) + REGION_VALUE(0x400, 0x800)))->Allocate(0x14);
        func_020a13c4((struct Struct_020a13c4 *) *(void **) (arg0 + 0x2000 + REGION_VALUE(0x294, 0x464)));
        func_020a13e4(*(void **) (arg0 + 0x2000 + REGION_VALUE(0x294, 0x464)), arg0 + REGION_VALUE(0x38c, 0x28) + REGION_VALUE(0x400, 0x800), 0, 0, 4);
        *(unsigned char *) (arg0 + 0x2000 + REGION_VALUE(0x2a1, 0x471)) =
            (func_ov023_021ed724(*(void **) (arg0 + 0x2000 + REGION_VALUE(0x294, 0x464)), var4, var7) & 1) ? 1 : 0;
        char *var10 = (char *) var8->GetProtagonist();
        func_020dfc2c(var0);
        func_020dfc40((struct Struct_0201099c_14 *) var0);
#if defined(jpn)
        func_020e1fc4(var0, (SafeAllocator*)(arg0 + 0x78c), data_ov002_0216dab4, var4,
            (unsigned short)var7, (*(struct Struct_ov002_021688f8_2**)(var10 + 0x144))->unknown_49c_0_, true);
#else
        BackgroundLoader::AddLockGlobal();
        var3 = 0;
        __clear(var1, 0x40);
        __clear(var2, 0x20);
        sprintf(var1, data_ov002_0216d326, (*(struct Struct_ov002_021688f8_2 **) (var10 + 0x150))->unknown_49c_0_);
        sprintf(var2, data_ov002_0216d33d, (*(struct Struct_ov002_021688f8_2 **) (var10 + 0x150))->unknown_49c_0_);
        void *var11 = ExtractFileFromGP2(var1, var2, &var3);
        if (var11 != NULL) {
            func_020e0028(var0, arg0 + REGION_VALUE(0x38c, 0x28) + REGION_VALUE(0x400, 0x800), var11, var3, var4, var7);
        }
        BackgroundLoader::RemoveLockGlobal();
#endif
        var5 = (unsigned char *) ((SafeAllocator *) (arg0 + REGION_VALUE(0x3c8, 0x64) + REGION_VALUE(0x400, 0x800)))->Allocate(50 * sizeof(Struct_ov002_021688f8));
        for (var6 = 0; var6 < var7; var6++) {
            func_ov002_02168c38((struct Struct_ov002_021688f8 *) (var5 + var6 * sizeof(Struct_ov002_021688f8)));
            void *var12 =
                func_020a15bc(*(struct Struct_020a15bc **) (arg0 + 0x2000 + REGION_VALUE(0x294, 0x464)), var4[var6]);
            if (var12 == NULL) continue;
            int var13 = func_020e0434((struct Struct_0201099c_3 *) var0, var4[var6]);
            if (var13 == 0) continue;
            func_ov002_02168ca8(var5 + var6 * sizeof(Struct_ov002_021688f8), var12);
            func_ov002_02168d10(var5 + var6 * sizeof(Struct_ov002_021688f8), var13);
        }
        *(void **) (arg0 + 0x2000 + REGION_VALUE(0x294, 0x464)) = NULL;
        ((SafeAllocator *) (arg0 + REGION_VALUE(0x38c, 0x28) + REGION_VALUE(0x400, 0x800)))->Reset();
        *(void **) (arg0 + 0x2000 + REGION_VALUE(0x29c, 0x46c)) = ((SafeAllocator *) (arg0 + REGION_VALUE(0x38c, 0x28) + REGION_VALUE(0x400, 0x800)))->Allocate(var7 * sizeof(Struct_ov002_021688f8));
        for (int var14 = 0; var14 < var7; var14++) {
            func_ov002_02168c38((struct Struct_ov002_021688f8 *) (*(unsigned char **) (arg0 + 0x2000 + REGION_VALUE(0x29c, 0x46c)) + var14 * sizeof(Struct_ov002_021688f8)));
            func_ov002_02168ca8(*(unsigned char **) (arg0 + 0x2000 + REGION_VALUE(0x29c, 0x46c)) + var14 * sizeof(Struct_ov002_021688f8), var5 + var14 * sizeof(Struct_ov002_021688f8));
            func_ov002_02168d10(*(unsigned char **) (arg0 + 0x2000 + REGION_VALUE(0x29c, 0x46c)) + var14 * sizeof(Struct_ov002_021688f8),
                                                 (int) (var5 + var14 * sizeof(Struct_ov002_021688f8) + 0xc));
        }
        *(unsigned char *) (arg0 + 0x2000 + REGION_VALUE(0x2a0, 0x470)) = var7;
        *(int *) (arg0 + 0x1000 + REGION_VALUE(0xa88, 0xbc0)) += 1;
    } else {
        *(void **) (arg0 + 0x2000 + REGION_VALUE(0x290, 0x460)) = NULL;
        *(int *) (arg0 + 0x1000 + REGION_VALUE(0xa88, 0xbc0))   = 100;
    }
}
