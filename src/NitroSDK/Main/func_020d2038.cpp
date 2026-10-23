#include <globaldefs.h>

extern "C" int func_020d217c(int arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_020d2038
extern "C" ARM void func_020d2038(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9) {
    func_020d217c(0xe,
        arg0 | (arg8 << 16),
        arg2,
        arg5 | ((arg6 << 24) | (arg7 << 22)),
        arg4 | (((arg3 << 26) | (arg1 << 24)) | (arg9 << 16)));
}
