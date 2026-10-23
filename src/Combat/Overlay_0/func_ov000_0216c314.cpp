#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201d530 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_0201c1c8;

struct Struct_ov000_02184264_21 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_21 data_ov000_02184264;

struct Struct_ov000_0216c314 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216c314*);

// USA: func_ov000_0216c314
extern "C" ARM int func_ov000_0216c314(struct Struct_0201d530* arg0) {
    struct Struct_ov000_0216c314* var0 = (struct Struct_ov000_0216c314*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x60;
    var0->unknown_8_ = (unsigned short)(int)(((Script::Parameter*)arg0)->ToFloat() * 4096.0f);
    var0->unknown_a_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    func_ov000_02169b78(var0);
    return 1;
}
