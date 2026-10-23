#include <globaldefs.h>
#include "std_library_functions.h"

unsigned long long GetCurrentTimestamp(void);

// USA: func_ov023_021db0d4
extern "C" ARM void func_ov023_021db0d4(void* arg0, int arg1) {
    char* var0 = (char*)arg0;
    *(unsigned char*)(var0 + 0x24) = (unsigned char)arg1;
    *(short*)(var0 + 0x20) = 0;
    *(short*)(var0 + 0x22) = 0;
    memset(var0, 0, 0x18);
    *(short*)(var0 + 0x2) = 0xf;
    *(short*)(var0 + 0xa) = 0xf;
    *(short*)(var0 + 0x12) = 0x17;
    GetCurrentTimestamp();
}
