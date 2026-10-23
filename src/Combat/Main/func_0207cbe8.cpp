#include <globaldefs.h>

extern "C" void func_020de848(void* arg0);

// USA: func_0207cbe8
extern "C" ARM void func_0207cbe8(char* arg0) {
    func_020de848(arg0 + 0x14);
    *(int*)(arg0 + 0x2c) = 0;
    *(int*)(arg0 + 0x30) = 0;
    *(int*)(arg0 + 0x34) = 0;
}
