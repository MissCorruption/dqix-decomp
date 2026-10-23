#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" void func_02076a8c(void* arg0);

// USA: func_02078660
extern "C" ARM void func_02078660(void* arg0) {
    if (((Object3D*)arg0)->GetInheritedAlpha() != 0) return;
    func_02076a8c(arg0);
    ((Object3D*)arg0)->MakeHidden();
}
