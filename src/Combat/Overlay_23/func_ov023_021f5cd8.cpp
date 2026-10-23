#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" unsigned long long func_ov023_021f6324(int arg0, unsigned char* arg1);
extern "C" void func_ov031_022118a8(void* arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov031_02211938(unsigned char* ctx, const unsigned char* in, int len, unsigned char* out);
extern unsigned char data_ov023_021fe3c8[];

// USA: func_ov023_021f5cd8
extern "C" ARM int func_ov023_021f5cd8(unsigned char* arg0, int arg1, unsigned char* arg2) {
    if (func_ov023_021f6324(arg1, arg0) != 0) {
        return 0;
    }
    char var0[0x104];
    char* var1 = (char*)data_ov023_021fe3c8;
    int var2 = strlen(var1);
    func_ov031_022118a8(var0, (unsigned char*)var1, var2);
    func_ov031_02211938((unsigned char*)var0, arg0, arg1 - 4, arg2);
    memcpy(arg0, arg2, arg1 - 4);
    return 1;
}
