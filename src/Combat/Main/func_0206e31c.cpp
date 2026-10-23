#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void* arg0);

// USA: func_0206e31c
extern "C" ARM int func_0206e31c(int arg0, int arg1) {
    if (func_0202c540(func_0202ae18())) {
        if (arg1 < 0xae) return 0;
    }
    return 1;
}
