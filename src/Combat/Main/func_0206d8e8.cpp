#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201d530;

struct Struct_0206d8e8;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206d8e8_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_0206d8e8 {
    unsigned char unknown_0_[0x44];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x5c - 0x46];
    struct Struct_0206d8e8_2* unknown_5c_;
    unsigned char unknown_60_[0x70 - 0x60];
    struct Struct_0206d8e8* unknown_70_;
};

// USA: func_0206d8e8
extern "C" ARM int func_0206d8e8(void* arg0) {
    struct Struct_0206d8e8* var0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206d8e8*)func_0206db20(data_02108cec.unknown_10_, var1);
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
    var0->unknown_5c_ = (struct Struct_0206d8e8_2*)((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(0x10);
    if (var0->unknown_5c_ != 0) {
        var0->unknown_5c_->unknown_c_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToFloat());
        var0->unknown_5c_->unknown_0_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat());
        var0->unknown_5c_->unknown_4_ = 0;
        var0->unknown_5c_->unknown_8_ = (int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x18)))->ToFloat());
    }
    return 1;
}
