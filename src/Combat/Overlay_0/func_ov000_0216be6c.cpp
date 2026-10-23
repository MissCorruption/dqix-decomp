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

struct Struct_ov000_0216be6c {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    int unknown_c_[3];
    int unknown_18_[3];
    unsigned char unknown_24_;
};

// USA: func_ov000_0216be6c
extern "C" ARM int func_ov000_0216be6c(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216be6c* var0 = (struct Struct_ov000_0216be6c*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216be6c));
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x56;
    var0->unknown_8_ = (unsigned char)((Script::Parameter*)arg0)->ToInt();
    struct Struct_0201d530* var1 = (extern Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 8)))->ToVec3fix((Vector3i*)var0->unknown_c_);
    var0->unknown_18_[0] = (int)(4096.0f * ((Script::Parameter*)(var1 + 0))->ToFloat());
    var0->unknown_18_[1] = (int)(4096.0f * ((Script::Parameter*)(var1 + 1))->ToFloat());
    var0->unknown_18_[2] = (int)(4096.0f * ((Script::Parameter*)(var1 + 2))->ToFloat());
    var0->unknown_24_ = 0;
    if (arg1 >= 8) {
        var0->unknown_24_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)(var1 + 3)))->ToInt();
    }
    func_ov000_02169b78(var0);
    return 1;
}
