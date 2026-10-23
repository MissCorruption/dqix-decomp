#include <globaldefs.h>

int AwaitCardReadManagerIdle(void);

// USA: func_020d0834
extern "C" ARM int func_020d0834(void) {
    return AwaitCardReadManagerIdle();
}
