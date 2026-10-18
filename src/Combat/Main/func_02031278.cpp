#include <globaldefs.h>
#include <System/Matrix.h>

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

Matrix4x3 RotationMatrixZ(int angle);
extern "C" void func_020c51a4(int cmd);

// USA: func_02031278
extern "C" ARM void func_02031278(void* p) {
    Matrix4x3 rot;
    if (p == NULL) return;
    rot = RotationMatrixZ((int)p);
    func_020c51a4((int)&rot);
}
