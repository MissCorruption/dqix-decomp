#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201d530;

struct Struct_0206c614;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206c614 {
    unsigned char unknown_0_[0x1f];
    unsigned char unknown_1f_;
    unsigned char unknown_20_[0x24 - 0x20];
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
    unsigned char unknown_34_[0x44 - 0x34];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    struct Struct_0206c614* unknown_70_;
};

// USA: func_0206c614
extern "C" ARM int func_0206c614(void* arg0) {
    struct Struct_0206c614* var0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206c614*)func_0206db20(data_02108cec.unknown_10_, var1);
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
    var0->unknown_24_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToFloat());
    var0->unknown_28_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat());
    var0->unknown_2c_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x18)))->ToFloat());
    var0->unknown_30_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x20)))->ToFloat());
    var0->unknown_1f_ = 7;
    return 1;
}
