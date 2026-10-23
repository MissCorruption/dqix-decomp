#include <globaldefs.h>

#include "NitroSDK/Matrix.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020c2e34
extern "C" ARM void Vector3fix_CrossProduct(const Vector3fix* arg0, const Vector3fix* arg1, Vector3fix* arg2) {
    fix32_t var0, var1, var2;

    var0 = (fix32_t)(((long long)arg0->y * arg1->z - (long long)arg0->z * arg1->y + 0x800) >> 12);
    var1 = (fix32_t)(((long long)arg0->z * arg1->x - (long long)arg0->x * arg1->z + 0x800) >> 12);
    var2 = (fix32_t)(((long long)arg0->x * arg1->y - (long long)arg0->y * arg1->x + 0x800) >> 12);

    arg2->x = var0;
    arg2->y = var1;
    arg2->z = var2;
}
