#include <globaldefs.h>


// USA: func_ov031_0221e5d0
extern "C" THUMB unsigned int func_ov031_0221e5d0(unsigned int arg0) {
    return (unsigned char)(arg0 >> 24) | ((arg0 >> 8) & 0xff00) |
           ((arg0 << 8) & 0xff0000) | ((arg0 << 24) & 0xff000000);
}
