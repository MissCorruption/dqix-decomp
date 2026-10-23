#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_ov031_02220390
extern "C" THUMB unsigned char* func_ov031_02220390(unsigned char* arg0, int arg1, const void* arg2, int arg3) {
    arg0[0] = 0;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    unsigned short var0 = arg1;
    ((unsigned short*)arg0)[0] = (unsigned char)(var0 >> 8) | ((var0 << 8) & 0xff00);
    int var1 = ((arg3 + 4 + 7) & ~7) - 4;
    unsigned short var2 = arg3;
    ((unsigned short*)arg0)[1] = (unsigned char)(var2 >> 8) | ((var2 << 8) & 0xff00);
    arg0 += 4;
    memset(arg0, 0, var1);
    memcpy(arg0, arg2, arg3);
    arg0 += var1;
    return arg0;
}
