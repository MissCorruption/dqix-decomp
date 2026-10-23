#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" unsigned int func_ov006_02154e58(unsigned int, unsigned int);

// USA: func_ov006_02158038
extern "C" ARM void func_ov006_02158038(void* arg0) {
    unsigned char var0 = *(unsigned char*)((char*)arg0 + 0x38f);
    if (var0 != 0) {
        func_ov006_02154e58(*(unsigned int*)((char*)arg0 + R(8, 0x10)), var0);
    }
}
