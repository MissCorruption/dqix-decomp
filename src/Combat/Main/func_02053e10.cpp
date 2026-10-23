#include <globaldefs.h>
#include "Graphics/Model3D.h"

#if defined(jpn)
enum { Enum_02053e10_416 = 0x194 };
#else
enum { Enum_02053e10_416 = 0x1a0 };
#endif

struct Struct_0204a4ac_3;

extern char data_020f048a;
extern char data_020f048f;
extern char data_020f0495;
extern char data_020f049b;
extern char data_020f04a1;
extern char data_020f04a7;
extern char data_020f04ad;

struct Struct_02053e10 {
    char unknown_0_[0x8];
    struct Struct_0204a4ac_3* unknown_8_;
    char unknown_c_[Enum_02053e10_416 - 0xc];
    unsigned char unknown_1a0_;
    unsigned char unknown_1a1_;
    unsigned char unknown_1a2_;
    unsigned char unknown_1a3_;
    unsigned char unknown_1a4_;
    unsigned char unknown_1a5_;
    unsigned char unknown_1a6_;
};

// USA: func_02053e10
extern "C" ARM void func_02053e10(struct Struct_02053e10* arg0) {
    struct Struct_0204a4ac_3* var0 = arg0->unknown_8_;
    if (var0 == NULL)
        return;
    arg0->unknown_1a0_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f048a);
    arg0->unknown_1a1_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f048f);
    arg0->unknown_1a2_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f0495);
    arg0->unknown_1a3_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f049b);
    arg0->unknown_1a4_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f04a1);
    arg0->unknown_1a5_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f04a7);
    arg0->unknown_1a6_ = (unsigned char)((Model3D*)var0)->GetBoneIndex(&data_020f04ad);
}
