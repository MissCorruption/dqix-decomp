#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

struct Struct_ov014_02184f78 {
    Struct_ov014_02184f78* unknown_0_;
    const char* unknown_4_;
    const char* unknown_8_;
    short unknown_c_;
    char unknown_e_[4];
    signed char unknown_12_;
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 6;
    char unknown_14_[6];
    short unknown_1a_;
    char unknown_1c_[4];
};

struct Struct_020a95a4_5 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 1;
    unsigned int unknown_1_3_ : 7;
    unsigned int unknown_2_2_ : 7;
    unsigned int unknown_3_1_ : 7;
};

struct Struct_ov014_021845ec {
    char unknown_0_[0x20];
};

struct Struct_ov014_02184dcc {
    char unknown_0_[0x1c];
    Struct_ov014_021845ec unknown_1c_;
    char unknown_3c_[0x48 - 0x3c];
    Struct_ov014_02184f78* unknown_48_;
    Struct_ov014_02184f78* unknown_4c_;
    Struct_020a95a4_5* unknown_50_;
    Struct_020a95a4_5* unknown_54_;
    void* unknown_58_;
    void* unknown_5c_;
    char* unknown_60_[2];
    char* unknown_68_;
    int unknown_6c_;
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
    unsigned char unknown_7c_;
    unsigned char unknown_7d_;
    unsigned char unknown_7e_;
    unsigned char unknown_7f_;
    unsigned char unknown_80_;
    unsigned char unknown_81_;
    unsigned char unknown_82_0_ : 1;
    unsigned char unknown_82_1_ : 1;
    unsigned char unknown_82_2_ : 1;
    unsigned char unknown_82_3_ : 1;
    unsigned char unknown_82_4_ : 4;
    short unknown_84_;
    short unknown_86_[5];
    unsigned char unknown_90_[3];
    unsigned char unknown_93_;
    unsigned char unknown_94_;
};

extern "C" bool func_ov014_02188d10(Struct_ov014_021845ec* arg0);

// USA: func_ov014_02184f78
extern "C" ARM void func_ov014_02184f78(Struct_ov014_02184dcc* arg0, Struct_ov014_02184f78* arg1, Struct_020a95a4_5* arg2, bool arg3) {
    if (arg0->unknown_7c_ == 0)
        return;
    if (arg1 == NULL || arg2 == NULL) {
        arg0->unknown_48_ = arg1;
        return;
    }

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_6c_ >= 0) {
        var0->RemoveTask(arg0->unknown_6c_);
        arg0->unknown_6c_ = -1;
    }
    for (int var1 = 0; var1 < 5; var1++) {
        short var2 = arg0->unknown_86_[var1];
        if (var2 >= 0) {
            BackgroundLoader::GetInstance()->RemoveTask(var2);
            arg0->unknown_86_[var1] = -1;
        }
    }
    func_ov014_02188d10(&arg0->unknown_1c_);
    arg0->unknown_7f_ = 0;
    arg0->unknown_80_ = 0;
    arg0->unknown_48_ = arg1;
    arg0->unknown_50_ = arg2;
    arg0->unknown_60_[0][0] = '\0';
    arg0->unknown_60_[1][0] = '\0';
    arg0->unknown_68_[0] = '\0';
    arg0->unknown_81_ |= 1;
    arg0->unknown_81_ &= ~8;
    arg0->unknown_82_2_ = arg3;
    if (!arg0->unknown_48_->unknown_13_1_) {
        arg0->unknown_81_ &= ~1;
        arg0->unknown_81_ |= 0x10;
        arg0->unknown_81_ &= ~4;
        arg0->unknown_93_ = false;
        return;
    }

    arg0->unknown_81_ &= ~0x10;
    if (arg0->unknown_70_ >= 0) {
        var0->RemoveTask(arg0->unknown_70_);
        arg0->unknown_70_ = -1;
    }
    arg0->unknown_7e_ = 0;
    arg0->unknown_93_ = true;
}
