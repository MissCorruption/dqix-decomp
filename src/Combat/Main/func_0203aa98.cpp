#include <globaldefs.h>

extern "C" void* func_020bd42c(void* value);
extern "C" int func_020bdc80(void* obj, int arg);

// USA: func_0203aa98
extern "C" ARM int func_0203aa98(void* obj, int index) {
    if (*(int*)obj == 0) return 0;
    if (index >= 0xffff || index < 0) return 0;
    func_020bd42c((char*)obj + 4);
    return func_020bdc80((void*)index, *(int*)obj) != 0 ? 1 : 0;
}
