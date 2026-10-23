#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020d2ff0(const char* arg0);
extern char data_ov002_0216d2fc[];

// USA: func_ov002_02168d10
extern "C" ARM void func_ov002_02168d10(unsigned char* arg0, int arg1) {
    if (arg1 == 0) {
        return;
    }
    memset(arg0 + 0xc, 0, 0x38);
    int var0 = func_020d2ff0((const char*)(arg0 + 0xc));
    sprintf((char*)(arg0 + 0xc) + var0, data_ov002_0216d2fc, arg1);
}
