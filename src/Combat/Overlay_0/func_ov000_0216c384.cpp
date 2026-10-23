#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_22 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_22 data_ov000_02184264;

struct Struct_ov000_0216c384 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216c384*);

// USA: func_ov000_0216c384
extern "C" ARM int func_ov000_0216c384(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216c384* var0 = (struct Struct_ov000_0216c384*)data_ov000_02184264.unknown_8_->Allocate(0x14);
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x61;
    var0->unknown_8_ = (unsigned short)((Script::Parameter*)arg0)->ToInt();
    var0->unknown_c_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    var0->unknown_10_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    func_ov000_02169b78(var0);
    return 1;
}
