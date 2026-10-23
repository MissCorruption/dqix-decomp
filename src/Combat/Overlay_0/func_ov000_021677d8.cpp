#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x5b00
#else
#define REGION_OFFSET_0 0x5910
#endif


// USA: func_ov000_021677d8
extern "C" ARM void* func_ov000_021677d8(void* arg0, int arg1) {
    if (arg1 >= 0) {
        if (arg1 < 4) {
            return (char*)arg0 + REGION_OFFSET_0 + arg1 * 0x10;
        }
    }
    return (void*)0;
}
