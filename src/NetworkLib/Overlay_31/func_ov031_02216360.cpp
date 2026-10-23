#include <globaldefs.h>
#include <NitroSDK/Timing.h>
#include <NitroSDK/Memory.h>

struct Struct_ov031_02216360_3 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[0x20];
    unsigned char unknown_26_[10];
    char unknown_30_[0x1a];
    unsigned char unknown_4a_[0x20];
    unsigned char unknown_6a_;
    unsigned char unknown_6b_;
    unsigned char unknown_6c_;
    char unknown_6d_[11];
};
struct Struct_ov031_02216360 {
    unsigned char unknown_0_[0x20];
    unsigned char unknown_20_[0x20];
    int unknown_40_;
    unsigned char unknown_44_[10];
};
struct Struct_ov031_02216360_2 {
    Struct_ov031_02216360* unknown_0_;
    unsigned long long unknown_8_;
    Struct_ov031_02216360_3 unknown_10_[16];
    int unknown_790_;
    int unknown_794_;
};
struct Struct_ov031_0224e5dc_2 {
    Struct_ov031_02216360_2* unknown_0_;
    void* unknown_4_;
    int unknown_8_;
};
extern Struct_ov031_0224e5dc_2 data_ov031_0224e5dc;
extern "C" int func_ov031_02215fd8(void*, int, int, int);
extern "C" int func_ov031_022160b0(int);
extern "C" int func_ov031_02216178(int);
extern "C" int func_ov031_0221624c(char*);
extern "C" int func_ov031_02216070(int);
extern "C" int func_ov031_02216710(unsigned char*);
extern "C" void func_ov031_02216744();
extern "C" void func_ov031_02216758();
extern "C" void func_ov031_0221676c();
extern "C" void func_ov031_02216780();
extern "C" void func_ov031_02216794();

// USA: func_ov031_02216360
extern "C" ARM int func_ov031_02216360() {
    if (data_ov031_0224e5dc.unknown_4_ == 0 || data_ov031_0224e5dc.unknown_0_ == 0) return 3;
    int var0;
    unsigned int var1;
    int var2 = 1;
    switch (data_ov031_0224e5dc.unknown_8_) {
    case 0:
        data_ov031_0224e5dc.unknown_8_ = 1;
        if (func_ov031_02215fd8(data_ov031_0224e5dc.unknown_4_, (int)func_ov031_02216744, 0, data_ov031_0224e5dc.unknown_0_->unknown_794_))
            data_ov031_0224e5dc.unknown_8_ = 11;
        break;
    case 2:
        data_ov031_0224e5dc.unknown_8_ = 3;
        if (func_ov031_022160b0((int)func_ov031_02216758) == 0) {
            if (data_ov031_0224e5dc.unknown_0_->unknown_8_ == 0) {
                data_ov031_0224e5dc.unknown_0_->unknown_8_ = GetCurrentTimestamp();
            }
        } else {
            data_ov031_0224e5dc.unknown_8_ = 10;
        }
        break;
    case 4: {
        unsigned long long var3 = GetCurrentTimestamp();
        unsigned long long var4 = data_ov031_0224e5dc.unknown_0_->unknown_8_;
        unsigned long long var5 = var3 - var4;
        if (var5 * 64 / 0x82ea < 3000) data_ov031_0224e5dc.unknown_8_ = 2;
        else data_ov031_0224e5dc.unknown_8_ = 5;
        break;
    }
    case 5:
        data_ov031_0224e5dc.unknown_8_ = 6;
        if (func_ov031_02216178((int)func_ov031_0221676c)) data_ov031_0224e5dc.unknown_8_ = 10;
        break;
    case 7: {
        if (func_ov031_0221624c((char*)data_ov031_0224e5dc.unknown_0_->unknown_10_)) data_ov031_0224e5dc.unknown_8_ = 10;
        var0 = 0;
        data_ov031_0224e5dc.unknown_0_->unknown_790_ = -1;
        var1 = 0;
        do {
            if (data_ov031_0224e5dc.unknown_0_->unknown_10_[var0].unknown_0_ && (data_ov031_0224e5dc.unknown_0_->unknown_10_[var0].unknown_6c_ & 2) && data_ov031_0224e5dc.unknown_0_->unknown_10_[var0].unknown_6b_ <= 3 && func_ov031_02216710(data_ov031_0224e5dc.unknown_0_->unknown_10_[var0].unknown_26_)) {
                if (data_ov031_0224e5dc.unknown_0_->unknown_10_[var0].unknown_4_ >= var1) {
                    data_ov031_0224e5dc.unknown_0_->unknown_790_ = var0;
                    var1 = data_ov031_0224e5dc.unknown_0_->unknown_10_[var0].unknown_4_;
                }
            }
            var0++;
        } while (var0 < 16);
        data_ov031_0224e5dc.unknown_8_ = 8;
        if (func_ov031_02216070((int)func_ov031_02216780)) data_ov031_0224e5dc.unknown_8_ = 11;
        break;
    }
    case 9: {
        int var6 = data_ov031_0224e5dc.unknown_0_->unknown_790_;
        if (var6 < 0) {
            data_ov031_0224e5dc.unknown_8_ = 11;
            break;
        }
        VectorizedInvertedMemcpy(data_ov031_0224e5dc.unknown_0_->unknown_10_[var6].unknown_6_, data_ov031_0224e5dc.unknown_0_->unknown_0_->unknown_0_, 0x20);
        VectorizedInvertedMemcpy(data_ov031_0224e5dc.unknown_0_->unknown_10_[data_ov031_0224e5dc.unknown_0_->unknown_790_].unknown_4a_, data_ov031_0224e5dc.unknown_0_->unknown_0_->unknown_20_, 0x20);
        data_ov031_0224e5dc.unknown_0_->unknown_0_->unknown_40_ = data_ov031_0224e5dc.unknown_0_->unknown_10_[data_ov031_0224e5dc.unknown_0_->unknown_790_].unknown_6b_;
        VectorizedInvertedMemcpy(data_ov031_0224e5dc.unknown_0_->unknown_10_[data_ov031_0224e5dc.unknown_0_->unknown_790_].unknown_26_, data_ov031_0224e5dc.unknown_0_->unknown_0_->unknown_44_, 10);
        var2 = 2;
        break;
    }
    case 10:
        data_ov031_0224e5dc.unknown_8_ = 8;
        if (func_ov031_02216070((int)func_ov031_02216794)) data_ov031_0224e5dc.unknown_8_ = 11;
        break;
    case 11: var2 = 3; break;
    }
    return var2;
}
