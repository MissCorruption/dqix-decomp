#include <globaldefs.h>

extern "C" void func_02032e58(void*);

// USA: func_020a75a0
extern "C" ARM void func_020a75a0(char* arg0) {
    func_02032e58(arg0);
    *(unsigned short*)arg0 |= 0x8000;
    *(int*)(arg0 + 0x134) = 0;
    *(int*)(arg0 + 0x138) = 0;
    *(short*)(arg0 + 0x13c) = 0;
    *(int*)(arg0 + 0x140) = 0;
    *(int*)(arg0 + 0x150) = 0;
    *(int*)(arg0 + 0x144) = 0;
    *(int*)(arg0 + 0x148) = 0;
    *(int*)(arg0 + 0x14c) = 0;
    arg0[0x15a] = 1;
}
