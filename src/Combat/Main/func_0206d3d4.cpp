#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201d530;

struct Struct_0206d3d4;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206d3d4 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    unsigned char unknown_10_[0x3c - 0x10];
    int unknown_3c_;
    unsigned char unknown_40_[0x44 - 0x40];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    struct Struct_0206d3d4* unknown_70_;
};

// USA: func_0206d3d4
extern "C" ARM int func_0206d3d4(void* arg0) {
    struct Struct_0206d3d4* var0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206d3d4*)func_0206db20(data_02108cec.unknown_10_, var1);
    if (var0 == 0) {
        return 0;
    }
    while (var0 != 0) {
        if (var0->unknown_44_ == data_02108cec.unknown_a_) {
            break;
        }
        var0 = var0->unknown_70_;
    }
    if (var0 == 0) {
        return 0;
    }
    var0->unknown_3c_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToFloat());
    var0->unknown_c_ |= 0x800;
    return 1;
}
