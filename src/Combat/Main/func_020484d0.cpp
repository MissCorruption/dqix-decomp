#include <globaldefs.h>
#include "World/Object3D.h"

// USA: func_020484d0
extern "C" ARM void func_020484d0(void* arg0) {
    ((Object3D*)arg0)->Initialize();
    *(unsigned short*)arg0 |= 0x400;
    *(int*)((char*)arg0 + 0xb0) = 0;
    *(int*)((char*)arg0 + 0xac) = 0;
}
