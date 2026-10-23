#include <globaldefs.h>
#include "Util/Random.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_0209d3cc
extern "C" ARM int func_0209d3cc(char* arg0) {
    struct Random* var0 = GetBTRandom();
    int var1 = NextRandomMax(var0, func_ov017_021d60f4(arg0) + 1);
    func_ov017_021d6134(arg0 + 8, var1);
    return 1;
}
