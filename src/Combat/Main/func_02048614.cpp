#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020489bc(void* arg0);

// USA: func_02048614
extern "C" ARM void func_02048614(unsigned char* arg0) {
    func_020489bc(arg0);
    *(unsigned short*)arg0 |= 0x400;
    *(int*)(arg0 + 0x148) = 0;
    *(int*)(arg0 + 0x144) = 0;
    arg0[0x17c] = 0;
    arg0[0x17d] = 0;
    arg0[0x17e] = 0;
    arg0[0x17f] = 0;
    arg0[0x180] = 0;
    arg0[0x181] = 0;
    arg0[0x182] = 0;
    arg0[0x183] = 0;
    arg0[0x184] = 0;
    memset(arg0 + 0x14c, 0, 0x30);
    *(unsigned short*)(arg0 + 0x186) = 0;
    *(unsigned short*)(arg0 + 0x188) = 0;
    *(unsigned short*)(arg0 + 0x18a) = 0;
    arg0[0x18c] = 0;
    arg0[0x18d] = 0;
    *(unsigned short*)(arg0 + 0x18e) = 0x1000;
}
