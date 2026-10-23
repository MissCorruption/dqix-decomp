#include <globaldefs.h>
#include "Util/Random.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_0215afec
extern "C" ARM int func_ov001_0215afec(void* arg0, int arg1) {
    if (arg1 < 2) return 0;
    struct Random* var0 = GetBTRandom();
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 8);
    int var3 = NextRandomBetween(var0, var1, var2);
    func_ov017_021d6134((char*)arg0 + 0x10, var3);
    return 1;
}
