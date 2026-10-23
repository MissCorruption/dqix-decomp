#include "globaldefs.h"
#include "World/Object3D.h"

struct Struct_ov014_02184a64_4 {
    char unknown_0_[0x13];
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 6;
};
struct Struct_ov014_02184a64 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 1;
    unsigned int unknown_1_3_ : 21;
};
struct Struct_ov014_02184a64_2 {
    char unknown_0_[0x14];
    int unknown_14_, unknown_18_;
    char unknown_1c_[0xc];
};
struct Struct_ov014_02184a64_3 {
    void* unknown_0_;
    void* unknown_4_;
    Struct_ov014_02184a64_2* unknown_8_;
    char unknown_c_[0x34];
    Object3D* unknown_40_;
    void* unknown_44_;
    Struct_ov014_02184a64_4* unknown_48_;
    Struct_ov014_02184a64_4* unknown_4c_;
    Struct_ov014_02184a64* unknown_50_;
    Struct_ov014_02184a64* unknown_54_;
    void* unknown_58_;
    char unknown_5c_[0x20];
    unsigned char unknown_7c_;
    char unknown_7d_[4];
    unsigned char unknown_81_;
    char unknown_82_[0xe];
    unsigned char unknown_90_[3];
    unsigned char unknown_93_;
    unsigned char unknown_94_;
};
extern "C" {
void func_ov023_021e2bdc(void*, short, short*, short*);
void func_0205ac40(void*, void*);
extern const short data_ov014_0218948c[6];
extern const short data_ov014_0218948e[6];
extern const short data_ov014_02189478[3];
}

extern "C" ARM void func_ov014_02184a64(Struct_ov014_02184a64_3* arg0) {
    if (!arg0->unknown_7c_) return;
    if (!arg0->unknown_48_ || !arg0->unknown_50_) return;
    int var0 = arg0->unknown_48_->unknown_13_1_;
    if (!var0) return;
    int var1 = 0, var2 = 0;
    if (arg0->unknown_81_ & 0x20) {
        if (arg0->unknown_4c_ && arg0->unknown_4c_->unknown_13_1_) var1 = 1;
        if (arg0->unknown_54_ && arg0->unknown_54_->unknown_1_2_) var2 = 1;
    } else {
        if (var0) var1 = 1;
        if (arg0->unknown_50_->unknown_1_2_) var2 = 1;
    }
    if (var1 || var2) {
        for (int var3 = 0; var3 < 3; ++var3) {
            short var4 = 0, var5 = 0;
            int var6 = var3 == 2 ? var2 : var1;
            if (var6) {
                func_ov023_021e2bdc(arg0->unknown_58_, data_ov014_02189478[var3], &var4, &var5);
                if (arg0->unknown_90_[var3]) {
                    var4 += data_ov014_0218948c[2*var3];
                    var5 += data_ov014_0218948e[2*var3];
                }
                Struct_ov014_02184a64_2* var7 = &arg0->unknown_8_[var3];
                var7->unknown_14_ = var4 << 12;
                var7->unknown_18_ = var5 << 12;
                if (arg0->unknown_94_) func_0205ac40(arg0->unknown_4_, &arg0->unknown_8_[var3]);
            }
        }
    }
    if ((arg0->unknown_81_ & 4) && arg0->unknown_40_) arg0->unknown_40_->Draw(true);
}
