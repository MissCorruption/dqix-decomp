#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020dc70c_3276 = 0xa6c };
#else
enum { Enum_020dc70c_3276 = 0xccc };
#endif
#include "GameState/GameState.h"
#include "NitroSDK/Cache.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void* func_020a6084(void);

extern "C" int LoadToMainObjStandardPalette(int arg0, int arg1, unsigned int arg2);
extern "C" void LoadToMainBGStandardPalette(int src, int dstOffset, unsigned int size);
extern "C" int LoadToSubObjStandardPalette(int arg0, int arg1, unsigned int arg2);
extern "C" void LoadToSubBGStandardPalette(int src, int dstOffset, unsigned int size);

// USA: func_020dc70c
extern "C" ARM void func_020dc70c(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned short arg5, unsigned int arg6) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0);
    if (var1 == NULL)
        return;
    int var2 = func_02053c6c((unsigned char*)var1);
    if (var2 == 0)
        return;
    unsigned char var3 = *(unsigned char*)(var2 + 0x56a);
    unsigned int var4 = (arg4 << 4) + arg5;
    unsigned int var5 = arg6 + (var4 << 1);
    if (var5 > 0x200)
        return;
    unsigned int var6 = var4 << 1;
    int var7 = (int)func_020a6084();
    int var8 = var7 + (var3 << 5) + (arg1 << 1);
    CleanInvalidateCacheRange((void*)var8, arg6);
    if (arg2 == 0) {
        if (arg3 != 0)
            LoadToMainObjStandardPalette(var8, var6, arg6);
        else
            LoadToMainBGStandardPalette(var8, var6, arg6);
    } else {
        if (arg3 != 0)
            LoadToSubObjStandardPalette(var8, var6, arg6);
        else
            LoadToSubBGStandardPalette(var8, var6, arg6);
    }
    *(int*)((unsigned char*)GameState::GetInstance() + 0x5000 + Enum_020dc70c_3276) &= ~2;
}
