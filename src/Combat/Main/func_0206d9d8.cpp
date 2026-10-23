#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0206d9d8;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206d9d8 {
    unsigned char unknown_0_[0xa];
    unsigned char unknown_a_;
    unsigned char unknown_b_[0x20 - 0xb];
    unsigned short unknown_20_;
    unsigned char unknown_22_[0x44 - 0x22];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    struct Struct_0206d9d8* unknown_70_;
};

// USA: func_0206d9d8
extern "C" ARM int func_0206d9d8(void* arg0) {
    struct Struct_0206d9d8* var0;
    int var1;
    int var2;
    int var3;
    int var4 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206d9d8*)func_0206db20(data_02108cec.unknown_10_, var4);
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
    var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
    var0->unknown_20_ = (unsigned short)(var1 | (var2 << 5) | (var3 << 10));
    var0->unknown_a_ |= 0x80;
    return 1;
}
