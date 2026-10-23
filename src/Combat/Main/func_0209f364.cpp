#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0209f364_4 {
    char unknown_0_[0x12];
    short unknown_12_;
    char unknown_14_[0xc];
    float unknown_20_;
    unsigned char unknown_24_;
    char unknown_25_[0x1b];
};

struct Struct_0209f364 {
    union {
        struct {
            char unknown_0_[0x5c60];
            Struct_0209f364_4 unknown_5c60_[256];
        };
        struct {
            char unknown1_0_[0x8e07];
            unsigned char unknown_8e07_;
        };
    };
};

struct Struct_0209f364_2 {
    Struct_0209f364_4 unknown_0_[16];
    int unknown_400_;
};

struct Struct_0209f364_3 {
    int unknown_0_;
    Struct_0209f364* unknown_4_;
    char unknown_8_[0x90];
    int unknown_98_;
    Struct_0209f364_2 unknown_9c_;
    Struct_0209f364_4 unknown_4a0_[16];
};

// USA: func_0209f364
extern "C" ARM void func_0209f364(Struct_0209f364_3* arg0, int arg1, float arg2, int arg3) {
    int var0 = sizeof(Struct_0209f364_4);
    if (arg1 == 0) {
        int var1;
        int var2;
        arg0->unknown_98_ = 0;
        var1 = arg0->unknown_4_->unknown_8e07_;
        for (var2 = 0; var2 < var1; var2++) {
            Struct_0209f364_4* var3 = &arg0->unknown_4_->unknown_5c60_[var2];
            if (var3 == NULL) continue;
            if (arg3) {
                if (var3->unknown_20_ < arg2) continue;
            } else {
                if (var3->unknown_20_ >= arg2) continue;
            }
            {
                int var4 = arg0->unknown_98_++;
                memcpy(&arg0->unknown_9c_.unknown_0_[var4], var3, var0);
            }
        }
        return;
    }
    arg0->unknown_9c_.unknown_400_ = 0;
    memset(arg0->unknown_4a0_, 0, 0x400);
    {
        Struct_0209f364_2* var5 = &arg0->unknown_9c_;
        int var6;
        for (var6 = 0; var6 < arg0->unknown_98_; var6++) {
            Struct_0209f364_4* var7 = &var5->unknown_0_[var6];
            if (arg3) {
                if (var7->unknown_20_ < arg2) continue;
            } else {
                if (var7->unknown_20_ >= arg2) continue;
            }
            {
                int var8 = arg0->unknown_9c_.unknown_400_;
                int var9 = var5->unknown_400_;
                var5->unknown_400_ = var9 + 1;
                memcpy(&arg0->unknown_4a0_[var8], var7, var0);
            }
        }
    }
    arg0->unknown_98_ = arg0->unknown_9c_.unknown_400_;
    memcpy(arg0->unknown_9c_.unknown_0_, arg0->unknown_4a0_, 0x400);
}
