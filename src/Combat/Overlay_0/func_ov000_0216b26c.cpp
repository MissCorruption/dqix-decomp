#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_14 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern Struct_ov000_02184264_14 data_ov000_02184264;

struct Struct_0201d530 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};
struct Vector3i;

struct Struct_ov000_0216b26c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[3];
};

// USA: func_ov000_0216b26c
extern "C" ARM int func_ov000_0216b26c(struct Struct_0201d530* arg0) {
    struct Struct_ov000_0216b26c* var0 = (struct Struct_ov000_0216b26c*)data_ov000_02184264.unknown_8_->Allocate(0x14);
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x30;
    (Struct_0201d530*)((Script::Parameter*)arg0)->ToVec3fix((Vector3i*)var0->unknown_8_);
    func_ov000_02169b78(var0);
    return 1;
}
