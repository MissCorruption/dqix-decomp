#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201d530 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201c3a4 {
    int unknown_0_;
    void* unknown_4_;
};

struct Vector3i;

struct Struct_0208daf4 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[0x10];
    unsigned char unknown_14_;
    char unknown_15_[3];
    float unknown_18_;
    int unknown_1c_[3];
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
};

struct Struct_02108fc8 {
    int unknown_0_;
    unsigned short* unknown_4_;
    struct Struct_0208daf4* unknown_8_;
};

extern struct Struct_02108fc8 data_02108fc8;

// USA: func_0208daf4
extern "C" ARM int func_0208daf4(struct Struct_0201d530* arg0) {
    int var0, var1, var2, var3;
    void* var4;
    unsigned short var5;
    struct Struct_0201d530* var6;

    if (data_02108fc8.unknown_0_ == 1) {
        return 0;
    }

    var0 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0)))->ToInt();
    var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 1)))->ToInt();
    var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 2)))->ToInt();

    var5 = *data_02108fc8.unknown_4_;
    if (var1 != var5 && var2 != var5) {
        return 0;
    }

    data_02108fc8.unknown_8_->unknown_0_ = (unsigned char)var0;
    data_02108fc8.unknown_8_->unknown_2_ = (unsigned short)var1;
    data_02108fc8.unknown_8_->unknown_2a_ = (unsigned short)var2;

    var4 = (void*)((Script::Parameter*)((struct Struct_0201c3a4*)(arg0 + 3)))->ToString();
    memcpy(data_02108fc8.unknown_8_->unknown_4_, var4, 0x10);
    data_02108fc8.unknown_8_->unknown_4_[0xf] = 0;

    var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 4)))->ToInt();
    data_02108fc8.unknown_8_->unknown_14_ = (unsigned char)var3;

    data_02108fc8.unknown_8_->unknown_18_ = ((Script::Parameter*)((struct Struct_0201d530*)(arg0 + 5)))->ToFloat();

    var6 = (Struct_0201d530*)((Script::Parameter*)(arg0 + 6))->ToVec3fix((Vector3i*)data_02108fc8.unknown_8_->unknown_1c_);
    data_02108fc8.unknown_8_->unknown_28_ = (unsigned short)(int)(4096.0f * ((Script::Parameter*)var6)->ToFloat());

    data_02108fc8.unknown_0_ = 1;
    return 1;
}
