#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0206cad8;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206cad8 {
    unsigned char unknown_0_[0xb];
    unsigned char unknown_b_;
    unsigned char unknown_c_[0x38];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x2a];
    struct Struct_0206cad8* unknown_70_;
};

// USA: func_0206cad8
extern "C" ARM int func_0206cad8(void* arg0) {
    struct Struct_0206cad8* var0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206cad8*)func_0206db20(data_02108cec.unknown_10_, var1);
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
    var0->unknown_b_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    return 1;
}
