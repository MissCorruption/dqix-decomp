#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_02099ef4 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201c1c8;

struct Struct_0201d530;
struct Vector3s;

struct Struct_02109a54 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_[3];
    short unknown_8_[3];
    unsigned char unknown_e_;
    char unknown_f_;
    short unknown_10_[3];
    short unknown_16_[3];
};

extern struct Struct_02109a54 data_02109a54[];

// USA: func_02099ef4
extern "C" ARM int func_02099ef4(struct Struct_02099ef4* arg0) {
    int var0;
    struct Struct_02109a54* var1;
    struct Struct_02099ef4* var2;

    var0 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var1 = &data_02109a54[var0];
    var1->unknown_0_ = (unsigned char)var0;

    var1->unknown_1_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 1)))->ToInt();

    var2 = (struct Struct_02099ef4*)(Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)(arg0 + 2)))->ToVec3fix16((Vector3s*)var1->unknown_2_);
    var2 = (struct Struct_02099ef4*)(Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)var2))->ToVec3fix16((Vector3s*)var1->unknown_8_);

    var1->unknown_e_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)var2))->ToInt();

    var2 = (struct Struct_02099ef4*)(Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)(var2 + 1)))->ToVec3fix16((Vector3s*)var1->unknown_10_);
    (Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)var2))->ToVec3fix16((Vector3s*)var1->unknown_16_);

    return 1;
}
