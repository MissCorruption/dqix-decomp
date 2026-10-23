#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* obj);
struct FlagWord020466f4;
extern "C" void func_020466f4(struct FlagWord020466f4* word, unsigned int mask);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);
extern "C" void func_020dc2d0(int mode);
extern "C" void* func_020d6c00(void);

// USA: func_ov001_0215aef0
extern "C" ARM int func_ov001_0215aef0(void* obj) {
    int cond = func_ov017_021d60f4(obj);
    void* p = func_020d6c00();
    (int)GetGameResources();
    if (cond != 0) {
        func_020466f4((struct FlagWord020466f4*)p, 1);
        func_020dc2d0(0);
    } else {
        func_020466e4((unsigned int*)p, 1);
    }
    return 1;
}
