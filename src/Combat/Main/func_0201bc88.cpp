#include <globaldefs.h>

struct S_bc88;

// USA: func_0201bc88
extern "C" ARM void func_0201bc88(S_bc88* obj, unsigned short value) {
#if defined(jpn)
    *(unsigned short*)((char*)obj + 0x281a) = value;
#else
    *(unsigned short*)((char*)obj + 0x27da) = value;
#endif
}
