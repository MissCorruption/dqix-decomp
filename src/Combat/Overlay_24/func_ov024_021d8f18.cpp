#include <globaldefs.h>
#include "Util/Random.h"

// USA: func_ov024_021d8f18
extern "C" ARM int func_ov024_021d8f18(struct Random** arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    struct Random* var0 = *arg0;
    float var1 = NextRandomFloatBetween(var0, 0.1f, 0.5f);
    return (int)((float)arg5 * var1);
}
