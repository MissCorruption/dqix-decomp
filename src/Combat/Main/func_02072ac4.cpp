#include <globaldefs.h>
#include "World/Object3D.h"

// USA: func_02072ac4
extern "C" ARM void func_02072ac4(void* arg0) {
    ((Object3D*)arg0)->Initialize();
    *(int*)((char*)arg0 + 0xac) = -1;
}
