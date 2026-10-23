#include <globaldefs.h>

struct Struct_ov000_0217a8f4_2 {
    char unknown_0_[0xac];
    short unknown_ac_;
    short unknown_ae_;
    char unknown_b0_[0xc4 - 0xb0];
    unsigned char unknown_c4_;
    char unknown_c5_[0xe0 - 0xc5];
};

struct Struct_0205d81c {
    char unknown_0_[0xfc];
    Struct_ov000_0217a8f4_2 unknown_fc_[7];
};

struct Struct_ov000_0217a8f4 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

struct Struct_ov000_0217a8f4_3 {
    char unknown_0_[0x17c];
    int unknown_17c_;
    char unknown_180_[0x188 - 0x180];
    Struct_0205d81c unknown_188_;
};

struct Struct_ov000_02183548 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
};

struct Struct_ov000_021834d4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};

extern Struct_ov000_02183548 data_ov000_02183548[];
extern Struct_ov000_021834d4 data_ov000_021834d4[];

extern "C" Struct_ov000_0217a8f4* func_ov000_02161318(Struct_ov000_0217a8f4_3* arg0, int arg1);
extern "C" void func_ov000_02176210(Struct_0205d81c* arg0, int arg1, int arg2);
extern "C" void func_0205d904(unsigned char* arg0);

// USA: func_ov000_0217a8f4
extern "C" ARM void func_ov000_0217a8f4(Struct_ov000_0217a8f4_3* arg0) {
    Struct_ov000_0217a8f4* var0 = func_ov000_02161318(arg0, arg0->unknown_17c_);
    if (var0 == 0) {
        return;
    }
    int var1 = var0->unknown_44_;
    int var2 = var0->unknown_48_;
    Struct_ov000_0217a8f4_2* var3;
    int var4;
    for (var4 = 0; var4 < 7; var4++) {
        var3 = &arg0->unknown_188_.unknown_fc_[var4];
        int var5 = var3->unknown_c4_;
        int var6;
        for (var6 = 0; data_ov000_02183548[var6].unknown_0_ > 0; var6++) {
            if (var5 == data_ov000_02183548[var6].unknown_0_) {
                var3->unknown_ac_ = data_ov000_02183548[var6].unknown_2_ + (var1 >> 3);
                var3->unknown_ae_ = data_ov000_02183548[var6].unknown_4_ + (var2 >> 3);
                break;
            }
        }
    }
#if defined(jpn)
    func_ov000_02176210(&arg0->unknown_188_, 7, 33);
    func_ov000_02176210(&arg0->unknown_188_, 15, 34);
    func_ov000_02176210(&arg0->unknown_188_, 16, 35);
    func_ov000_02176210(&arg0->unknown_188_, 17, 36);
    func_ov000_02176210(&arg0->unknown_188_, 21, 22);

#else
    Struct_ov000_021834d4* var7 = data_ov000_021834d4;
    while (true) {
        if (var7->unknown_0_ == 0xff) {
            break;
        }
        func_ov000_02176210(&arg0->unknown_188_, var7->unknown_0_, var7->unknown_1_);
        var7++;
    }

#endif
    func_0205d904((unsigned char*)&arg0->unknown_188_);
}
