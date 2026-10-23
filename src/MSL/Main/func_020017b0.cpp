#include <globaldefs.h>

// USA: func_020017b0
extern "C" ARM int labs(int arg0) {
    return arg0 < 0 ? -arg0 : arg0;
}
