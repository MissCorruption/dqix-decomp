#include <globaldefs.h>
#include "World/Object3D.h"

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_02041640
extern "C" ARM void func_02041640(void* arg0, int arg1, int) {
    int* var0 = (int*)((char*)arg0 + RG(0x2f4, 0x2e8));
    *var0 = arg1;
    ((Object3D*)arg0)->MaybeSetRegularAnimation((char const*)(*var0), 0);
}
