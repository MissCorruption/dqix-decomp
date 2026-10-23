#include <globaldefs.h>
#include "Combat/FormationPosition.h"

// USA: func_ov000_0216f74c
extern "C" ARM struct Struct_02048cf0 func_ov000_0216f74c(int* arg0) {
    int var0 = *arg0;
    int var1 = var0 / 9;
    int var2 = var0 % 9;
    float var3 = -42566.87890625f + 10641.7197265625f * (float)var2;
    struct Struct_02048cf0 var4;
    var4.unknown_0_ = (int)(var3 + 5320.85986328125f * (float)(var1 % 2));
    var4.unknown_4_ = (int)(-36864.0f + 3.0f * (3072.0f * (float)var1));
    return var4;
}
