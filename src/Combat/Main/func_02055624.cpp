#include "Graphics/Model3D.h"
#include <globaldefs.h>

// USA: func_02055624
extern "C" ARM void func_02055624(void* arg0) {
    Model3D* var0 = *(Model3D**)((char*)arg0 + 0x1c);
    if (var0 == NULL) return;
    var0->RestageTexturePalette();
}
