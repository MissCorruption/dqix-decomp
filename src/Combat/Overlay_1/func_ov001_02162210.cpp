#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" unsigned short func_ov017_021bbc04(void* arg0);
extern "C" void func_ov017_021bbbec(void* arg0, unsigned short arg1);
extern "C" void func_ov017_021bbbf8(void* arg0, unsigned short arg1);

// USA: func_ov001_02162210
extern "C" ARM int func_ov001_02162210(void) {
#if defined(jpn)
    enum { Enum_ov001_02162210_1844 = 0x524 };
#else
    enum { Enum_ov001_02162210_1844 = 0x734 };
#endif
    unsigned char* var0 = (unsigned char*)GetGameResources();
    void* var1 = *(void**)(var0 + 0x3000 + Enum_ov001_02162210_1844);
    unsigned short var2 = func_ov017_021bbc04(var1);
    if (var2 != 0) {
        func_ov017_021bbbec(var1, var2);
        func_ov017_021bbbf8(var1, 0);
    }
    return 1;
}
