#include <globaldefs.h>

#if defined(jpn)
enum { FLAGS_OFFSET = 0x180 };
#else
enum { FLAGS_OFFSET = 0x18c };
#endif

// USA: func_02054224
extern "C" ARM void func_02054224(void* obj) {
    unsigned int* flags = (unsigned int*)((char*)obj + FLAGS_OFFSET);
    *flags |= 0x180;
}
