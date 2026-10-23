#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" void func_0202e5d8(void* obj, int a, int b, int c);

// USA: func_0202ec5c
extern "C" ARM void func_0202ec5c(char* obj, int* src) {
    *(Vector3i*)(obj + 0x10) = *(Vector3i*)src;
    func_0202e5d8(obj, *(int*)(obj + 0x70), *(int*)(obj + 0x74), *(int*)(obj + 0x78));
}
