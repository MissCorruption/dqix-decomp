#include <globaldefs.h>

#include "NitroSDK/Matrix.h"

// USA: func_020c2d90
extern "C" ARM void Vector3fix_Add(const Vector3fix* arg0, const Vector3fix* arg1, Vector3fix* arg2) {
    arg2->x = arg0->x + arg1->x;
    arg2->y = arg0->y + arg1->y;
    arg2->z = arg0->z + arg1->z;
}
