#include <globaldefs.h>

#if defined(jpn)
#define BYTE_LOOKUP_COUNT 0x54c1
#define BYTE_LOOKUP_VALUES 0x54bd
#else
#define BYTE_LOOKUP_COUNT 0x5721
#define BYTE_LOOKUP_VALUES 0x571d
#endif

// USA: func_02011518
extern "C" ARM int func_02011518(void* arg0, unsigned int arg1) {
    if (arg1 < ((unsigned char*)arg0)[BYTE_LOOKUP_COUNT]) {
        return ((signed char*)arg0 + arg1)[BYTE_LOOKUP_VALUES];
    }
    return -1;
}
