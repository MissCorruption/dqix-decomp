#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Cache.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021bdbcc(void* arg0);
extern "C" ARM void* func_020421b0(int arg0);
extern "C" int LoadToMainObjVRAM(int, int, unsigned int);

// USA: func_ov002_021619b4
extern "C" ARM void func_ov002_021619b4(int arg0, void* arg1, void* arg2) {
    if (arg0 < 0) return;

    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0);
    if (arg1 == 0 || arg2 == 0 || var1 == 0) return;

    void* var2 = *(void**)((char*)arg1 + 0x40);
    void* var3 = 0;
    if (var2 != 0) {
        unsigned short var4 = *(unsigned short*)((char*)arg1 + 0x4e);
        if (var4 > 0x2a) var3 = (char*)var2 + 0x690;
    }

    void* var5;
    if (var3 == 0 || (var5 = *(void**)((char*)var3 + 8)) == 0) return;

    void* var6 = *(void**)((char*)var1 + 0x150);
    int var7 = *(int*)((char*)var6 + 0x950);

    int var8 = ((int)GetGameResources());
    int var9 = func_ov017_021bdbcc((void*)var8);
    if (var9 != 0) var7 = 0;

    int var10 = (var7 * 4 + 0x28) & 0xff;
    void* var11 = func_020421b0(var10);
    memcpy(arg2, var11, 0x80);

    unsigned short var12 = *(unsigned short*)((char*)var5 + 4);
    unsigned short var13 = var12 & 0x3ff;
    int var14 = var13 << 5;

    CleanInvalidateCacheRange(arg2, 0x80);
    LoadToMainObjVRAM((int)arg2, var14, 0x80);
    CleanCacheRange(arg2, 0x80);
}
