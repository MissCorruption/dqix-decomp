#include <globaldefs.h>

extern "C" void func_020bf148(void*, int);

// USA: func_020bec58
extern "C" ARM void func_020bec58(void* volatile* arg0, int arg1) {
    if (*arg0 != NULL) {
        func_020bf148(*arg0, arg1);
    }
}
