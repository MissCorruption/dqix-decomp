#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

Matrix4x3 RotationMatrixX(int angle);
extern "C" void func_020c51a4(int cmd);

// USA: func_020311f0
extern "C" ARM void func_020311f0(int angle) {
    if (angle) {
        Matrix4x3 rot;
        rot = RotationMatrixX(angle);
        func_020c51a4((int)&rot);
    }
}
