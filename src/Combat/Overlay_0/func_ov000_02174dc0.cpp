#include <globaldefs.h>
extern "C" void func_0203c198(char* obj);

// USA: func_ov000_02174dc0
extern "C" ARM void func_ov000_02174dc0(void* obj) {
    int i;
#if !defined(jpn)
    for (i = 0; i < 3; i++) {
        func_0203c198((char*)obj + 0x1b0c + i * 0x18);
    }
#endif
    for (i = 0; i < 8; i++) {
#if defined(jpn)
        func_0203c198((char*)obj + 0x1d94 + i * 0x38);
#else
        func_0203c198((char*)obj + 0x1c5c + i * 0x18);
#endif
    }
}
