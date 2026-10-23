#include <globaldefs.h>

extern "C" int func_0202e808(void*, int);

// USA: func_0202e858
extern "C" ARM int func_0202e858(void* arg0, int arg1) {
    int var0 = *(int*)((char*)arg0 + 0x78);
    arg1 += var0;
    if (arg1 < 0x1000) arg1 = 0x1000;
    return func_0202e808(arg0, arg1);
}
