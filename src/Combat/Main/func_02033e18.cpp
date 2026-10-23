#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

// USA: func_02033e18
extern "C" ARM void func_02033e18(void* arg0, int* arg1, short arg2) {
    *(short*)((char*)arg0 + 0xc6) = arg2;
    *(Vector3i*)((char*)arg0 + 0xc8) = *(Vector3i*)arg1;
}
