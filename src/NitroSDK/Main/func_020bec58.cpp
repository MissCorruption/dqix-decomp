#include <globaldefs.h>

extern "C" void func_020bf148(void*, int);

// USA: func_020bec58
extern "C" ARM void func_020bec58(void* volatile* slot, int arg) {
    if (*slot != NULL) {
        func_020bf148(*slot, arg);
    }
}
