#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov028_021d8a40(void* arg0);

// USA: func_ov028_021d8ad4
extern "C" ARM void func_ov028_021d8ad4(void* arg0, char* arg1) {
    unsigned int var0[0x38];
    char* var1 = (char*)arg0;
    int var2 = *(int*)(var1 + 0x8);
    if ((unsigned int)(var2 >> 12) < 0x20) {
        return;
    }
    func_ov028_021d8a40(var0);
    int var3 = *(int*)(var1 + 0x0) - *(int*)(var1 + 0x8);
    var3 = (var3 >> 12) & 0xff;
    var3 = var3 >> 3;
    memset(arg1 + (var3 << 10), 0x11111111, 0x1000);
    *(int*)(var1 + 0x8) -= 0x20000;
    *(unsigned char*)(var1 + 0xe) = 1;
}
