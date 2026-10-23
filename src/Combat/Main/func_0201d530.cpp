#include <globaldefs.h>
#include "Resource/Script.h"
#include "World/ZoneFeatures.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };
struct Vector3i;

int fix32ReduceAngle0To2Pi(int value);

static inline int inline_0201d530(int arg0, int arg1) {
    return (int)(((long long)arg0 * arg1 + 0x800) >> 12);
}

struct Struct_0201d530_2 {
    short unknown_0_;
    int unknown_4_;
    int unknown_8_[3];
    int unknown_14_[3];
    short unknown_20_;
    short unknown_22_;
    int unknown_24_;
    char unknown_28_[0x74 - 0x28];
};

struct Struct_020fdc20_8 {
    void* unknown_0_;
    int unknown_4_;
    Struct_020134e0* unknown_8_;
};
extern struct Struct_020fdc20_8 data_020fdc20;

// USA: func_0201d530
extern "C" ARM int func_0201d530(Script::Parameter* arg0, int) {
    struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)arg0;
    struct Struct_0201d530_2 var1;
    int var2[3];

    ((Struct_020134e0::Struct_02018300*)((char*)&var1))->func_0201d424();
    var1.unknown_4_ = ((Script::Parameter*)var0)->ToInt();

    struct Struct_0201d530* var3 = (extern Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)((char*)var0 + 8)))->ToVec3fix((Vector3i*)var2);
    *(Vector3i*)var1.unknown_8_ = *(Vector3i const*)var2;

    var3 = (extern Struct_0201d530*)((Script::Parameter*)var3)->ToVec3fix((Vector3i*)var2);
    *(Vector3i*)var1.unknown_14_ = *(Vector3i const*)var2;

    var1.unknown_22_ = (short)fix32ReduceAngle0To2Pi((int)(4096.0f * ((Script::Parameter*)var3)->ToFloat()));
    var1.unknown_20_ = (short)(int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)var3 + 8)))->ToFloat());

    int var4 = var1.unknown_14_[0] / 2;
    int var5 = var1.unknown_14_[2] / 2;
    int var6 = inline_0201d530(var5, var5);
    int var7 = inline_0201d530(var4, var4);
    var1.unknown_24_ = var7 + var6;

    data_020fdc20.unknown_0_ = data_020fdc20.unknown_8_->func_0201e710(*(Struct_020134e0::Struct_02018300*)&var1);
    return 1;
}
