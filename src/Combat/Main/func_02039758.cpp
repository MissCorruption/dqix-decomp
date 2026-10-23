#include <globaldefs.h>

#if defined(jpn)
enum { FIELD_OFFSET = 0x258 };
#else
enum { FIELD_OFFSET = 0x264 };
#endif

// USA: func_02039758
extern "C" ARM void func_02039758(void* obj, int val) {
    *(int*)((char*)obj + FIELD_OFFSET) = val;
}
