#include <globaldefs.h>

// USA: func_020c11a4
extern "C" ARM void Mat3x3_ApplyScale(int* arg0, int* arg1, int arg2, int arg3, int arg4) {
    arg1[0] = (int)(((long long)arg2 * arg0[0]) >> 12);
    arg1[1] = (int)(((long long)arg2 * arg0[1]) >> 12);
    arg1[2] = (int)(((long long)arg2 * arg0[2]) >> 12);
    arg1[3] = (int)(((long long)arg3 * arg0[3]) >> 12);
    arg1[4] = (int)(((long long)arg3 * arg0[4]) >> 12);
    arg1[5] = (int)(((long long)arg3 * arg0[5]) >> 12);
    arg1[6] = (int)(((long long)arg4 * arg0[6]) >> 12);
    arg1[7] = (int)(((long long)arg4 * arg0[7]) >> 12);
    arg1[8] = (int)(((long long)arg4 * arg0[8]) >> 12);
}
