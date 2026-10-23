#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* func_02012fe4(void* arg0);
extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void _ZN6Zone3D10SwitchZoneEti(void* arg0, int arg1, int arg2);

// USA: func_ov001_021622a0
extern "C" ARM int func_ov001_021622a0(void* arg0) {
    void* var0 = func_02012fe4(arg0);
    int var1 = func_ov017_021d60f4(arg0);
    _ZN6Zone3D10SwitchZoneEti(var0, var1, 0);
    return 1;
}
