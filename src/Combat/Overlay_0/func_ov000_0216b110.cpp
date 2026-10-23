#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_12 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_12 data_ov000_02184264;

struct Struct_ov000_0216b110 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
};

extern "C" void func_ov000_02169b78(struct Struct_ov000_0216b110*);

// USA: func_ov000_0216b110
extern "C" ARM int func_ov000_0216b110(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216b110* var0 = (struct Struct_ov000_0216b110*)data_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x2c;
    var0->unknown_a_ = (unsigned char)((Script::Parameter*)arg0)->ToInt();
    var0->unknown_8_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    func_ov000_02169b78(var0);
    return 1;
}
