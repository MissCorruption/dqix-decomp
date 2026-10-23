#include <globaldefs.h>

void LockCardReadManager(unsigned short, int);
typedef void (*Type_020d0040)(int, int);

// USA: func_020d0040
extern "C" ARM void func_020d0040(int arg0) {
    ((Type_020d0040)&LockCardReadManager)(arg0, 2);
}
