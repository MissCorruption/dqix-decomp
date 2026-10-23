#include <globaldefs.h>

#include "World/Bounds3D.h"
#include "Graphics/Vector.h"

static inline int inline_020321e0(int arg0) {
    return (int)(((long long)arg0 * arg0 + 0x800) >> 12);
}

// USA: func_020321e0
extern "C" ARM int func_020321e0(const Vector3fix* arg0, const Struct_02018fbc* arg1, int arg2, const Vector3fix* arg3, int arg4) {
    Vector3fix var0 = *arg0;
    Vector3fix var1;
    Matrix4x3 var2;
    int var3;

    if (arg2 != 0) {
        int var4, var5;

        Vector3fix_Subtract(arg0, arg3, &var1);
        var4 = inline_020321e0(var1.z);
        var5 = inline_020321e0(var1.x);
        var3 = var5 + var4;
        if (arg4 < var3) {
            return 0;
        }
        var2 = RotationMatrixY(fix32ReduceAngle0To2Pi(-arg2));
        Mat4x3_ApplyToVector(&var1, &var2, &var1);
        Vector3fix_Add(&var1, arg3, &var0);
    }
    return func_02031118(&var0, arg1);
}
