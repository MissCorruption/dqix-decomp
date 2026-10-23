#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void* arg0);
extern "C" unsigned short func_0206e384(unsigned char* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e9b00
extern "C" ARM int func_ov023_021e9b00(void* arg0) {
    void* var0 = func_0205ec34(arg0);
    unsigned int var1 = 0xffff | (func_0206e384((unsigned char*)var0) << 16);
    int var2 = 0;
    while (var1 != 0) {
        var2 += var1 & 1;
        var1 >>= 1;
    }
    func_ov017_021d6134(arg0, var2);
    return 1;
}
