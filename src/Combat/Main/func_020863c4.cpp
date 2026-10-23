#include <globaldefs.h>

// USA: func_020863c4
extern "C" ARM void func_020863c4(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) = 0;
    *(unsigned short*)(arg0 + 0x1c) = *(unsigned short*)(arg0 + 0x6c);
    *(unsigned short*)(arg0 + 0x1e) = *(unsigned short*)(arg0 + 0x6e);
}
