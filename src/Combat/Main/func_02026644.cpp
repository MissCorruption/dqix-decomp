#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_02026644
extern "C" ARM void func_02026644(char* arg0) {
    if (((unsigned char*)arg0)[0x12] != 0) {
#if defined(jpn)
        arg0[0x6cd] = 0;
#else
        arg0[0x779] = 0;
#endif
#if defined(jpn)
        arg0[0x90e] = 0;
#else
        arg0[0x9ba] = 0;
#endif
    }
#if defined(jpn)
    arg0[0x6d4] = 0;
#else
    arg0[0x780] = 0;
#endif
#if defined(jpn)
    VectorizedMemset(arg0 + 0x6d8, 0, 0x230);
#else
    VectorizedMemset(arg0 + 0x784, 0, 0x230);
#endif
}
