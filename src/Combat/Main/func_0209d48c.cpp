#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0206eb64(unsigned char*, int, int);

// USA: func_0209d48c
extern "C" ARM int func_0209d48c(void* arg) {
    void* mgr = func_0205ec34(arg);
    if (mgr == NULL) return 0;
    int bit = func_ov017_021d60f4(arg);
    int value = func_ov017_021d60f4((char*)arg + 8);
    func_0206eb64((unsigned char*)mgr, bit, value);
    return 1;
}
