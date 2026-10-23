#include <globaldefs.h>

struct Vector3fix
{
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void Vector3fix_Subtract(const Vector3fix* arg0, const Vector3fix* arg1, Vector3fix* arg2);
extern "C" void Vector3fix_Normalize(const Vector3fix* arg0, Vector3fix* arg1);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int);

// USA: func_02032424
extern "C" ARM int func_02032424(const Vector3fix* arg0, const Vector3fix* arg1) {
    Vector3fix var0;
    Vector3fix_Subtract(arg1, arg0, &var0);
    Vector3fix_Normalize(&var0, &var0);
    return fix32ReduceAngle0To2Pi(fix32_Atan2(-var0.unknown_0_, -var0.unknown_8_));
}
