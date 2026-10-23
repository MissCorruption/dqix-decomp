#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);
struct Struct_02038598_4;
extern "C" void func_020466f4(struct Struct_02038598_4* arg0, unsigned int arg1);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020dc2d0(int arg0);
extern "C" void* func_020d6c00(void);

// USA: func_ov001_0215aef0
extern "C" ARM int func_ov001_0215aef0(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    void* var1 = func_020d6c00();
    (int)GetGameResources();
    if (var0 != 0) {
        func_020466f4((struct Struct_02038598_4*)var1, 1);
        func_020dc2d0(0);
    } else {
        func_020466e4((unsigned int*)var1, 1);
    }
    return 1;
}
