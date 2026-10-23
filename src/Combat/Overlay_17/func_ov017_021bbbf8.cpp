#include <globaldefs.h>
#if defined(jpn)
#define REGION_FIELD 0x118
#else
#define REGION_FIELD 0x11c
#endif

// USA: func_ov017_021bbbf8
extern "C" ARM void func_ov017_021bbbf8(void* arg0, unsigned short arg1) {
    *(unsigned short*)((char*)arg0 + REGION_FIELD) = arg1;
}
