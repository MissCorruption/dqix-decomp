#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" fix32_t Vector3fix_InnerProduct(const Vector3fix *arg0, const Vector3fix *arg1);

// USA: func_02032124
extern "C" ARM int func_02032124(const Vector3fix *arg0, const Vector4fix *arg1) {
    return Vector3fix_InnerProduct(&arg1->xyz, arg0) - arg1->w;
}
