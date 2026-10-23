#include <globaldefs.h>

// USA: func_ov002_02168c00
extern "C" ARM int func_ov002_02168c00(unsigned char* arg0) {
    int var0 = (*(int*)(arg0 + 0x60) == -1);
    int var1 = (*(int*)(arg0 + 0x64) == -1);
    return (var0 & var1) != 0;
}
