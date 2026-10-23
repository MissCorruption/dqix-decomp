#include <globaldefs.h>

extern "C" void func_020de848(void* obj);

// USA: func_0207cbe8
extern "C" ARM void func_0207cbe8(char* obj) {
    func_020de848(obj + 0x14);
    *(int*)(obj + 0x2c) = 0;
    *(int*)(obj + 0x30) = 0;
    *(int*)(obj + 0x34) = 0;
}
