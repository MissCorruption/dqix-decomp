#include <globaldefs.h>

void LockCardReadManager(unsigned short, int);
typedef void (*LockCardReadManagerRawFn)(int, int);

// USA: func_020d0040
extern "C" ARM void func_020d0040(int x) {
    ((LockCardReadManagerRawFn)&LockCardReadManager)(x, 2);
}
