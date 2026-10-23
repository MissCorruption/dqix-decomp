#include <globaldefs.h>
#include <GameState/GameState.h>

extern "C" void* func_02010828(GameState*);

extern "C" ARM void func_ov000_0217ee7c(signed char* arg0, signed char* arg1,
                                     int arg2, int arg3)
{
    unsigned char* var0 = static_cast<unsigned char*>(func_02010828(GameState::GetInstance()));
    signed char var1 = *arg1;
    switch (arg3) {
    case 0:
        break;
    case 1:
        for (signed char var2 = 0; var2 < *arg1; ++var2) {
            signed char var3 = arg0[var2];
            int var4 = 0;
            for (signed char var5 = 0; var5 < var0[0xf7c]; ++var5) {
                if (var3 == (var0 + var5)[0xf78]) {
                    var4 = true;
                    break;
                }
            }
            if (!var4) {
                --var1;
                arg0[var2] = -1;
            }
        }
        break;
    case 2:
        int var6 = arg2 >= 0 && arg2 <= 3;
        if (var6) {
            for (signed char var7 = 0; var7 < var1; ++var7) {
                if (arg2 == arg0[var7]) {
                    --var1;
                    arg0[var7] = -1;
                    break;
                }
            }
        }
        break;
    }
    for (signed char var8 = 0; var8 < *arg1 - 1; ++var8) {
        if (arg0[var8] < 0) {
            for (signed char var9 = var8 + 1; var9 < *arg1; ++var9) {
                if (arg0[var9] >= 0) {
                    arg0[var8] = arg0[var9];
                    arg0[var9] = -1;
                    break;
                }
            }
        }
    }
    *arg1 = var1;
}
