#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215d63c {
    unsigned char unknown_0_[0xf78];
    signed char unknown_f78_[4];
    unsigned char unknown_f7c_;
};

extern "C" unsigned char * func_02053c6c(unsigned char*);
void CleanInvalidateCacheRange(const void *p, unsigned int size);
extern "C" void LoadToMainObjStandardPalette(const void *src, unsigned int offset, unsigned int size);

// USA: func_ov002_02161a8c
extern "C" ARM void func_ov002_02161a8c() {
    unsigned short var0[2];
    unsigned short *var1;
    var0[1]           = 0x7fff;
    var0[0]           = 0x2108;
    GameState *var2       = GameState::GetInstance();
    Struct_ov000_0215d63c *var3    = (Struct_ov000_0215d63c *)func_02010828(var2);
    unsigned char var4 = var3->unknown_f7c_;
    for (unsigned char var5 = 0; var5 < var4; var5++) {
        int var6      = var3->unknown_f78_[var5];
        var1        = &var0[1];
        GameObject *var7 = var2->GetPartyMemberByIndex(var6);
        if (var7 == 0) continue;
        unsigned char *var8 = func_02053c6c((unsigned char*)var7);
        if (var8 == 0) continue;
        unsigned char var9 = var8[0x56a];
        if (var9 == 1 || var9 == 15) var1 = &var0[0];
        int var10 = (var6 + 9) * 16;
        CleanInvalidateCacheRange(var1, 2);
        var10 += 13;
        LoadToMainObjStandardPalette(var1, var10 * 2, 2);
    }
}
