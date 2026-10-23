#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD_0 0x41e8
#else
#define REGION_FIELD_0 0x4498
#endif


#pragma optimize_for_size off
// USA: func_ov017_0218d75c
extern "C" ARM int func_ov017_0218d75c(void* arg0) {
    void* var0 = *(void**)((char*)arg0 + REGION_FIELD_0);
    return var0 != NULL && *(unsigned char*)((char*)var0 + 0x14) != 0;
}
