#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_ov023_021ecbe8
extern "C" ARM void func_ov023_021ecbe8(char* arg0) {
#if defined(jpn)
    enum { Enum_ov023_021ecbe8_580 = 0x15c };
#else
    enum { Enum_ov023_021ecbe8_580 = 0x244 };
#endif
    if (!(*(unsigned short*)(arg0 + 0x438) & 0x40)) return;

    unsigned char var0 = *(unsigned char*)(arg0 + 0x433);
    if (var0 == 0) {
        unsigned char var1 = *(unsigned char*)(arg0 + 0x28);
        char* var2 = *(char**)(arg0 + 0x20);
        unsigned int var3 = (*(unsigned int*)(var2 + var1 * Enum_ov023_021ecbe8_580)) >> 30;

        switch (var3) {
        case 0:
            *(unsigned char*)(arg0 + 0x43d) = 0;
            *(short*)(arg0 + 0x440) = 3;
            *(short*)(arg0 + 0x442) = 3;
            *(short*)(arg0 + 0x444) = 0x1a;
            *(short*)(arg0 + 0x446) = 7;
            break;
        case 1:
            *(unsigned char*)(arg0 + 0x43d) = 1;
            *(short*)(arg0 + 0x440) = 3;
            *(short*)(arg0 + 0x442) = 3;
            *(short*)(arg0 + 0x444) = 0x1a;
            *(short*)(arg0 + 0x446) = 7;
            break;
        case 2:
            *(unsigned char*)(arg0 + 0x43d) = 2;
            *(short*)(arg0 + 0x440) = 0;
            *(short*)(arg0 + 0x442) = 1;
            *(short*)(arg0 + 0x444) = 0x20;
            *(short*)(arg0 + 0x446) = 0xb;
            break;
        }

        *(short*)(arg0 + 0x43a) = 0x60;
        *(short*)(arg0 + 0x43e) = (short)((*(short*)(arg0 + 0x43a) - (*(short*)(arg0 + 0x442) << 3) - 0x41) / 8 + 2);
        if (*(short*)(arg0 + 0x43e) <= 0) *(short*)(arg0 + 0x43e) = 0;
        *(unsigned char*)(arg0 + 0x433) = *(unsigned char*)(arg0 + 0x433) + 1;
    }

    if (var0 == 1) {
        GameState* var4 = GameState::GetInstance();
        unsigned int var5 = var4->GetTickCount();

        int var6 = *(unsigned char*)(arg0 + 0x43c) + (int)var5;
        *(unsigned char*)(arg0 + 0x43c) = (unsigned char)var6;
        float var7 = (float)(unsigned int)(var6 & 0xff) / 60.0f;
        float var8 = 1.0f;
        float var9 = (float)*(short*)(arg0 + 0x43a);
        float var10 = var7 - var8;
        float var11 = var9 * var10;
        *(short*)(arg0 + 0x43a) = (short)(var11 * (var7 - var8));

        *(short*)(arg0 + 0x43e) = (short)((*(short*)(arg0 + 0x43a) - (*(short*)(arg0 + 0x442) << 3) - 0x41) / 8 + 2);
        if (*(short*)(arg0 + 0x43e) <= 0) *(short*)(arg0 + 0x43e) = 0;

        if (*(short*)(arg0 + 0x43a) < 1) {
            *(short*)(arg0 + 0x43a) = 0;
            *(unsigned char*)(arg0 + 0x433) = *(unsigned char*)(arg0 + 0x433) + 1;
        }
    }

    if (var0 != 2) return;

    *(unsigned short*)(arg0 + 0x438) = *(unsigned short*)(arg0 + 0x438) & ~0x40;
    *(unsigned char*)(arg0 + 0x433) = 0;
}
