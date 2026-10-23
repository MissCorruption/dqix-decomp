#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

Matrix4x3 RotationMatrixX(int angle);
extern "C" void func_020c51a4(int arg0);

// USA: func_020311f0
extern "C" ARM void func_020311f0(int arg0) {
    if (arg0) {
        Matrix4x3 var0;
        var0 = RotationMatrixX(arg0);
        func_020c51a4((int)&var0);
    }
}
