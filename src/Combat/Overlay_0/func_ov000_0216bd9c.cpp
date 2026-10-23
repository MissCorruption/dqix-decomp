#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void*);

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };
struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_ov000_0216bd9c {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
};

// USA: func_ov000_0216bd9c
extern "C" ARM int func_ov000_0216bd9c(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216bd9c* var0 = (struct Struct_ov000_0216bd9c*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216bd9c));
    var0->unknown_0_ = 0x50;
    var0->unknown_a_ = (short)(int)(4096.0f * ((Script::Parameter*)((struct Struct_0201d530*)arg0))->ToFloat());
    var0->unknown_8_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    func_ov000_02169b78(var0);
    return 1;
}
