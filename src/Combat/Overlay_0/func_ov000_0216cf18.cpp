#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_34 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_34 data_ov000_02184264;

struct Struct_ov000_0216cf18 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216cf18*);

// USA: func_ov000_0216cf18
extern "C" ARM int func_ov000_0216cf18(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216cf18* var0 = (struct Struct_ov000_0216cf18*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0x82;
    var0->unknown_8_ = 1;
    if (arg1 >= 1) {
        var0->unknown_8_ = (unsigned char)((Script::Parameter*)arg0)->ToInt();
    }
    func_ov000_02169b78(var0);
    return 1;
}
