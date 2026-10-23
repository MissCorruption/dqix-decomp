#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_ov000_02169a40;
extern "C" void func_ov000_02169a40(struct Struct_ov000_02169a40* arg0);

struct Struct_ov000_02169bf0 {
    unsigned short* unknown_0_;
    unsigned short unknown_4_;
    unsigned int unknown_8_;
    struct Struct_ov000_02169bf0* unknown_c_;
};

struct Struct_ov000_02184264_3 {
    struct Struct_ov000_02169bf0* unknown_0_;
    struct Struct_ov000_02169bf0* unknown_4_;
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_3 data_ov000_02184264;

// USA: func_ov000_02169bf0
extern "C" ARM int func_ov000_02169bf0(struct Struct_0201c1c8* arg0, int arg1) {
    struct Struct_ov000_02169bf0* var0 = (struct Struct_ov000_02169bf0*)data_ov000_02184264.unknown_8_->Allocate(0x10);
    func_ov000_02169a40((struct Struct_ov000_02169a40*)var0);
    var0->unknown_4_ = arg1;
    if (var0->unknown_4_ != 0) {
        unsigned short var1[0x20];
        unsigned short var2 = 0;
        int var3 = 0;
        for (; var3 < var0->unknown_4_; arg0++, var3++) {
            var1[var3] = (unsigned short)((Script::Parameter*)arg0)->ToInt();
            if (var1[var3] == 1) var2 = 1;
        }
        if (var2) {
            var1[var0->unknown_4_] = 2;
            var1[var0->unknown_4_ + 1] = 0xdb;
            var0->unknown_4_ = var0->unknown_4_ + 2;
        }
        var0->unknown_0_ = (unsigned short*)data_ov000_02184264.unknown_8_->Allocate(var0->unknown_4_ * 2);
        memcpy(var0->unknown_0_, var1, var0->unknown_4_ * 2);
    }
    struct Struct_ov000_02169bf0* var4 = data_ov000_02184264.unknown_4_;
    if (var4 == 0) {
        data_ov000_02184264.unknown_4_ = var0;
    } else {
        var4->unknown_c_ = var0;
        data_ov000_02184264.unknown_4_ = var0;
    }
    if (!data_ov000_02184264.unknown_0_) {
        data_ov000_02184264.unknown_0_ = var0;
    }
    return 1;
}
