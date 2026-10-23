#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_16 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_16 data_ov000_02184264;

struct Struct_ov000_0216b9a8 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216b9a8*);

// USA: func_ov000_0216b9a8
extern "C" ARM int func_ov000_0216b9a8(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    if (var0 < 0) return 1;
    struct Struct_ov000_0216b9a8* var1 = (struct Struct_ov000_0216b9a8*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    if (var1 == NULL) return 0;
    var1->unknown_0_ = 0;
    var1->unknown_4_ = 0;
    var1->unknown_0_ = 0x42;
    var1->unknown_8_ = (short)var0;
    func_ov000_02169b78(var1);
    return 1;
}
