#include <globaldefs.h>

// USA: func_02020084
extern "C" ARM int func_02020084(unsigned char* arg0, int arg1) {
    int var0;
    if (arg1 >= 0 && arg1 <= 3) var0 = 1;
    else var0 = 0;
    if (var0) {
        return (arg0[0x55d] & (1 << arg1)) != 0;
    }
    return 0;
}
