#include <globaldefs.h>
#include "Util/Random.h"

// USA: func_ov024_021ed890
extern "C" ARM int func_ov024_021ed890(struct Random** arg0, int* arg1, short* arg2) {
    int var0 = NextRandomMax(*arg0, *arg1);
    short var1 = arg2[var0];
    arg2[0] = var1;
    *arg1 = 1;
    return 1;
}
