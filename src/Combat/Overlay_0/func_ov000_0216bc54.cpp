#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201d530;

struct Struct_ov000_02184264_18 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_18 data_ov000_02184264;

struct Struct_ov000_0216bc54 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216bc54*);

// USA: func_ov000_0216bc54
extern "C" ARM int func_ov000_0216bc54(struct Struct_0201d530* arg0) {
    struct Struct_ov000_0216bc54* var0 = (struct Struct_ov000_0216bc54*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0x4d;
    var0->unknown_8_ = (int)(4096.0f * ((Script::Parameter*)arg0)->ToFloat());
    func_ov000_02169b78(var0);
    return 1;
}
