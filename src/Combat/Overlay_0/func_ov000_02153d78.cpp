#include <globaldefs.h>
#include "Util/Random.h"

extern short data_ov000_02182c14[8];
extern short data_ov000_02182b84[8];
extern "C" int func_ov000_0215eb1c(struct Random* arg0, short* arg1, int arg2, int arg3);

// USA: func_ov000_02153d78
extern "C" ARM void func_ov000_02153d78(struct Random* arg0, int arg1, short* arg2) {
    short var0[8];
    unsigned short* var1 = (unsigned short*)var0;
    unsigned short* var2 = (unsigned short*)data_ov000_02182c14;
    int var3 = 8;
    do {
        *var1 = *var2;
        var1++;
        var2++;
    } while (--var3);
    short* var4 = var0;
    int var5 = func_ov000_0215eb1c(arg0, var4, 8, 1);

    short var6[8];
    int var7 = 8;
    unsigned short* var8 = (unsigned short*)var6;
    unsigned short* var9 = (unsigned short*)data_ov000_02182b84;
    do {
        *var8 = *var9;
        var8++;
        var9++;
    } while (--var7);
    short* var10 = var6;

    int var11 = 0;
    for (int var12 = 0; var12 < var5; var12++) {
        if (arg1 != var4[var12]) {
            var10[var11] = var4[var12];
            var11++;
        }
    }
    if (var11 <= 0) {
        *arg2 = (short)arg1;
        return;
    }
    int var13 = NextRandomMax(arg0, var11);
    *arg2 = var10[var13];
}
