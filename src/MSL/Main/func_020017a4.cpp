#include <globaldefs.h>

// USA: func_020017a4
extern "C" ARM int abs(int arg0) {
    return arg0 < 0 ? -arg0 : arg0;
}
