#include <globaldefs.h>

// USA: func_ov000_0216f728
extern "C" ARM int func_ov000_0216f728(unsigned short* arg0) {
    int var0 = 0;
    if (arg0) {
        unsigned short var1 = *arg0;
        var0 = (unsigned int)(var1 - 9) <= 2;
    }
    return var0;
}
