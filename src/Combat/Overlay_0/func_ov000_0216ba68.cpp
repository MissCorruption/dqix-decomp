#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_17 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_17 data_ov000_02184264;

struct Struct_ov000_0216ba68 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216ba68*);

// USA: func_ov000_0216ba68
extern "C" ARM int func_ov000_0216ba68(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216ba68* var0 = (struct Struct_ov000_0216ba68*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    if (var0 == 0) return 0;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x45;
    var0->unknown_8_ = (unsigned short)((Script::Parameter*)arg0)->ToInt();
    var0->unknown_a_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    func_ov000_02169b78(var0);
    return 1;
}
