#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" void func_0202e5d8(void* arg0, int arg1, int arg2, int arg3);

// USA: func_0202ec5c
extern "C" ARM void func_0202ec5c(char* arg0, int* arg1) {
    *(Vector3i*)(arg0 + 0x10) = *(Vector3i*)arg1;
    func_0202e5d8(arg0, *(int*)(arg0 + 0x70), *(int*)(arg0 + 0x74), *(int*)(arg0 + 0x78));
}
