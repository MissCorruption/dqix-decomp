#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

// USA: func_ov000_0216f1e4
extern "C" ARM void func_ov000_0216f1e4(void* arg0, int* arg1, int arg2, int arg3) {
    *(Vector3i*)((char*)arg0 + 0x264) = *(Vector3i*)arg1;
    *(int*)((char*)arg0 + 0x270) = arg2;
    *(int*)((char*)arg0 + 0x274) = arg3;
}
