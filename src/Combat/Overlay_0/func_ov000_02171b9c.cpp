#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x430
#else
#define REGION_OFFSET_0 0x3f0
#endif

#pragma optimize_for_size off

// USA: func_ov000_02171b9c
extern "C" ARM void* func_ov000_02171b9c(void* arg0, int arg1) {
    if (arg1 < 0) goto fail;
    if (arg1 < 0x10) goto ok;
fail:
    return NULL;
ok:
    return *(void**)((char*)arg0 + arg1 * 4 + REGION_OFFSET_0);
}
