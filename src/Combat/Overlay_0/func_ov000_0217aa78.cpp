#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x800
#define REGION_OFFSET_1 0xc8
#define REGION_OFFSET_2 0xca
#else
#define REGION_OFFSET_0 0x900
#define REGION_OFFSET_1 0x60
#define REGION_OFFSET_2 0x62
#endif

#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_ov000_02171674(void* arg0, int arg1);
extern "C" int func_ov000_0217199c(void* arg0, int arg1);

// USA: func_ov000_0217aa78
extern "C" ARM int func_ov000_0217aa78(void* arg0, int arg1, int arg2) {
    if (arg0 == 0) {
        return 0;
    }
    char var0 = (char)(*(int*)((char*)arg0 + 0x4c));
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetPartyMemberByIndex(var0);
    if (var2 == 0) {
        return 0;
    }
    int var3 = func_02053c6c((unsigned char*)var2);
    if (var3 == 0) {
        return 0;
    }
    unsigned short var4 = *(unsigned short*)((char*)var3 + REGION_OFFSET_0 + REGION_OFFSET_1);
    if (arg2 != 0) {
        var4 = *(unsigned short*)((char*)var3 + REGION_OFFSET_0 + REGION_OFFSET_2);
    }
    short var5;
    for (var5 = 0; var5 < arg1; var5 = (short)(var5 + 1)) {
        int* var6 = (int*)func_ov000_02171674(arg0, var5);
        if (arg2 != 0) {
            var6 = (int*)func_ov000_0217199c(arg0, var5);
        }
        if (var6 != 0) {
            int var7 = var6[1];
            if (var4 == (unsigned int)(var7 << 20) >> 20) {
                return var5;
            }
        }
    }
    if (arg2 != 0) {
        *(unsigned short*)((char*)var3 + REGION_OFFSET_0 + REGION_OFFSET_2) = 0;
    } else {
        *(unsigned short*)((char*)var3 + REGION_OFFSET_0 + REGION_OFFSET_1) = 0;
    }
    return 0;
}
