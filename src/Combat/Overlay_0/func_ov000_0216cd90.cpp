#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_31 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_31 data_ov000_02184264;

struct Struct_ov000_0216cd90 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216cd90*);

// USA: func_ov000_0216cd90
extern "C" ARM int func_ov000_0216cd90(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216cd90* var0 = (struct Struct_ov000_0216cd90*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0x7c;
    unsigned short var1 = 0;
    if (arg1 > 0) {
        var1 = (unsigned short)((Script::Parameter*)arg0)->ToInt();
    }
    var0->unknown_8_ = var1;
    func_ov000_02169b78(var0);
    return 1;
}
