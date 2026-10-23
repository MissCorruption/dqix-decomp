#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02054248_396 = 0x180 };
#else
enum { Enum_02054248_396 = 0x18c };
#endif

// USA: func_02054248
extern "C" ARM void func_02054248(void* arg0) {
    unsigned int* var0 = (unsigned int*)((char*)arg0 + Enum_02054248_396);
    unsigned int var1 = *var0;
    if (!(var1 & 0x100)) {
        return;
    }
    if (var1 & 0x80) {
        *var0 = var1 | 0x1;
    } else if (var1 & 0x80) {
        *var0 = var1 & ~0x1;
    }
    *var0 = *var0 & ~0x100;
}
