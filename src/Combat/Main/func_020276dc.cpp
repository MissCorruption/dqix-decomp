#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02027bd0(int arg0);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
extern "C" int LoadToSubObjStandardPalette(int arg0, int arg1, unsigned int arg2);

extern unsigned char data_020e703e[];
extern unsigned short data_020e7044[] __attribute__((aligned(4)));

struct Struct_020fdc4c_8 {
    unsigned short unknown_0_;
    char unknown_2_[0x12];
};
extern struct Struct_020fdc4c_8 data_020fdc4c;
#if defined(jpn)
#define data_020fdc50 data_020fdc54
#endif
extern char data_020fdc50[];

struct Struct_020276dc {
    unsigned char unknown_0_;
};

// USA: func_020276dc
extern "C" ARM void func_020276dc(Struct_020276dc* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned var1;
    unsigned short var2[4];
    for (var1 = 0; var1 < 4; var1++) {
        int var3;
        int var4;
        int var5;
        unsigned char var6;

        int var7;

        if (func_0200ff1c(var0, var1) == 0) continue;
        var6 = data_020e703e[func_02027bd0(var1)];
        var3 = arg0->unknown_0_;
        var4 = var1 << 1;
        var5 = (var3 >> var4) & 3;
        if (var5 == var6) continue;

        arg0->unknown_0_ &= ~(3 << var4);
        arg0->unknown_0_ |= var6 << var4;
        {
            const unsigned short* var8 = data_020e7044;
            unsigned short* var9 = var2;
            var7 = 4;
            do { *var9++ = *var8++; } while (--var7);
        }
        data_020fdc4c.unknown_0_ = var2[var6];
        CleanInvalidateCacheRange(data_020fdc50 - 4, 2);
        LoadToSubObjStandardPalette((int)(data_020fdc50 - 4), var1 * 32 + 0x1e, 2);
    }
}
