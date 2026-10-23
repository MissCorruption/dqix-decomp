#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void*);
extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_0206eb64(unsigned char*, int, int);

// USA: func_0209d48c
extern "C" ARM int func_0209d48c(void* arg0) {
    void* var0 = func_0205ec34(arg0);
    if (var0 == NULL) return 0;
    int var1 = func_ov017_021d60f4(arg0);
    int var2 = func_ov017_021d60f4((char*)arg0 + 8);
    func_0206eb64((unsigned char*)var0, var1, var2);
    return 1;
}
