#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_0220f8a8_3 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    const unsigned char* unknown_c_;
    int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    unsigned int unknown_24_;
};
struct Struct_ov031_0220f8a8 {
    char unknown_0_[0x24];
    Struct_ov031_0220f8a8_3* unknown_24_;
};
struct Struct_ov031_0220f8a8_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    unsigned int unknown_10_;
    unsigned char unknown_14_[0x400];
};
extern Struct_ov031_0220f8a8* data_ov031_0224e580;
extern "C" int func_ov031_0220fe44(int (*)(int*));
extern "C" int func_ov031_0220ff34(int*);
extern "C" int func_ov031_0220ff18(void*);
extern "C" void func_ov031_0220fea0();
extern "C" void func_ov031_0220fed8();

// USA: func_ov031_0220f8a8
extern "C" ARM void func_ov031_0220f8a8() {
    unsigned char var0[sizeof(Struct_ov031_0220f8a8_2)];
    Struct_ov031_0220f8a8_2* var1 = (Struct_ov031_0220f8a8_2*)var0;
    const unsigned char* var2 = data_ov031_0224e580->unknown_24_->unknown_c_;
    unsigned int var3 = data_ov031_0224e580->unknown_24_->unknown_14_;
    if (var3 > 0x400) var3 = 0x400;
    var1->unknown_0_ = var3 + 20;
    var1->unknown_4_ = 0x44535359;
    var1->unknown_8_ = 0xcd;
    var1->unknown_10_ = data_ov031_0224e580->unknown_24_->unknown_14_;
    var1->unknown_c_ = data_ov031_0224e580->unknown_24_->unknown_4_;
    VectorizedInvertedMemcpy(var2, var1->unknown_14_, var3);
    if (func_ov031_0220fe44(func_ov031_0220ff34)) {
        if (func_ov031_0220ff18(var0)) {
            int var4 = 1;
            if (var3 < data_ov031_0224e580->unknown_24_->unknown_14_) do {
                unsigned int var5 = data_ov031_0224e580->unknown_24_->unknown_14_ - var3;
                var4 = 1;
                if (var5 > 0x400) { var5 = 0x400; var4 = 0; }
                var1->unknown_4_ = 0x44535359;
                var1->unknown_8_ = 0xcf;
                var1->unknown_0_ = var5 + 20;
                var1->unknown_c_ = !var4;
                var1->unknown_10_ = var5;
                VectorizedInvertedMemcpy(var2 + var3, var1->unknown_14_, var5);
                if (!func_ov031_0220ff18(var0)) break;
                var3 += var5;
                data_ov031_0224e580->unknown_24_->unknown_18_ = var3;
            } while (var3 < data_ov031_0224e580->unknown_24_->unknown_14_);
            if (var4) {
                func_ov031_0220fea0();
                Struct_ov031_0220f8a8_3* var6 = data_ov031_0224e580->unknown_24_;
                if (var3 != var6->unknown_24_) var6->unknown_20_ = 0;
            }
        }
    }
    func_ov031_0220fed8();
}
