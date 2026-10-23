#include <globaldefs.h>

// USA: func_ov031_0221e5f8
extern "C" THUMB unsigned short func_ov031_0221e5f8(unsigned short arg0) {
    return (unsigned short)((unsigned char)(arg0 >> 8) | ((arg0 << 8) & 0xff00));
}
