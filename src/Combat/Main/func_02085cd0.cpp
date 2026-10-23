#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
extern unsigned short __attribute__((aligned(2))) data_020e8a8c[];
#else
extern unsigned short __attribute__((aligned(4))) data_020e8a8c[];
#endif

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_0201137c(char* arg0, int arg1);

// USA: func_02085cd0
extern "C" ARM int func_02085cd0(unsigned char* arg0, int arg1) {
    if (arg1 < 0) {
        short var0 = *(short*)(arg0 + 0x2ac);
        if (var0 > 0) {
            int var1 = *(int*)(arg0 + 0x29c);
            arg1 = (unsigned int)(var1 << 23) >> 27;
        } else {
            arg1 = 0x21;
        }
    }
    GameState* var2 = GameState::GetInstance();
    short var3[4];
    {
        const unsigned short* var4 = data_020e8a8c;
        short* var5 = var3;
        int var6 = 4;
        do {
            *var5++ = *var4++;
        } while (--var6);
    }
    switch (arg1) {
    case 0x21:
        var3[0] = 0x84;
        var3[1] = 0x8a;
        var3[2] = 0x8d;
        break;
    case 0:
        var3[0] = 1;
        var3[1] = 5;
        var3[2] = 7;
        break;
    case 1:
        var3[0] = 0xb;
        var3[1] = 0xf;
        var3[2] = 0x11;
        break;
    case 2:
        var3[0] = 0x17;
        var3[1] = 0x19;
        var3[2] = 0x1d;
        break;
    case 3:
        break;
    case 4:
        var3[0] = 0x59;
        var3[1] = 0x5b;
        var3[2] = 0x5d;
        break;
    case 5:
        var3[0] = 0x42;
        var3[1] = 0x44;
        var3[2] = 0x4a;
        break;
    case 6:
        var3[0] = 0x6f;
        var3[1] = 0x73;
        var3[2] = 0x75;
        break;
    case 7:
        var3[0] = 0x79;
        var3[1] = 0x7b;
        var3[2] = 0x7f;
        break;
    case 8:
        var3[0] = 0xb1;
        var3[1] = 0xb3;
        var3[2] = 0xb7;
        break;
    case 9:
        var3[0] = 0xbb;
        var3[1] = 0xbf;
        var3[2] = 0xc1;
        break;
    case 10:
        var3[0] = 0xf3;
        var3[1] = 0xf5;
        var3[2] = 0xf7;
        break;
    case 11:
        var3[0] = 0xd1;
        var3[1] = 0xd3;
        var3[2] = 0xd7;
        break;
    }
    int var7 = 0;
    unsigned char var8;
    short var9;
    for (var8 = 0; (var9 = var3[var8]) != -1; var8++) {
        if (func_02083b00(arg0, var9)) {
            var7 += func_0201137c((char*)var2, var9);
        }
    }
    return var7;
}
