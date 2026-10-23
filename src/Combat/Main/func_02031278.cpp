#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

Matrix4x3 RotationMatrixZ(int angle);
extern "C" void func_020c51a4(int arg0);

// USA: func_02031278
extern "C" ARM void func_02031278(void* arg0) {
    Matrix4x3 var0;
    if (arg0 == NULL) return;
    var0 = RotationMatrixZ((int)arg0);
    func_020c51a4((int)&var0);
}
