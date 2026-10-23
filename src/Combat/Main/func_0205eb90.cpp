#include <globaldefs.h>

#if defined(jpn)
#endif
extern "C" void func_0203ac40(void*, int, int, int);

// USA: func_0205eb90
extern "C" ARM void func_0205eb90(void* obj, int a, int b) {
    short s = *(short*)((char*)obj + 0xc4);
    if (s >= 0) {
        func_0203ac40(obj, s, a, b);
    }
}
