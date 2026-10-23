#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0206d464;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0201d530;
struct Vector3i;

struct Struct_0206d464 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
    unsigned char unknown_10_[0x44 - 0x10];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x48 - 0x46];
    int unknown_48_[3];
    unsigned char unknown_54_[0x70 - 0x54];
    struct Struct_0206d464* unknown_70_;
};

// USA: func_0206d464
extern "C" ARM int func_0206d464(void* arg0) {
    int var0 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    struct Struct_0206d464* var1 = (Struct_0206d464*)func_0206db20(data_02108cec.unknown_10_, var0);
    if (var1 == 0) return 0;
    while (var1 != 0) {
        if (var1->unknown_44_ == data_02108cec.unknown_a_) break;
        var1 = var1->unknown_70_;
    }
    if (var1 == 0) return 0;
    var1->unknown_c_ = var1->unknown_c_ | 0x2000;
    (Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToVec3fix((Vector3i*)var1->unknown_48_);
    return 1;
}
