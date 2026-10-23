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

struct Struct_ov000_0216bcf0 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_0_ : 7;
    unsigned char unknown_8_7_ : 1;
    unsigned char unknown_9_;
};

// USA: func_ov000_0216bcf0
extern "C" ARM int func_ov000_0216bcf0(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216bcf0* var0 = (struct Struct_ov000_0216bcf0*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216bcf0));
    var0->unknown_0_ = 0x4f;
    var0->unknown_8_0_ = (unsigned char)((Script::Parameter*)arg0)->ToInt();
    var0->unknown_9_ = 1;
    var0->unknown_8_7_ = 1;
    if (arg1 < 2) goto done;
    var0->unknown_9_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    if (arg1 < 3) goto done;
    var0->unknown_8_7_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
done:
    func_ov000_02169b78(var0);
    return 1;
}
