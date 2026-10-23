#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_0202ae18(void);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_02027288(unsigned char* arg0, int arg1);
extern "C" void func_0202738c(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_021c6034
extern "C" ARM void func_ov017_021c6034(signed char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021c6034_1744=0x4c0};
#else
 enum {Enum_ov017_021c6034_1744=0x6d0};
#endif
    struct Struct_0202c1a4* var0 = (struct Struct_0202c1a4*)func_0202ae18();
    signed char var1 = func_0202c1a4(var0);
    if (arg0[var1] == 1) return;
    int var2 = (int)GetGameResources() + 0x3000;
    unsigned char* var3 = *(unsigned char**)(var2 + Enum_ov017_021c6034_1744);
    for (int var4 = 0; var4 < 4; var4++) {
        if (arg0[var4] == 1) {
            func_02027288(var3, var4);
            func_0202738c(var3, 1, 1, var4);
        }
    }
}
