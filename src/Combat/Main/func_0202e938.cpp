#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

// USA: func_0202e938
extern "C" ARM void func_0202e938(void* obj, int* src) {
    *(Vector3i*)((char*)obj + 0x10) = *(const Vector3i*)src;
}
