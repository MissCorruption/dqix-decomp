#include <globaldefs.h>

struct Struct_ov000_0216d234 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov000_0216d234_2 { Struct_ov000_0216d234 unknown_0_; Struct_ov000_0216d234 unknown_c_; Struct_ov000_0216d234 unknown_18_; Struct_ov000_0216d234 unknown_24_; };

extern "C" void Vector3fix_CrossProduct(int*, int*, int*);

// USA: func_ov000_0216d234
extern "C" ARM void func_ov000_0216d234(int* arg0, int* arg1, struct Struct_ov000_0216d234_2* arg2) {
    int var0[3];
    var0[0] = 0;
    var0[1] = 0x1000;
    var0[2] = 0;
    int var1[3];
    Vector3fix_CrossProduct(arg0, var0, var1);
    arg2->unknown_0_.unknown_0_ = var1[0];
    arg2->unknown_0_.unknown_4_ = var1[1];
    arg2->unknown_0_.unknown_8_ = var1[2];
    arg2->unknown_c_.unknown_0_ = var0[0];
    arg2->unknown_c_.unknown_4_ = var0[1];
    arg2->unknown_c_.unknown_8_ = var0[2];
    arg2->unknown_18_.unknown_0_ = arg0[0];
    arg2->unknown_18_.unknown_4_ = arg0[1];
    arg2->unknown_18_.unknown_8_ = arg0[2];
    arg2->unknown_24_.unknown_0_ = arg1[0];
    arg2->unknown_24_.unknown_4_ = arg1[1];
    arg2->unknown_24_.unknown_8_ = arg1[2];
}
