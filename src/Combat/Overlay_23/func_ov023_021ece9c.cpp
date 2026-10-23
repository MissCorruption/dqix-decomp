#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov023_021ece9c
extern "C" ARM void func_ov023_021ece9c(char* arg0) {
    unsigned short var0 = *(unsigned short*)(arg0 + 0x438);
    if (!(var0 & 0x80)) return;

    unsigned char var1 = *(unsigned char*)(arg0 + 0x433);
    if (var1 == 0) {
        *(short*)(arg0 + 0x448) = (short)~0x23;
        *(unsigned char*)(arg0 + 0x43c) = 0;
        *(unsigned char*)(arg0 + 0x433) = *(unsigned char*)(arg0 + 0x433) + 1;
    }
    if (var1 != 1) return;

    *(unsigned short*)(arg0 + 0x438) = *(unsigned short*)(arg0 + 0x438) | 1;

    GameState* var2 = GameState::GetInstance();
    unsigned int var3 = var2->GetTickCount();
    int var4 = *(unsigned char*)(arg0 + 0x43c) + var3;
    *(unsigned char*)(arg0 + 0x43c) = (unsigned char)var4;

    float var5 = (float)(unsigned int)(var4 & 0xff);
    float var6 = var5 / 60.0f;
    float var7 = var6 * 292.0f;
    int var8 = (int)var7;
    *(short*)(arg0 + 0x448) = (short)(var8 - 0x24);

    if (*(short*)(arg0 + 0x448) > 0x100) {
        unsigned short var9 = *(unsigned short*)(arg0 + 0x438);
        var9 &= ~0x80;
        *(unsigned short*)(arg0 + 0x438) = var9;
        *(short*)(arg0 + 0x448) = (short)~0x23;
        *(unsigned char*)(arg0 + 0x43c) = 0;
        *(unsigned short*)(arg0 + 0x438) = *(unsigned short*)(arg0 + 0x438) | 2;
        *(unsigned char*)(arg0 + 0x433) = 0;
    }
}
