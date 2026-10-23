#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov017_021d6134(void*, int);
extern "C" int func_0206eb98(unsigned char*, int);

// USA: func_0209d4d0
extern "C" ARM int func_0209d4d0(void* arg) {
    void* mgr = func_0205ec34(arg);
    if (mgr == NULL) return 0;
    int v = func_ov017_021d60f4(arg);
    int r = func_0206eb98((unsigned char*)mgr, v);
    func_ov017_021d6134((char*)arg + 8, r);
    return 1;
}
