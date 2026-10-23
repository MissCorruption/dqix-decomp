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
struct Vector3i;

struct Struct_ov000_0216b328 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_[3];
    unsigned char unknown_14_;
};

// USA: func_ov000_0216b328
extern "C" ARM int func_ov000_0216b328(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216b328* var0 = (struct Struct_ov000_0216b328*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216b328));
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x32;
    struct Struct_0201d530* var1 = (extern Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)arg0))->ToVec3fix((Vector3i*)var0->unknown_8_);
    unsigned char var2 = 0;
    if (arg1 >= 4) {
        var2 = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)var1))->ToInt();
    }
    var0->unknown_14_ = var2;
    func_ov000_02169b78(var0);
    return 1;
}
