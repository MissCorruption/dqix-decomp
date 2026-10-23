#include <globaldefs.h>

// USA: func_ov025_021ed350
extern "C" ARM void func_ov025_021ed350(char* arg0, int arg1, unsigned short arg2) {
    *(unsigned short*)(arg0 + arg1 * 2 + 0x80) = arg2;
}
