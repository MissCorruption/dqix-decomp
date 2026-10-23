#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021ea8e8
extern "C" ARM int func_ov023_021ea8e8(void* arg0) {
    if (func_0202b7d8((int*)func_0202ae18()) != 0) {
        func_ov017_021d6134(arg0, 1);
    } else {
        func_ov017_021d6134(arg0, 0);
    }
    return 1;
}
