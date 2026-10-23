#include <globaldefs.h>

extern "C" int func_020d2768(void);
extern "C" int func_020d27a4(void);

// USA: func_020d27e0
extern "C" ARM int func_020d27e0(void) {
    return 0x100 - func_020d2768() - func_020d27a4();
}
