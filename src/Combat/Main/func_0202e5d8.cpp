#include <globaldefs.h>

int fix32ReduceAngle0To2Pi(int);
extern "C" int fix32_Sqrt(int arg0);

struct Struct_ov009_0218aa28;
extern "C" void Vector3fix_Add(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);

struct Struct_0202e5d8 { unsigned int unknown_0_[12]; };
struct Struct_0202e5d8 RotationMatrixY(int angle);

struct Struct_0202e5d8_2;
struct Struct_0202e5d8_3;
extern "C" void Mat4x3_ApplyToVector(struct Struct_0202e5d8_2* arg0, struct Struct_0202e5d8_3* arg1, struct Struct_0202e5d8_2* arg2);

static inline int inline_0202e5d8(int arg0, int arg1) {
    return (int)(((long long)arg0 * arg1 + 0x800) >> 12);
}

struct Struct_0202e5d8_4 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_0202e5d8
extern "C" ARM void func_0202e5d8(void* arg0, int arg1, int arg2, int arg3) {
    int var0;
    int var1, var2, var3;
    struct Struct_0202e5d8_4 var4;
    struct Struct_0202e5d8 var5;

    var0 = fix32ReduceAngle0To2Pi(arg1);
    *(int*)((char*)arg0 + 0x70) = var0;
    *(int*)((char*)arg0 + 0x74) = arg2;
    *(int*)((char*)arg0 + 0x78) = arg3;

    var1 = inline_0202e5d8(arg2, arg2);
    var2 = inline_0202e5d8(arg3, arg3);
    var3 = var2 - var1;

    var4.unknown_0_ = 0;
    var4.unknown_4_ = arg2;
    var4.unknown_8_ = fix32_Sqrt(var3);

    var5 = RotationMatrixY(var0);

    Mat4x3_ApplyToVector((struct Struct_0202e5d8_2*)&var4, (struct Struct_0202e5d8_3*)&var5, (struct Struct_0202e5d8_2*)&var4);

    Vector3fix_Add((struct Struct_ov009_0218aa28*)((char*)arg0 + 0x10), (struct Struct_ov009_0218aa28*)&var4, (struct Struct_ov009_0218aa28*)((char*)arg0 + 4));
}
