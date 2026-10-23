#include <globaldefs.h>
#include "World/Object3D.h"

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_02041628
extern "C" ARM void func_02041628(void* arg0, int arg1, int) {
    unsigned char* var0 = (unsigned char*)arg0 + RG(0x2e8, 0x2dc);
    *var0 = arg1;
    ((Object3D*)arg0)->MaybeSetBCFGAnimation(*var0, 0);
}
