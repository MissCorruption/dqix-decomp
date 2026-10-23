#include <globaldefs.h>

struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" void Vector3fix_Normalize(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32SignedAngleDistance(int a, int b);

// USA: func_ov017_021a4700
extern "C" ARM short func_ov017_021a4700(struct Struct_ov009_0218aa28* arg0, int arg1, struct Struct_ov009_0218aa28* arg2) {
    struct Struct_ov009_0218aa28 var0;
    Vector3fix_Subtract(arg2, arg0, &var0);
    Vector3fix_Normalize(&var0, &var0);
    int var1 = fix32_Atan2(var0.unknown_0_, var0.unknown_8_);
    return (short)fix32SignedAngleDistance(arg1, var1);
}
