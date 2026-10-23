#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0209bd80;
struct Struct_02073ec4;
extern "C" struct Struct_0209bd80* func_0209bd80(struct Struct_02073ec4* arg0, int arg1);

extern "C" int func_0209bd38(char* arg0);


extern "C" int func_02032370(int arg0);

struct Struct_02073ec4_2;
struct Struct_02073ec4_3;
extern "C" struct Struct_02073ec4_3* func_0209bd94(struct Struct_02073ec4_2* arg0, int arg1);

struct Struct_02073ec4_4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 3;
    unsigned int unknown_4_3_ : 10;
    unsigned int unknown_5_5_ : 8;
    unsigned int unknown_6_5_ : 11;
    unsigned char unknown_8_[0x20 - 8];
};

// USA: func_02073ec4
extern "C" ARM struct Struct_02073ec4_3* func_02073ec4(int arg0, void* arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1[6];
    int var2[6];
    int var3 = 0;
    int var4 = 0;
    int var5;

    for (var5 = 0; var5 < func_0209bd38((char*)arg1); var5++) {
        struct Struct_02073ec4_4* var6 = (struct Struct_02073ec4_4*)func_0209bd80((struct Struct_02073ec4*)arg1, var5);
        if (!var6) continue;

        if (var6->unknown_4_0_ == 0 && var0->GetTimeOfDay() == 0) continue;
        if (var6->unknown_4_0_ == 1 && var0->GetTimeOfDay() != 0) continue;

        {
            int var7 = var6->unknown_5_5_;
            int var8 = var6->unknown_0_;
            var2[var4++] = var8;
            if (var7 != 0 && (var7 & arg0) == 0) continue;
            var1[var3++] = var8;
        }
    }

    if (var3 == 0) {
        int var9;
        if (var4 == 0) return NULL;
        var9 = var2[func_02032370(var4)];
        return func_0209bd94((struct Struct_02073ec4_2*)arg1, var9);
    } else {
        int var10 = var1[func_02032370(var3)];
        return func_0209bd94((struct Struct_02073ec4_2*)arg1, var10);
    }
}
