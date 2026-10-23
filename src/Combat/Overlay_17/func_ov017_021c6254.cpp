#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c6254 {
    unsigned char unknown_0_[8];
    unsigned short unknown_8_;
};

struct Struct_ov017_021c6254_2 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0xd];
};

struct Struct_ov017_021c6254_3 {
    unsigned char unknown_0_[4];
    Struct_ov017_021c6254_2 unknown_4_[1];
};

struct Struct_ov017_021c6254_4 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[8];
    unsigned char unknown_c_[4];
};

struct Struct_ov017_021c6254_5 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c6254_4 unknown_4_;
};

// USA: func_ov017_021c6254
extern "C" ARM void func_ov017_021c6254(char* arg0, int arg1) {
    void* var0 = func_0202ae24();
    Struct_ov017_021c6254_5 var1;
    Struct_ov017_021c6254_4* var2 = &var1.unknown_4_;
    var1.unknown_0_ = 0x62;
    var2->unknown_0_ = (*(Struct_ov017_021c6254**)(arg0 + 0x8e18))->unknown_8_;
    Struct_ov017_021c6254_2* var3 = &((Struct_ov017_021c6254_3*)(arg0 + 0x1b0 + 0x8000))->unknown_4_[arg1];
    var2->unknown_2_ = arg1;
    for (int var4 = 0; var4 < var3->unknown_a_0_; var4++) {
        var2->unknown_4_[var4] = 0;
        var2->unknown_4_[var4] = var3->unknown_2_[var4];
    }
    func_0205e330(var0, &var1, 0);
}
