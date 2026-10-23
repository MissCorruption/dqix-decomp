#include <globaldefs.h>
#include "Util/Random.h"

extern short data_ov000_02182b14[8];
extern "C" int func_ov000_0215eb1c(struct Random* arg0, short* arg1, int arg2, int arg3);

// USA: func_ov000_02153d10
extern "C" ARM void func_ov000_02153d10(struct Random* arg0, short* arg1) {
    short var0[8];
    unsigned short* var1 = (unsigned short*)var0;
    unsigned short* var2 = (unsigned short*)data_ov000_02182b14;
    int var3 = 8;
    int var4;
    int var5;
    do {
        *var1 = *var2;
        var1++;
        var2++;
    } while (--var3);
    var4 = func_ov000_0215eb1c(arg0, var0, 8, 1);
    var5 = NextRandomMax(arg0, var4);
    *arg1 = var0[var5];
}
