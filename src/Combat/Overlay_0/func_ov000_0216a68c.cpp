#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void func_ov000_02169b78(void* arg0);
extern "C" void __clear(void* arg0, int arg1);

struct Struct_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_2 data_ov000_02184264;

struct Struct_ov000_0216a68c {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
    unsigned char unknown_c_;
    signed char unknown_d_;
    short unknown_e_;
    unsigned char unknown_10_;
    Vector3fix16 unknown_12_;
    short unknown_18_;
    unsigned char unknown_1a_;
    unsigned char unknown_1b_;
};

// USA: func_ov000_0216a68c
extern "C" ARM int func_ov000_0216a68c(Script::Parameter* arg0, int arg1) {
    Struct_ov000_0216a68c* var0 = (Struct_ov000_0216a68c*)data_ov000_02184264.unknown_8_->Allocate(sizeof(Struct_ov000_0216a68c));
    int var1;
    int var2 = -1;
    const char* var3;
    char* var4 = NULL;
    int var5 = 0;
    int var6 = 1;
    int var7 = 0;
    int var8 = 0;
    short var9 = 0;
    Vector3fix16 var10;
    __clear(&var10, sizeof(var10));
    if (arg0[0].type == 1) {
        if (arg1 >= 3 && arg0[2].type == 0) {
            var1 = arg0++->ToInt();
            var2 = arg0++->ToInt() - 0x1a;
            var3 = arg0++->ToString();
            if (var3 != NULL) {
                var4 = (char*)data_ov000_02184264.unknown_8_->Allocate(strlen(var3) + 1);
                strcpy(var4, var3);
            }
            if (arg1 >= 4) {
                var6 = arg0++->ToInt();
            }
            if (arg1 >= 5) {
                var7 = arg0++->ToInt() != 0;
            }
            if (arg1 >= 6) {
                var8 = arg0++->ToInt() != 0;
            }
        } else {
            var1 = arg0++->ToInt() + 100;
            if (arg1 >= 2) {
                var5 = arg0++->ToInt();
            }
            if (arg1 >= 3) {
                arg0->ToVec3fix16(&var10);
            }
        }
    } else if (arg0[0].type == 2) {
        var9 = arg0++->ToFloat() * 4096.0f;
        if (arg1 >= 2) {
            var1 = arg0++->ToInt() + 100;
        } else {
            return 0;
        }
        if (arg1 >= 3) {
            var5 = arg0++->ToInt();
        }
        if (arg1 >= 4) {
            arg0->ToVec3fix16(&var10);
        }
    } else {
        return 0;
    }
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x15;
    var0->unknown_18_ = var9;
    var0->unknown_e_ = var1;
    var0->unknown_d_ = var2;
    var0->unknown_10_ = var5;
    var0->unknown_8_ = var4;
    var0->unknown_c_ = var6;
    Vector3fix16Copy(&var0->unknown_12_, &var10);
    var0->unknown_1a_ = var7;
    var0->unknown_1b_ = var8;
    func_ov000_02169b78(var0);
    return 1;
}
