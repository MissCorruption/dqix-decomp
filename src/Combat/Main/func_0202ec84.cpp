#include <globaldefs.h>

struct Vector3i;
int ConvertWorldToScreenCoordinates(Vector3i const*, int*, int*);

struct Struct_02015ef4 {
    unsigned int unknown_0_[3];
};

// USA: func_0202ec84
extern "C" ARM int func_0202ec84(void* arg0, struct Struct_02015ef4* arg1, int* arg2, int* arg3) {
    struct Struct_02015ef4 var0 = *arg1;
    int var1, var2;
    int var3 = ConvertWorldToScreenCoordinates((Vector3i const*)&var0, &var1, &var2);
    *arg2 = var1;
    *arg3 = var2;
    return var3;
}
