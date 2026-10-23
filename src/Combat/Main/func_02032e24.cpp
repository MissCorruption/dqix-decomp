#include <globaldefs.h>

#include "Resource/TextEncoding.h"

// USA: func_02032e24
extern "C" ARM unsigned short func_02032e24(unsigned short arg0, struct Struct_020e743c* arg1, int arg2) {
    arg2++;
    while (arg2-- != 0) {
        if (arg1->unknown_2_ == arg0) return arg1->unknown_0_;
        arg1++;
    }
    return 0x8140;
}
