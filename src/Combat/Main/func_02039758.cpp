#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02039758_612 = 0x258 };
#else
enum { Enum_02039758_612 = 0x264 };
#endif

// USA: func_02039758
extern "C" ARM void func_02039758(void* arg0, int arg1) {
    *(int*)((char*)arg0 + Enum_02039758_612) = arg1;
}
