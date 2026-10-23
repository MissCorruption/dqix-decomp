#include <globaldefs.h>

extern char* data_ov031_02290cfc;

// USA: func_ov031_0223607c
extern "C" ARM unsigned char func_ov031_0223607c(int arg0) {
    return *(unsigned char*)(data_ov031_02290cfc + (arg0 << 8) + 0xe7);
}
