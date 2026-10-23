#include <globaldefs.h>
#include "Graphics/Vector.h"

// USA: func_02032090
extern "C" ARM int func_02032090(const Vector3fix* arg0, const Vector3fix* arg1,
                                 const Vector4fix* arg2, fix32_t* arg3, Vector3fix* arg4)
{
    Vector3fix var0;

    Vector3fix_Subtract(arg1, arg0, &var0);
    *arg3 = fix32_Divide(arg2->w - Vector3fix_InnerProduct(&arg2->xyz, arg0),
                              Vector3fix_InnerProduct(&arg2->xyz, &var0));
    if (*arg3 >= 0 && *arg3 <= 0x1000) {
        Vector3fixMultiplyScalar(&var0, *arg3, arg4);
        Vector3fix_Add(arg0, arg4, arg4);
        return 1;
    }
    return 0;
}
