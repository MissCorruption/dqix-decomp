#include <globaldefs.h>

// USA: func_02079710
extern "C" ARM void func_02079710(unsigned char* arg0, int arg1, int arg2) {
    arg0[0x17e] |= (1 << arg1);
    if (arg2) {
        arg0[0x17e] |= (1 << (arg1 + 4));
    }
}
