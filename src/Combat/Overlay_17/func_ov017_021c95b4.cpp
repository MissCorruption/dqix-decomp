#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" int func_ov017_021d446c(void* arg0, void* arg1, int arg2);
extern "C" void func_02076a8c(void* arg0);

// USA: func_ov017_021c95b4
extern "C" ARM void func_ov017_021c95b4(int arg0, unsigned char* arg1) {
    int var0[3];
    if (func_ov017_021d446c(arg1 + 4, var0, -1)) {
        func_02076a8c((void*)var0[2]);
        ((Object3D*)((unsigned char*)var0[2]))->MakeHidden();
    }
}
