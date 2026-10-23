#include <globaldefs.h>

// USA: func_ov011_021842c8
extern "C" ARM void* func_ov011_021842c8(unsigned char* arg0, unsigned int arg1) {
    if (*(unsigned int*)arg0 == arg1) return arg0;
    void* var0 = 0;
    unsigned char* var1 = *(unsigned char**)(arg0 + 0x18);
    if (var1) var0 = func_ov011_021842c8(var1, arg1);
    if (var0) return var0;
    unsigned char* var2 = *(unsigned char**)(arg0 + 0x1c);
    if (var2) var0 = func_ov011_021842c8(var2, arg1);
    return var0;
}
