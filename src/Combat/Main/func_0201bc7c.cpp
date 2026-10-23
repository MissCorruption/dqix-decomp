#include <globaldefs.h>

struct Struct_0201bc7c;

// USA: func_0201bc7c
extern "C" ARM void func_0201bc7c(Struct_0201bc7c* arg0, unsigned short arg1) {
#if defined(jpn)
    *(unsigned short*)((char*)arg0 + 0x2818) = arg1;
#else
    *(unsigned short*)((char*)arg0 + 0x27d8) = arg1;
#endif
}
