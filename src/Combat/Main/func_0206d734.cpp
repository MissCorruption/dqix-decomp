#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201d530;

struct Struct_0206d734;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206d734 {
    unsigned char unknown_0_[0xa];
    unsigned char unknown_a_;
    unsigned char unknown_b_[0x44 - 0xb];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x60 - 0x46];
    int unknown_60_;
    unsigned char unknown_64_[0x70 - 0x64];
    struct Struct_0206d734* unknown_70_;
};

// USA: func_0206d734
extern "C" ARM int func_0206d734(void* arg0, int arg1) {
    struct Struct_0206d734* var0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206d734*)func_0206db20(data_02108cec.unknown_10_, var1);
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
    {
        unsigned char var2 = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
        var0->unknown_a_ = (var0->unknown_a_ & ~0x38) | ((var2 & 7) << 3);
    }
    if (arg1 > 2) {
        var0->unknown_60_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat());
    }
    return 1;
}
