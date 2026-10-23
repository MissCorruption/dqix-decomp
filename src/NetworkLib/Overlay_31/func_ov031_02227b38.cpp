#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

extern "C" void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" void func_020c9be0(void);
extern "C" int func_ov031_02222928(int, int, void*, void*, void*, int);
struct Struct_ov031_02227cb0;
extern "C" ARM void func_ov031_02227cb0(Struct_ov031_02227cb0* arg0);
extern "C" ARM int func_ov031_02227cc8(int arg0);
extern "C" ARM unsigned int func_ov031_02227cd8(void* arg0);

extern void* data_ov031_02290c48;

// USA: func_ov031_02227b38
extern "C" ARM void func_ov031_02227b38(void) {
    unsigned int var0 = 0xc;
    void* var1 = func_ov031_0223cf4c(var0, var0 - 0x10);
    data_ov031_02290c48 = var1;
    int var2 = func_ov031_02222928(0xf, 0x40, (void*)func_ov031_02227cb0, (void*)func_ov031_02227cc8, (void*)func_ov031_02227cd8, 0x800);
    if (var2 != 1) {
        func_020c9be0();
    }
    SleepCurrentContext(0xa);
}
