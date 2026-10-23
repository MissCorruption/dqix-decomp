#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void*);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea920
extern "C" ARM int func_ov023_021ea920(void* arg0) {
    void* var0 = func_0202ae18();
    if (func_0202c540(var0) != 0) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, 0);
    }
    return 1;
}
