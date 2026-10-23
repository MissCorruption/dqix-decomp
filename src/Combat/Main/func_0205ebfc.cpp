#include <globaldefs.h>

#if defined(jpn)
#endif

extern "C" void func_0203ac40(void*, int, int, int);

// USA: func_0205ebfc
extern "C" ARM void func_0205ebfc(void* arg0, int arg1, int arg2) {
    short var0 = *(short*)((char*)arg0 + 0xc4);
    if (var0 >= 0) {
        func_0203ac40(arg0, var0, arg1, arg2);
    }
}
