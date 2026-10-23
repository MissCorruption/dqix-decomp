#include <globaldefs.h>

extern "C" int func_020d41e8(void);

// USA: func_020d4aa8
extern "C" ARM int func_020d4aa8(void) {
    if (func_020d41e8()) return 0x8000;
    return *(unsigned short*)0x027ffcfa;
}
