#include <globaldefs.h>
// USA: func_0207c620
extern "C" ARM signed short func_0207c620(unsigned char *arg0, unsigned int arg1) {
    if (arg1 > 7) return -1;
    return *(signed short*)(arg0 + 0xc10 + arg1 * 2);
}
