#include <globaldefs.h>

extern "C" int func_020c8854(int arg0, int arg1, int arg2, void* arg3);

// USA: func_020afe34
extern "C" ARM int func_020afe34(void* arg0, int arg1) {
    return func_020c8854(*(int*)((char*)arg0 + 8), *(int*)((char*)arg0 + 4), arg1, arg0);
}
