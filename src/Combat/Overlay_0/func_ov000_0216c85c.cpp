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

struct Struct_ov000_0216c85c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    unsigned short unknown_c_;
    unsigned char unknown_e_;
};

// USA: func_ov000_0216c85c
extern "C" ARM int func_ov000_0216c85c(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_0216c85c* var0 = (struct Struct_ov000_0216c85c*)data_ov000_02184264.unknown_8_->Allocate(sizeof(struct Struct_ov000_0216c85c));
    if (var0 == NULL) {
        return 0;
    }
    unsigned short var1;
    int var2;
    unsigned char var3;
    var2 = ((Script::Parameter*)&arg0[0])->ToInt();
    var1 = ((Script::Parameter*)&arg0[1])->ToInt();
    var3 = 0;
    if (arg1 >= 3) {
        var3 = ((Script::Parameter*)&arg0[2])->ToInt();
    }
    var0->unknown_8_ = var2;
    var0->unknown_c_ = var1 - 0x1a;
    var0->unknown_e_ = var3;
    var0->unknown_0_ = 0x73;
    func_ov000_02169b78(var0);
    return 1;
}
