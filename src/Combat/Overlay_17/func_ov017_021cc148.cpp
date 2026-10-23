#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_0202c508(void* arg0);
extern "C" void func_ov017_02195250(void* arg0, void* arg1);

// USA: func_ov017_021cc148
extern "C" ARM void func_ov017_021cc148(unsigned char arg0, unsigned char* arg1, int arg2, void* arg3, void* arg4) {
    if (!func_0202c508(arg4)) return;
    unsigned char var0[0x10];
    var0[0] = arg0;
    var0[1] = arg1[5];
    strcpy((char*)&var0[2], (char*)arg1 + 6);
    func_ov017_02195250(arg3, var0);
}
