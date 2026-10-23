#include <globaldefs.h>
#include "World/Object3D.h"

// USA: func_0204715c
extern "C" ARM void func_0204715c(char* arg0) {
    void* var0 = *(void**)(arg0 + 0xe8);
    if (var0 != NULL) {
        ((Object3D*)var0)->Draw(1);
        return;
    }
    if (*(unsigned char*)(arg0 + 0x1d) != 0) {
        ((Object3D*)(arg0 + 0x3c))->Draw(1);
    }
}
