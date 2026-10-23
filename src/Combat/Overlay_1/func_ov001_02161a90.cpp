#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_02161a90
extern "C" ARM int func_ov001_02161a90(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02161a90_1844 = 0x524, Enum_ov001_02161a90_348 = 0x158 };
#else
    enum { Enum_ov001_02161a90_1844 = 0x734, Enum_ov001_02161a90_348 = 0x15c };
#endif
    int* var0 = *(int**)((int)GetGameResources() + 0x3000 + Enum_ov001_02161a90_1844);
    func_ov017_021d6134(arg0, var0[Enum_ov001_02161a90_348 / 4]);
    return 1;
}
