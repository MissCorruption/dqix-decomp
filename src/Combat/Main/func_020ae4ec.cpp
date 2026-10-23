#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif
#if defined(jpn)
enum { kNotifyOffset = 0x41a8 };
#else
enum { kNotifyOffset = 0x4458 };
#endif

extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void*, unsigned char*, int, int);
extern "C" void func_ov017_021cdb00(int, int, int, int);

// USA: func_020ae4ec
extern "C" ARM void func_020ae4ec(int param0, int param1) {
    void* x = func_0205ec34();
    func_0206df6c(x, (unsigned char*)x + 0x8c, param0 + 0x33e, param1);
    void* y = GetGameResources();
    if (*(int*)((char*)y + kNotifyOffset) == 0) return;
    func_ov017_021cdb00(7, param0, param1, -1);
}
