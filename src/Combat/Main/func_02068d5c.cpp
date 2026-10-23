#include <globaldefs.h>

extern "C" int func_020680cc(int);

// USA: func_02068d5c
extern "C" ARM int func_02068d5c(int arg0, void* arg1) {
    int* var0 = *(int**)((char*)arg1 + 0x18);
    if (var0 != NULL) {
        return func_020680cc(*var0) == 0;
    }
    return 0;
}
