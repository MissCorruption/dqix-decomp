#include <globaldefs.h>

extern "C" void func_ov023_021eb414(char*, unsigned int);

// USA: func_ov008_02188ef0
extern "C" ARM void func_ov008_02188ef0(char* arg0) {
    unsigned int var0 = *(unsigned int*)(arg0 + 0xb18);
    if ((var0 & 0x100000) == 0 || (var0 & 0x200000) != 0) { return; }
    if (*(unsigned char*)(arg0 + 0xb2a) != 0) { return; }
    char* var1 = *(char**)(arg0 + 0xb08);
    if (var1 != 0) {
        unsigned int var2 = *(unsigned short*)(var1 + 0x438);
        if ((var2 & 0x4) == 0) {
            func_ov023_021eb414(var1, var2);
        }
    }
    *(unsigned char*)(arg0 + 0xb13) = 0;
    *(unsigned char*)(arg0 + 0xb10) = 0xd;
    *(unsigned char*)(arg0 + 0xb11) = 0;
    *(unsigned char*)(arg0 + 0xb2a) = *(unsigned char*)(arg0 + 0xb2a) + 1;
}
