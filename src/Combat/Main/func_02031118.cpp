#include <globaldefs.h>

#include "World/Bounds3D.h"

// USA: func_02031118
extern "C" ARM int func_02031118(const Vector3fix* arg0, const Struct_02018fbc* arg1) {
    if (arg1->unknown_0_.x < arg0->x) return 0;
    if (arg1->unknown_0_.y < arg0->y) return 0;
    if (arg1->unknown_0_.z < arg0->z) return 0;
    if (arg0->x < arg1->unknown_c_.x) return 0;
    if (arg0->y < arg1->unknown_c_.y) return 0;
    return arg0->z >= arg1->unknown_c_.z ? 1 : 0;
}
