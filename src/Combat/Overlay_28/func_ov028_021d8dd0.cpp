#if defined(jpn)
#define R(j,u) (j)
#define data_ov001_02164ca4 data_ov001_02166270
#define data_ov028_021d9aa0 data_ov028_021da400
#define func_ov014_02188330 func_ov014_02189234
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_02191f04 func_ov015_02192a48
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Cache.h"
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void* func_0200fb8c(int*);
extern "C" void func_020dc2bc();
extern "C" void func_02074af4(void*);
struct GameResources;
void SetBrightness(GameResources*, int, int);

struct Struct_020978fc;
extern "C" void func_02097bc4(struct Struct_020978fc*, int);
extern "C" void func_02097c18(void*, int, int, int, int, int, int, int);

struct Struct_02020cb8;
extern "C" void func_0204af64(Struct_02020cb8*);
extern "C" void func_0204b11c(unsigned char*, int);
struct Struct_02020cb8_5;
extern "C" void func_0204b5e8(Struct_02020cb8_5*, int, int);
extern "C" void func_0204b2e0(void*, char*);
struct Struct_02020cb8_6;
extern "C" void func_0204b3a0(Struct_02020cb8_6*, char*);

extern "C" void LoadToSubBGStandardPalette(int, int, unsigned int);
extern "C" void LoadToSubBG1ScreenData(int, int, unsigned int);
extern "C" void LoadToSubBG1CharacterData(int, int, unsigned int);

extern "C" void func_ov028_021d98e0(void*, void*, int, int);
int IsBrightnessTransitionActive(GameResources*);

extern int data_ov028_021d9aa0;

// USA: func_ov028_021d8dd0
extern "C" ARM void func_ov028_021d8dd0(unsigned char* arg0) {
    Struct_0208cb08* var0 = func_02094a00();
    void* var1 = BackgroundLoader::GetInstance();
    void* var2 = GameState::GetInstance();
    void* var3 = func_0200fb8c((int*)var2);
    unsigned char var4 = arg0[0x81];

    if (var4 == 0) {
        func_02094ab0(var0);
        func_02094b34(var0, 0x7a, 0x20b, 0, 0);
        arg0[0x81] = arg0[0x81] + 1;
    } else if (var4 == 1) {
        if (func_02094b4c(var0) != 0) {
            arg0[0x81] = arg0[0x81] + 1;
        }
    } else if (var4 == 2) {
        func_020dc2bc();
        func_02074af4(arg0 + 0xc);
        *(unsigned int*)(arg0 + 0x74) = GetFlags00((GameResources*)var3);
        *(unsigned int*)(arg0 + 0x78) = GetFlags04((GameResources*)var3);
        *(unsigned int*)(arg0 + 0x7c) = GetFlags08((GameResources*)var3);
        SetFlags04((GameResources*)var3, 0x90);
        void* var5 = *(void**)(arg0 + 0x40);
        func_02097bc4((struct Struct_020978fc*)(arg0 + 0x20), 2);
        func_02097c18(arg0 + 0x20, 2, 0, 0, 0, 0, 0x180, 0);

        unsigned short* var6 = (unsigned short*)0x400100a;
        *var6 = (*var6 & 0x43) | 0x1000;

        unsigned char var7[0x20];
        func_0204af64((Struct_02020cb8*)var7);
        unsigned char var8 = var7[0x1c];
        var8 = (var8 & ~0xf) | 1;
        var8 = var8 & 0xff;
        var8 = (var8 & ~0xf0) | 0x10;
        var7[0x1c] = var8;
        func_0204b11c((unsigned char*)var7, 0);
        func_0204b5e8((Struct_02020cb8_5*)var7, 0, 0);
        int var9 = *(int*)((char*)var3 + 0x2c);
        func_0204b2e0(var7, (char*)var9);
        func_0204b3a0((Struct_02020cb8_6*)var7, (char*)var9);

        unsigned short var10 = 0x67f5;
        memcpy(var5, &var10, 2);
        CleanInvalidateCacheRange(var5, 2);
        LoadToSubBGStandardPalette((int)var5, 0xa, 2);

        unsigned short* var11 = (unsigned short*)var5;
        for (unsigned short var12 = 0; var12 < 0x400; var12++) {
            var11[var12] = var12;
        }

        CleanInvalidateCacheRange(var5, 0x800);
        LoadToSubBG1ScreenData((int)var5, 0, 0x800);
        memset(var5, 0x11111111, 0x8000);
        CleanInvalidateCacheRange(var5, 0x8000);
        LoadToSubBG1CharacterData((int)var5, 0, 0x8000);
        void* var13 = *(void**)(arg0 + 0x40);
        memset(var13, 0x11111111, 0x8000);
        var13 = *(void**)(arg0 + 0x40);
        CleanInvalidateCacheRange(var13, 0x8000);

        unsigned short* var14 = (unsigned short*)0x4001008;
        var14[0] = (var14[0] & ~3) | 1;
        var14[1] = var14[1] & ~3;
        var14[2] = (var14[2] & ~3) | 2;
        var14[3] = (var14[3] & ~3) | 3;
        unsigned int* var15 = (unsigned int*)0x4000000;
        *var15 = (*var15 & ~0x1f00) | 0x1100;
        unsigned int* var16 = (unsigned int*)0x4001000;
        *var16 = (*var16 & ~0x1f00) | 0x200;

        arg0[0x81] = arg0[0x81] + 1;
    } else if (var4 == 3) {
        int var17 = ((BackgroundLoader*)((int)var1))->QueueLoadFile((const char*)((int)&data_ov028_021d9aa0), (SafeAllocator*)(0));
        *(int*)(arg0 + 0x70) = var17;
        arg0[0x81] = arg0[0x81] + 1;
    } else if (var4 == 4) {
        if (((BackgroundLoader*)(var1))->GetTaskStatus((int)(*(int*)(arg0 + 0x70))) != 0) {
            int var18, var19;
            ((BackgroundLoader*)(var1))->GetLoadedFileByID((int)(*(int*)(arg0 + 0x70)), (void**)(&var18), (unsigned int*)(&var19));
            if (var18 != 0 && var19 != 0) {
                ((SafeAllocator*)(arg0 + 0x44))->Reset();
                func_ov028_021d98e0(arg0, arg0 + 0x44, var18, var19);
            }
            ((BackgroundLoader*)(var1))->RemoveTask((int)(*(int*)(arg0 + 0x70)));
            *(int*)(arg0 + 0x70) = -1;
            arg0[0x81] = arg0[0x81] + 1;
        }
    } else if (var4 == 5) {
        arg0[0x81] = var4 + 1;
        SetBrightness((GameResources*)var3, 0, 0x1e);
    } else if (var4 == 6) {
        if (IsBrightnessTransitionActive((GameResources*)var3) == 0) {
            arg0[0x80] = 1;
            arg0[0x81] = 0;
        }
    }
}
