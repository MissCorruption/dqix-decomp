#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void func_ov017_021c6254(char* arg0, int arg1);

struct Struct_ov017_021c6378_2 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c6378_3 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 4;
};

struct Struct_ov017_021c6378_4 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    Struct_ov017_021c6378_3 unknown_a_;
    unsigned char unknown_b_;
    unsigned char unknown_c_[0xc];
};

struct Struct_ov017_021c6378_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 2;
    unsigned char unknown_1_6_ : 2;
    unsigned char unknown_2_[2];
    Struct_ov017_021c6378_4 unknown_4_[3];
};

struct Struct_ov017_021c6378_6 {
    unsigned short unknown_0_;
    unsigned short unknown_2_[3];
    unsigned char unknown_8_[3];
    Struct_ov017_021c6378_3 unknown_b_;
    Struct_ov017_021c6378_3 unknown_c_;
    Struct_ov017_021c6378_3 unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};

struct Struct_ov017_021c6378 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c6378_6 unknown_4_;
};

// USA: func_ov017_021c6378
extern "C" ARM void func_ov017_021c6378(char* arg0) {
    void* var0 = func_0202ae24();
    Struct_ov017_021c6378 var1;
    var1.unknown_0_ = 0x40;
    Struct_ov017_021c6378_6* var2 = &var1.unknown_4_;
    memset(var2, 0, sizeof(Struct_ov017_021c6378_6));
    var2->unknown_0_ = (*(Struct_ov017_021c6378_2**)(arg0 + 0x8e18))->unknown_8_;
    Struct_ov017_021c6378_5* var3 = (Struct_ov017_021c6378_5*)(arg0 + 0x1b0 + 0x8000);
    var2->unknown_e_ = var3->unknown_1_6_;
    for (int var4 = 0; var4 < var3->unknown_1_4_; var4++) {
        var2->unknown_2_[var4] = var3->unknown_4_[var4].unknown_0_;
        var2->unknown_8_[var4] = var3->unknown_4_[var4].unknown_b_;
        if (var4 == 0) {
            var2->unknown_b_.unknown_0_0_ = var3->unknown_4_[var4].unknown_a_.unknown_0_0_;
            var2->unknown_b_.unknown_0_4_ = var3->unknown_4_[var4].unknown_a_.unknown_0_4_;
        } else if (var4 == 1) {
            var2->unknown_c_.unknown_0_0_ = var3->unknown_4_[var4].unknown_a_.unknown_0_0_;
            var2->unknown_c_.unknown_0_4_ = var3->unknown_4_[var4].unknown_a_.unknown_0_4_;
        } else if (var4 == 2) {
            var2->unknown_d_.unknown_0_0_ = var3->unknown_4_[var4].unknown_a_.unknown_0_0_;
            var2->unknown_d_.unknown_0_4_ = var3->unknown_4_[var4].unknown_a_.unknown_0_4_;
        }
    }
    func_0205e330(var0, &var1, 0);
    for (int var5 = 0; var5 < var3->unknown_1_4_; var5++) {
        func_ov017_021c6254(arg0, var5);
    }
}
