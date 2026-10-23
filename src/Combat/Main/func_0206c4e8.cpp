#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201d530;

struct Struct_0206c4e8;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206c4e8_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    struct Struct_0206c4e8_2* unknown_14_;
};

struct Struct_0206c4e8 {
    unsigned char unknown_0_[0x40];
    struct Struct_0206c4e8_2* unknown_40_;
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    struct Struct_0206c4e8* unknown_70_;
};

// USA: func_0206c4e8
extern "C" ARM int func_0206c4e8(void* arg0) {
    struct Struct_0206c4e8* var0;
    struct Struct_0206c4e8_2* var1;
    int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206c4e8*)func_0206db20(data_02108cec.unknown_10_, var2);
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

    var1 = (struct Struct_0206c4e8_2*)((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(0x18);
    var1->unknown_4_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToFloat());
    var1->unknown_8_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat());
    var1->unknown_c_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x18)))->ToFloat());
    var1->unknown_10_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x20)))->ToFloat());
    var1->unknown_0_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x28)))->ToInt();
    var1->unknown_14_ = 0;

    if (var0->unknown_40_ == 0) {
        var0->unknown_40_ = var1;
        return 1;
    }
    {
        struct Struct_0206c4e8_2* var3 = var0->unknown_40_;
        while (var3->unknown_14_ != 0) {
            var3 = var3->unknown_14_;
        }
        var3->unknown_14_ = var1;
    }
    return 1;
}
