#include <globaldefs.h>
#include "NitroSDK/OverlayId.h"

#if defined(jpn)
#define func_ov023_021d8a40 func_ov030_021d8a40
#define func_ov024_021d92f0 func_ov030_021d92f0
#endif

extern "C" void func_020a1940(unsigned int arg0);
extern "C" int func_020a1bb4(unsigned int arg0);
extern "C" void* func_ov023_021d8a40(void* arg0, int* arg1);
extern "C" void func_ov017_0218b688(void* arg0);
extern "C" void func_ov024_021d92f0(void* arg0, void* arg1, int* arg2);
extern char data_02114e20;

// USA: func_020d6cb4
extern "C" ARM void func_020d6cb4() {
    unsigned int var0 = OVERLAY_ID(30);
    int var1 = 0;
    func_020a1940(var0);
    void* var2 = func_ov023_021d8a40(&data_02114e20, &var1);
    func_020a1bb4(var0);
    func_ov017_0218b688(var2);
    func_020a1940(var0);
    func_ov024_021d92f0(var2, &data_02114e20, &var1);
    func_020a1bb4(var0);
}
