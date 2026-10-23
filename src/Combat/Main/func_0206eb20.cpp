#include <globaldefs.h>

extern "C" void func_0206ea8c(void* arg0, void* arg1, int arg2, int arg3);

// USA: func_0206eb20
extern "C" ARM void func_0206eb20(void* arg0, void* arg1, int arg2, int arg3) {
    for (; arg2 < arg3; arg2++) {
        func_0206ea8c(arg0, arg1, (short)arg2, 0);
    }
}
