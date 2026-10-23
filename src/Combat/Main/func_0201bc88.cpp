#include <globaldefs.h>

struct Struct_0201bc88;

// USA: func_0201bc88
extern "C" ARM void func_0201bc88(Struct_0201bc88* arg0, unsigned short arg1) {
#if defined(jpn)
    *(unsigned short*)((char*)arg0 + 0x281a) = arg1;
#else
    *(unsigned short*)((char*)arg0 + 0x27da) = arg1;
#endif
}
