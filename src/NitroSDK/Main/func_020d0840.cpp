#include <globaldefs.h>

int IsCardReadManagerIdle(void);

// USA: func_020d0840
extern "C" ARM int func_020d0840(void) {
    return IsCardReadManagerIdle();
}
