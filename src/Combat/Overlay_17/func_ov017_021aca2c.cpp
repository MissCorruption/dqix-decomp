#include <globaldefs.h>
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

extern "C" int func_020d2ff0(const char*);
struct Struct_ov017_021aca2c {
    char* unknown_0_;
    char* unknown_4_;
    char* unknown_8_;
    short* unknown_c_;
    unsigned short unknown_10_;
    short unknown_12_;
    unsigned char unknown_14_;
    unsigned char unknown_15_;
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};
struct Struct_ov017_021d83cc {
    SafeAllocator* unknown_0_;
    Struct_ov017_021aca2c* unknown_4_;
};
extern Struct_ov017_021d83cc data_ov017_021d83cc;

// USA: func_ov017_021aca2c
extern "C" ARM int func_ov017_021aca2c(Script::Parameter* arg0, int arg1) {
    int var0 = arg0[0].ToInt();
    if (data_ov017_021d83cc.unknown_4_->unknown_10_ != var0) return 1;
    int var1 = arg0[1].ToInt();
    if (data_ov017_021d83cc.unknown_4_->unknown_12_ != var1) return 1;
    if (var1 < 0) return 1;
    data_ov017_021d83cc.unknown_4_->unknown_14_ = arg0[2].ToInt();
    data_ov017_021d83cc.unknown_4_->unknown_15_ = arg0[3].ToInt();
    const char* var2 = arg0[4].ToString();
    if (var2) {
        int var3 = func_020d2ff0(var2);
        if (var3) {
            data_ov017_021d83cc.unknown_4_->unknown_0_ = (char*)data_ov017_021d83cc.unknown_0_->Allocate(var3 + 1);
            memset(data_ov017_021d83cc.unknown_4_->unknown_0_, 0, var3 + 1);
            memcpy(data_ov017_021d83cc.unknown_4_->unknown_0_, var2, var3);
            data_ov017_021d83cc.unknown_4_->unknown_0_[var3] = 0;
        }
    }
    var2 = arg0[5].ToString();
    if (var2) {
        int var4 = func_020d2ff0(var2);
        if (var4) {
            data_ov017_021d83cc.unknown_4_->unknown_4_ = (char*)data_ov017_021d83cc.unknown_0_->Allocate(var4 + 1);
            memset(data_ov017_021d83cc.unknown_4_->unknown_4_, 0, var4 + 1);
            memcpy(data_ov017_021d83cc.unknown_4_->unknown_4_, var2, var4);
            data_ov017_021d83cc.unknown_4_->unknown_4_[var4] = 0;
        }
    }
    Script::Parameter* var5 = arg0 + 6;
    arg0 += 7;
    var2 = var5->ToString();
    if (var2) {
        int var6 = func_020d2ff0(var2);
        if (var6) {
            data_ov017_021d83cc.unknown_4_->unknown_8_ = (char*)data_ov017_021d83cc.unknown_0_->Allocate(var6 + 1);
            memset(data_ov017_021d83cc.unknown_4_->unknown_8_, 0, var6 + 1);
            memcpy(data_ov017_021d83cc.unknown_4_->unknown_8_, var2, var6);
            data_ov017_021d83cc.unknown_4_->unknown_8_[var6] = 0;
        }
    }
    if (arg1 - 7) {
        data_ov017_021d83cc.unknown_4_->unknown_16_ = arg1 - 7;
        data_ov017_021d83cc.unknown_4_->unknown_c_ = (short*)data_ov017_021d83cc.unknown_0_->Allocate((arg1 - 7) * 2);
        for (int var7 = 0; var7 < arg1 - 7; ++arg0, ++var7) {
            data_ov017_021d83cc.unknown_4_->unknown_c_[var7] = arg0->ToInt();
        }
    }
    data_ov017_021d83cc.unknown_4_->unknown_17_ = 1;
    return 1;
}
