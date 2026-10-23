#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e6208_12 = 0x4 };
#else
enum { Enum_ov025_021e6208_12 = 0xc };
#endif

extern int data_ov025_021ef988;
extern "C" void func_ov025_021e3084(void* arg0);

// USA: func_ov025_021e6208
extern "C" ARM int func_ov025_021e6208(void* arg0, int arg1) {
    char* var0 = *(char**)((char*)&data_ov025_021ef988 + Enum_ov025_021e6208_12);
    func_ov025_021e3084(var0 + 0x540);
    *(int*)(var0 + 0x540) = arg1;
    return 1;
}
