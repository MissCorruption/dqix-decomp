#include <globaldefs.h>

// USA: func_ov029_021d97e8
extern "C" ARM int func_ov029_021d97e8(unsigned int arg0) {
    unsigned char var0 = arg0 >> 24;
    if ((var0 & 0xe) == 10) {
        if ((var0 & 0xf0) == 0xf0) {
            return 1;
        }
        if (var0 & 1) {
            return 2;
        }
        return 3;
    }
    return 0;
}
