#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/Cache.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021bdbcc(void* arg0);
extern "C" ARM void* func_020421b0(int arg0);
extern "C" int LoadToMainObjVRAM(int, int, unsigned int);

// USA: func_ov023_021e2ce8
extern "C" ARM void func_ov023_021e2ce8(int arg0, void* arg1) {
    if (arg0 < 0) return;

    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg0);
    if (arg1 != 0 && var1 != 0) {
        void* var2 = *(void**)((char*)arg1 + 0x40);
        void* var3 = 0;
        if (var2 != 0) {
            unsigned short var4 = *(unsigned short*)((char*)arg1 + 0x4e);
            if (var4 > 15) var3 = (char*)var2 + 0x258;
        }

        if (var3 != 0) {
            void* var5 = *(void**)((char*)var3 + 8);
            if (var5 != 0) {
                void* var6 = *(void**)((char*)var1 + 0x150);
                int var7 = *(int*)((char*)var6 + 0x950);

                int var8 = ((int)GetGameResources());
                int var9 = func_ov017_021bdbcc((void*)var8);
                if (var9 != 0) var7 = 0;

                unsigned short var10 = *(unsigned short*)((char*)var5 + 0x4);
                int var11 = (var7 * 4 + 0x28) & 0xff;
                unsigned short var12 = var10 & 0x3ff;
                int var13 = var12 << 5;

                int var14;
                for (var14 = 0; var14 < 4; var14++) {
                    void* var15 = func_020421b0(var11);
                    CleanInvalidateCacheRange(var15, 0x20);
                    LoadToMainObjVRAM((int)var15, var13, 0x20);
                    CleanCacheRange(var15, 0x20);
                    var11 = (var11 + 1) & 0xff;
                    var13 += 0x20;
                }
            }
        }
    }
}
