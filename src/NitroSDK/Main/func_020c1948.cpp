#include <globaldefs.h>

extern "C" void Mat3x3_ApplyScale(int* arg0, int* arg1, int arg2, int arg3, int arg4);

// USA: func_020c1948
extern "C" ARM void Mat4x3_ApplyScale(int* arg0, int* arg1, int arg2, int arg3, int arg4) {
    Mat3x3_ApplyScale(arg0, arg1, arg2, arg3, arg4);
    arg1[9] = arg0[9];
    arg1[10] = arg0[10];
    arg1[11] = arg0[11];
}
