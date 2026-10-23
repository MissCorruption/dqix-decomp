#include <globaldefs.h>

extern "C" void* func_0207d9f4(unsigned char* arg0, int arg1);

// USA: func_0207da30
extern "C" ARM int func_0207da30(unsigned char* arg0, int arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)func_0207d9f4(arg0, arg2);
    if (var0 == NULL) return 0;
    if (*(unsigned short*)var0 != arg1) return 0;
    return *(signed char*)(var0 + arg2 + 8) != -1;
}
