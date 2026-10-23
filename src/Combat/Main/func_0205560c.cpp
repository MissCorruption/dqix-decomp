#include <globaldefs.h>
#include "Graphics/Model3D.h"

// USA: func_0205560c
extern "C" ARM void func_0205560c(void* arg0) {
    Model3D* var0 = *(Model3D**)((char*)arg0 + 0x1c);
    if (var0 != NULL)
        var0->RestageTextureImage();
}
