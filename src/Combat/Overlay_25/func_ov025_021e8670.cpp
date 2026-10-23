#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;

extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" int func_ov017_02191b58(void*, int);
typedef int (*Type_ov025_021e8670)(void*, int);
extern "C" void func_ov017_0219230c(void* arg0, int arg1, int arg2);
extern "C" void func_ov017_02192400(void* arg0, int arg1);

// USA: func_ov025_021e8670
extern "C" ARM int func_ov025_021e8670(void* arg0, struct Struct_ov000_0215440c_2* arg1) {
    void* var0 = GetGameResources();
    struct Struct_ov000_02160094* var1 = func_ov000_02160094(arg1, 0);
    int var2 = *(unsigned short*)((char*)var1 + 0x20);
    int var3 = (var2 >= 0 && var2 <= 3);
    if (var3 && (((Type_ov025_021e8670)&func_ov017_02191b58)(var0, var2) & 2)) {
        func_ov017_0219230c(var0, var2, 8);
        return 1;
    }
    func_ov017_02192400(var0, var2);
    return 1;
}
