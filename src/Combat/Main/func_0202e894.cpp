#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_0202e5d8 { unsigned int unknown_0_[12]; };
struct Struct_0202e5d8 RotationMatrixY(int angle);

extern "C" void func_0202eab8(void* arg0);

struct Struct_0202e894 {
    unsigned int unknown_0_[3];
};

static inline void inline_0202e894(struct Struct_0202e894* arg0, struct Struct_0202e894* arg1, int arg2) {
    struct Struct_0202e894 var0;
    Vector3fix_Subtract((Vector3fix*)arg0, (Vector3fix*)arg1, (Vector3fix*)&var0);

    struct Struct_0202e5d8 var1 = RotationMatrixY(arg2);

    Mat4x3_ApplyToVector((Vector3fix*)&var0, (Matrix4x3*)&var1, (Vector3fix*)&var0);

    Vector3fix_Add((Vector3fix*)arg1, (Vector3fix*)&var0, (Vector3fix*)arg0);
}

// USA: func_0202e894
extern "C" ARM void func_0202e894(void* arg0, int arg1) {
    struct Struct_0202e894 var0;
    struct Struct_0202e894 var1;
    var0 = *(struct Struct_0202e894*)((char*)arg0 + 0x4);
    var1 = *(struct Struct_0202e894*)((char*)arg0 + 0x10);

    inline_0202e894(&var1, &var0, arg1);

    *(Vector3i*)((char*)arg0 + 0x10) = *(Vector3i*)&var1;

    func_0202eab8(arg0);
}
