#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0206ca3c;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206ca3c {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_;
    unsigned char unknown_10_[0x44 - 0x10];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    struct Struct_0206ca3c* unknown_70_;
};

// USA: func_0206ca3c
extern "C" ARM int func_0206ca3c(void* arg0, int arg1) {
    struct Struct_0206ca3c* var0;
    void* var1 = arg0;
    int var2;
    arg0 = (char*)arg0 + 8;
    int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)var1))->ToInt();
    var0 = (Struct_0206ca3c*)func_0206db20(data_02108cec.unknown_10_, var3);
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
    for (var2 = 0; var2 < arg1 - 1; var2++) {
        var0->unknown_c_ |= ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        arg0 = (char*)arg0 + 8;
    }
    return 1;
}
