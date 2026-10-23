#include <globaldefs.h>

extern "C" int func_020680cc(int);

// USA: func_02068d8c
extern "C" ARM int func_02068d8c(int arg0, void* arg1) {
    int* var0 = *(int**)((char*)arg1 + 0x20);
    if (var0 != NULL) {
        return func_020680cc(*var0) == 0;
    }
    return 0;
}
