#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0209f634_4 {
    char unknown_0_[0x12];
    short unknown_12_;
    char unknown_14_[0x10];
    unsigned char unknown_24_;
    char unknown_25_[0x1b];
};

struct Struct_0209f634 {
    union {
        struct {
            char unknown_0_[0x5c60];
            Struct_0209f634_4 unknown_5c60_[256];
        };
        struct {
            char unknown1_0_[0x8e07];
            unsigned char unknown_8e07_;
        };
    };
};

struct Struct_0209f634_2 {
    Struct_0209f634_4 unknown_0_[16];
    int unknown_400_;
};

struct Struct_0209f634_3 {
    int unknown_0_;
    Struct_0209f634* unknown_4_;
    char unknown_8_[0x90];
    int unknown_98_;
    Struct_0209f634_2 unknown_9c_;
    Struct_0209f634_4 unknown_4a0_[16];
};

// USA: func_0209f634
extern "C" ARM void func_0209f634(Struct_0209f634_3* arg0, int arg1, int arg2) {
    int var0 = sizeof(Struct_0209f634_4);
    if (arg1 == 0) {
        int var1;
        int var2;
        arg0->unknown_98_ = 0;
        var1 = arg0->unknown_4_->unknown_8e07_;
        for (var2 = 0; var2 < var1; var2++) {
            Struct_0209f634_4* var3 = &arg0->unknown_4_->unknown_5c60_[var2];
            if (var3 == NULL) continue;
            int var4 = 0;
            if (var3->unknown_12_ >= 7 && var3->unknown_12_ <= 18) var4 = 1;
            if (!var4 && var3->unknown_24_ == arg2) {
                int var5 = arg0->unknown_98_++;
                memcpy(&arg0->unknown_9c_.unknown_0_[var5], var3, var0);
            }
        }
        return;
    }
    arg0->unknown_9c_.unknown_400_ = 0;
    memset(arg0->unknown_4a0_, 0, 0x400);
    {
        Struct_0209f634_2* var6 = &arg0->unknown_9c_;
        int var7;
        for (var7 = 0; var7 < arg0->unknown_98_; var7++) {
            Struct_0209f634_4* var8 = &var6->unknown_0_[var7];
            int var9 = 0;
            if (var8->unknown_12_ >= 7 && var8->unknown_12_ <= 18) var9 = 1;
            if (!var9 && var8->unknown_24_ == arg2) {
                int var10 = arg0->unknown_9c_.unknown_400_;
                int var11 = var6->unknown_400_;
                var6->unknown_400_ = var11 + 1;
                memcpy(&arg0->unknown_4a0_[var10], var8, var0);
            }
        }
    }
    arg0->unknown_98_ = arg0->unknown_9c_.unknown_400_;
    memcpy(arg0->unknown_9c_.unknown_0_, arg0->unknown_4a0_, 0x400);
}
