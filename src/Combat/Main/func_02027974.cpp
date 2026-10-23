#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_02027974 {
    unsigned char unknown_0_[0x6c];
    unsigned short* unknown_6c_;
};

#if defined(jpn)
enum { Enum_02027974_12 = 0x4c };
#define data_020e7090 data_020e79a4
#define data_020e7091 data_020e79a5
#else
enum { Enum_02027974_12 = 12 };
#endif

extern "C" unsigned short* func_02012fe4();
extern unsigned char data_020e7090[][2];
extern unsigned char data_020e7091[][2];

// USA: func_02027974
extern "C" ARM void func_02027974(Struct_02027974* arg0, const unsigned char (*arg1)[16], void* arg2) {
    if (arg1 == 0 || arg2 == 0) return;
    GameState* var0 = GameState::GetInstance();
    unsigned short* var1 = func_02012fe4();
    unsigned char* var2 = (unsigned char*)&var0->unk_6fc0[Enum_02027974_12] + ((*var1 % 20) - 1) * 32;
    for (int var3 = 0; var3 < 16; var3++) {
        for (int var4 = 0; var4 < 16; var4++) {
            unsigned char var5 = 0;
            unsigned char var6 = arg1[var3][var4];
            for (int var7 = 0; var7 < 47; var7++) {
                if (var6 == data_020e7090[var7][0]) {
                    var5 = data_020e7091[var7][0];
                    break;
                }
            }
            bool var8;
            if (var4 < 8) {
                var8 = (var2[var3 * 2] & (1 << var4)) != 0;
            } else {
                var8 = (var2[var3 * 2 + 1] & (1 << (var4 - 8))) != 0;
            }
            if (!var8) var5 = 0;
            int var9 = (var5 / 16) * 64 + (var5 % 16) * 2;
            int var10 = var9 + 1;
            int var11 = var4 + var3 * 16;
            int var12 = (var11 / 16) * 64 + (var11 % 16) * 2;
            int var13 = var12 + 1;
            arg0->unknown_6c_[var12] = var9;
            arg0->unknown_6c_[var13] = var10;
            arg0->unknown_6c_[var12 + 32] = var9 + 32;
            arg0->unknown_6c_[var13 + 32] = var10 + 32;
        }
    }
}
