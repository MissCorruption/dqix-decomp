#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e62c8_12 = 0x4 };
#else
enum { Enum_ov025_021e62c8_12 = 0xc };
#endif

extern "C" void* func_ov000_02160130(void);
extern "C" int func_ov000_02162954(void* arg0);
extern "C" int func_ov025_021ed0fc(void* arg0);
extern int data_ov025_021ef988;

// USA: func_ov025_021e62c8
extern "C" ARM int func_ov025_021e62c8(void) {
    void* var0 = *(void**)((char*)&data_ov025_021ef988 + Enum_ov025_021e62c8_12);
    if (!func_ov025_021ed0fc((char*)var0 + 0x22c)) return 0;
    void* var1 = func_ov000_02160130();
    int var2 = func_ov000_02162954(var1);
    return var2 == 0;
}
