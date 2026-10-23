#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020ac614(struct Struct_020ac4f8* arg0, int arg1);

extern "C" void func_020ac644(struct Struct_020ac4f8* arg0, int arg1);

struct Struct_020103f0;
extern "C" void func_020103f0(struct Struct_020103f0* arg0, unsigned short* arg1, unsigned char* arg2, unsigned char* arg3);

struct Struct_020104cc;
extern "C" void func_020104cc(struct Struct_020104cc* arg0, unsigned short* arg1, unsigned char* arg2, unsigned char* arg3);

extern "C" void* func_0202ae18(void);
extern "C" int func_0202ba00(int* arg0);

extern "C" int _s32_div_f(int a, int b);

// USA: func_ov023_021e8fe8
extern "C" ARM struct Struct_020ac4f8 func_ov023_021e8fe8(struct Struct_020ac4f8 arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_020ac4f8 var1;
    unsigned short var2;
    unsigned char var3;
    unsigned char var4;

    var2 = 0;
    var3 = 0;
    var4 = 0;
    var1.unknown_0_ = 0;
    var1.unknown_2_ = 0;
    var1.unknown_3_ = 0;

    if (arg1 == 0) {
        func_020103f0((struct Struct_020103f0*)var0, &var2, &var3, &var4);
    } else {
        void* var5 = func_0202ae18();
        int var6 = func_0202ba00((int*)var5);
        int var7 = *((unsigned char*)var5 + 0x100d);
        if ((var6 == 5 && var7 > 1) || var6 == 6) {
            func_020104cc((struct Struct_020104cc*)var0, &var2, &var3, &var4);
        } else {
            var2 = 0;
            var3 = 0;
            var4 = 0;
        }
    }

    func_020ac614(&var1, (unsigned short)(arg0.unknown_0_ + var2));
    func_020ac644(&var1, (unsigned char)(arg0.unknown_2_ + var3));

    var1.unknown_3_ = var1.unknown_3_ + (unsigned char)(arg0.unknown_3_ + var4);
    unsigned char var8 = var1.unknown_3_;
    if (var8 > 0x3b) {
        unsigned char var9 = var8 / 0x3c;
        if (var1.unknown_0_ == 0x270f) {
            int var10 = var1.unknown_2_ + var9;
            if (var10 > 0x3b) {
                var1.unknown_0_ = 0x270f;
                var1.unknown_2_ = 0x3b;
                var1.unknown_3_ = 0x3b;
                goto done;
            }
        }
        func_020ac644(&var1, var9);
        var1.unknown_3_ = var1.unknown_3_ % 0x3c;
    }
done:
    return var1;
}
