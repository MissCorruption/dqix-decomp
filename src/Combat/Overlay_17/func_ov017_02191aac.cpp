#include <globaldefs.h>

extern "C" void* func_ov017_0219219c(char* arg0, int arg1);

// USA: func_ov017_02191aac
extern "C" ARM void func_ov017_02191aac(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_ov017_0219219c((char*)arg0, arg2);
    if (!var0) return;
    var0 = func_ov017_0219219c((char*)arg0, arg2);
    if (var0) *(unsigned char*)var0 |= 1;
    if (arg1 == 1) {
        var0 = func_ov017_0219219c((char*)arg0, arg2);
        if (var0) *(unsigned char*)var0 |= arg3;
        return;
    }
    if (arg1 != 0) return;
    var0 = func_ov017_0219219c((char*)arg0, arg2);
    if (var0) *(unsigned char*)var0 &= ~arg3;
}
