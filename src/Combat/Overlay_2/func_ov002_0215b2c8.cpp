#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include <globaldefs.h>

struct Struct_020a0b8c;
struct Struct_ov002_0215505c_2;
struct Struct_ov002_0215b2c8;
struct Struct_0201099c_10;
extern "C" short func_020a0b8c(struct Struct_020a0b8c *arg0);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" void func_ov023_021e1318(struct Struct_ov002_0215505c_2 *arg0);
extern "C" void func_ov023_021e133c(void *arg0, void *arg1, int arg2, int arg3, int arg4, short arg5);
extern "C" void func_ov023_021e1518(void *arg0);
extern "C" void func_ov023_021e1474(struct Struct_ov002_0215b2c8 *arg0,
                                                                                              struct Struct_0201099c_10 *arg1);
extern "C" void *ExtractFileFromGP2(const char *arg0, const char *arg1, unsigned int *arg2);
extern "C" char data_ov002_0216cf83[];
extern "C" char data_ov002_0216cf99[];

// USA: func_ov002_0215b2c8
extern "C" ARM void func_ov002_0215b2c8(char *arg0) {
    unsigned int var0;
    short var1[0x100];
    GameState *var2;
    char *var3;
    void *var4;
    int var5;
    int var6;
    char *var7;
    GameObject *var8;
    unsigned char *var9;
    short var10;
    short var11;
    var2    = GameState::GetInstance();
    var3 = (char *) func_02010828(var2);
    var4   = *(void **) var3;
    var11 = func_020a0b8c((struct Struct_020a0b8c *) var3);
    memset(var1, -1, sizeof(var1));
    memcpy(var1, var4, var11 * 2);
    for (var5 = 0; var5 < *(unsigned char *) (var3 + 0xf7c); var5++) {
        var8 = var2->GetPartyMemberByIndex(*(signed char *) (var3 + 0xf78 + var5));
        if (var8 == NULL) continue;
        var9 = func_02053c6c((unsigned char *) var8);
        for (var6 = 0; var6 < 8; var6++) {
            var10 = ((short *) (var9 + 0x454))[var6];
            if (var10 > 0) {
                var1[var11] = var10;
                var11++;
            }
        }
    }
    ((SafeAllocator *) (arg0 + 0x850))->Reset();
    var7 = arg0 + 4;
    func_ov023_021e1318((struct Struct_ov002_0215505c_2 *) (var7 + 0x800));
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    void *var12 = ExtractFileFromGP2(data_ov002_0216cf83, data_ov002_0216cf99, &var0);
    if (var12 != NULL) {
        func_ov023_021e133c(var7 + 0x800, arg0 + 0x850, (int) var12, var0, (int) var1, var11);
    }
    BackgroundLoader::RemoveLockGlobal();
    func_ov023_021e1518(var7 + 0x800);
    func_ov023_021e1474(
        (struct Struct_ov002_0215b2c8 *) (var7 + 0x800), (struct Struct_0201099c_10 *) (arg0 + 0x3ec + 0x400));
    *(void **) (arg0 + 0x2534) = ((SafeAllocator *) (arg0 + 0x850))->Allocate(0x140);
    *(void **) (arg0 + 0x2538) = ((SafeAllocator *) (arg0 + 0x850))->Allocate(0xa0);
}
