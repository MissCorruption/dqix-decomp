#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void*);

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_ov000_0216c9fc {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    unsigned char unknown_c_;
};

// USA: func_ov000_0216c9fc
extern "C" ARM int func_ov000_0216c9fc(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216c9fc* var0 = (struct Struct_ov000_0216c9fc*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216c9fc));
    if (var0 == 0) {
        return 0;
    }
    memset(var0, 0, sizeof(struct Struct_ov000_0216c9fc));
    int var1 = ((Script::Parameter*)arg0)->ToInt();
    var0->unknown_c_ = (unsigned char)var1;
    switch (var1 & 0xff) {
    case 0:
        var0->unknown_8_ = (short)(int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToFloat());
        var0->unknown_a_ = (short)(int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat());
        break;
    case 1:
        var0->unknown_8_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
        var0->unknown_a_ = (short)(int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x10)))->ToFloat());
        break;
    }
    var0->unknown_0_ = 0x75;
    func_ov000_02169b78(var0);
    return 1;
}
