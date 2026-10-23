#include <globaldefs.h>

#if defined(jpn)
#define FIELD_OFFSET 0x4111
#else
#define FIELD_OFFSET 0x4331
#endif

// USA: func_ov017_0218d4ec
extern "C" ARM int func_ov017_0218d4ec(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0 + FIELD_OFFSET;
    return *var0 & (1 << arg1);
}
