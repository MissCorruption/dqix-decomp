#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void* arg0);

struct Struct_ov000_02184264_6 {
    char unknown_0_[0x8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_6 data_ov000_02184264;

struct Struct_ov000_0216a018 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    short unknown_12_;
    short unknown_14_;
};

// USA: func_ov000_0216a018
extern "C" ARM int func_ov000_0216a018(Script::Parameter* arg0, int arg1) {
    struct Struct_ov000_0216a018* var0 = (struct Struct_ov000_0216a018*)data_ov000_02184264.unknown_8_->Allocate(0x18);
    var0->unknown_0_ = 7;
    if (arg1 == 0) {
        var0->unknown_8_ = 0;
        var0->unknown_a_ = -1;
        var0->unknown_c_ = -1;
        var0->unknown_e_ = 0;
        var0->unknown_12_ = 0;
        var0->unknown_10_ = 0;
        var0->unknown_14_ = 0;
    } else if (arg1 == 1 && arg0->type == 2) {
        var0->unknown_8_ = (short)(arg0->ToFloat() * 4096.0f);
        var0->unknown_a_ = -1;
        var0->unknown_c_ = -1;
        var0->unknown_e_ = 0;
        var0->unknown_12_ = 0;
        var0->unknown_10_ = 0;
        var0->unknown_14_ = 0;
    } else {
        var0->unknown_8_ = 0;
        var0->unknown_a_ = arg0[0].ToInt();
        Script::Parameter* var1 = arg0 + 2;
        var0->unknown_c_ = arg0[1].ToInt();
        if (arg1 < 3) {
            var0->unknown_e_ = 0;
        } else {
            var0->unknown_e_ = var1->ToInt();
            var1++;
        }
        if (arg1 < 4) {
            var0->unknown_12_ = 0;
        } else {
            var0->unknown_12_ = var1->ToInt();
            var1++;
        }
        if (arg1 < 5) {
            var0->unknown_10_ = 0;
        } else {
            var0->unknown_10_ = var1->ToInt();
            var1++;
        }
        if (arg1 < 6) {
            var0->unknown_14_ = 0;
        } else {
            var0->unknown_14_ = var1->ToInt();
        }
        if (var0->unknown_a_ >= 0 && var0->unknown_a_ < 100) {
            var0->unknown_a_ += 100;
        }
        if (var0->unknown_c_ >= 0 && var0->unknown_c_ < 100) {
            var0->unknown_c_ += 100;
        }
    }
    func_ov000_02169b78(var0);
    return 1;
}
