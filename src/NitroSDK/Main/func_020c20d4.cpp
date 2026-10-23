#include <globaldefs.h>

struct Struct_020c20d4 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_020c20d4_2 { int unknown_0_[3][3]; int unknown_24_[3]; };

extern "C" void Vector3fix_CrossProduct(int* arg0, int* arg1, int* arg2);
extern "C" void Vector3fix_Normalize(struct Struct_020c20d4* arg0, struct Struct_020c20d4* arg1);
extern "C" int Vector3fix_InnerProduct(struct Struct_020c20d4* arg0, struct Struct_020c20d4* arg1);

// USA: func_020c20d4
extern "C" ARM void Mat4x3_WriteViewMatrix(struct Struct_020c20d4* arg0, struct Struct_020c20d4* arg1, struct Struct_020c20d4* arg2, struct Struct_020c20d4_2* arg3) {
    struct Struct_020c20d4 var0;
    var0.unknown_0_ = arg0->unknown_0_ - arg2->unknown_0_;
    var0.unknown_4_ = arg0->unknown_4_ - arg2->unknown_4_;
    var0.unknown_8_ = arg0->unknown_8_ - arg2->unknown_8_;
    Vector3fix_Normalize(&var0, &var0);

    struct Struct_020c20d4 var1;
    Vector3fix_CrossProduct((int*)arg1, (int*)&var0, (int*)&var1);
    Vector3fix_Normalize(&var1, &var1);

    struct Struct_020c20d4 var2;
    Vector3fix_CrossProduct((int*)&var0, (int*)&var1, (int*)&var2);

    arg3->unknown_0_[0][0] = var1.unknown_0_;
    arg3->unknown_0_[0][1] = var2.unknown_0_;
    arg3->unknown_0_[0][2] = var0.unknown_0_;
    arg3->unknown_0_[1][0] = var1.unknown_4_;
    arg3->unknown_0_[1][1] = var2.unknown_4_;
    arg3->unknown_0_[1][2] = var0.unknown_4_;
    arg3->unknown_0_[2][0] = var1.unknown_8_;
    arg3->unknown_0_[2][1] = var2.unknown_8_;
    arg3->unknown_0_[2][2] = var0.unknown_8_;

    arg3->unknown_24_[0] = -Vector3fix_InnerProduct(arg0, &var1);
    arg3->unknown_24_[1] = -Vector3fix_InnerProduct(arg0, &var2);
    arg3->unknown_24_[2] = -Vector3fix_InnerProduct(arg0, &var0);
}
