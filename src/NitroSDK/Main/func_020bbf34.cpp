#include <globaldefs.h>

extern char data_0210f844;

// USA: func_020bbf34
extern "C" ARM void func_020bbf34(int arg0, int arg1) {
    (&data_0210f844)[arg0 * 0x24] = (char)arg1;
}
