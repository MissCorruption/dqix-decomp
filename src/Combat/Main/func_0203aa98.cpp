#include <globaldefs.h>

extern "C" void* func_020bd42c(void* arg0);
extern "C" int func_020bdc80(void* arg0, int arg1);

// USA: func_0203aa98
extern "C" ARM int func_0203aa98(void* arg0, int arg1) {
    if (*(int*)arg0 == 0) return 0;
    if (arg1 >= 0xffff || arg1 < 0) return 0;
    func_020bd42c((char*)arg0 + 4);
    return func_020bdc80((void*)arg1, *(int*)arg0) != 0 ? 1 : 0;
}
