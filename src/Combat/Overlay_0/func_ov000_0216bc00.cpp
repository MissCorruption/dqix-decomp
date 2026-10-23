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

struct Struct_ov000_0216bc00 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

// USA: func_ov000_0216bc00
extern "C" ARM int func_ov000_0216bc00(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216bc00* var0 = (struct Struct_ov000_0216bc00*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216bc00));
    if (var0 == NULL) return 0;
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x4c;
    var0->unknown_8_ = (unsigned char)((Script::Parameter*)arg0)->ToInt();
    func_ov000_02169b78(var0);
    return 1;
}
