#include <globaldefs.h>

struct Struct_ov000_0215d414_2 {
    unsigned char* unknown_0_;
    unsigned short unknown_4_[3];
    unsigned short unknown_a_;
    unsigned char unknown_c_[3];
};

struct Struct_ov000_0215d414 {
    unsigned short unknown_0_;
    char unknown_2_[0xa - 0x2];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    char unknown_b_[0x18 - 0xb];
};

struct Struct_ov000_0215d414_3 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    int unknown_4_;
};

struct Struct_ov000_0215d414_4 {
    char unknown_0_[0x81b0];
    unsigned char unknown_81b0_;
    unsigned char unknown_81b1_0_ : 4;
    unsigned char unknown_81b1_4_ : 2;
    unsigned char unknown_81b1_6_ : 2;
    unsigned short unknown_81b2_;
    struct Struct_ov000_0215d414 unknown_81b4_[3];
    struct Struct_ov000_0215d414_3 unknown_81fc_[3];
    char unknown_8214_[0x8e18 - 0x8214];
    unsigned char* unknown_8e18_;
    char unknown_8e1c_[0x8e49 - 0x8e1c];
    unsigned char unknown_8e49_;
};

// USA: func_ov000_0215d414
extern "C" ARM void func_ov000_0215d414(struct Struct_ov000_0215d414_4* arg0, struct Struct_ov000_0215d414_2* arg1) {
    unsigned char var0 = 0;
    unsigned char var1 = 0;
    unsigned char var2 = 0;
    long var3;

    arg0->unknown_8e18_ = arg1->unknown_0_;
    for (var3 = 0; var3 < 3; var3++) {
        struct Struct_ov000_0215d414* var4 = &arg0->unknown_81b4_[var0];
        if (arg1->unknown_c_[var3] != 0) {
            int var5 = 0;
            int var6;
            for (var6 = 0; var6 < var2; var6++) {
                if (arg0->unknown_81fc_[var6].unknown_2_ == arg1->unknown_4_[var3]) {
                    var5 = 1;
                    break;
                }
            }
            if (!var5) {
                struct Struct_ov000_0215d414_3* var7 = &arg0->unknown_81fc_[var2++];
                var7->unknown_2_ = arg1->unknown_4_[var3];
                var7->unknown_0_ = 1;
                var7->unknown_4_ = 0;
            }
            var4->unknown_0_ = arg1->unknown_4_[var3];
            var0++;
            var4->unknown_a_0_ = arg1->unknown_c_[var3];
            var4->unknown_a_4_ = arg1->unknown_c_[var3];
            var1 += var4->unknown_a_0_;
        }
    }
    arg0->unknown_81b1_6_ = var2;
    arg0->unknown_81b0_ = var1;
    arg0->unknown_81b1_0_ = var1;
    arg0->unknown_81b1_4_ = var0;
    arg0->unknown_81b2_ = arg1->unknown_a_;
    arg0->unknown_8e49_ = arg0->unknown_8e18_[0x35];
}
