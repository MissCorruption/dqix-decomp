#include <globaldefs.h>

struct Struct_020d135c {
    unsigned long unknown_0_;
    unsigned char unknown_4_[0x9c];
    char unknown_a0_[12];
    unsigned long unknown_ac_;
    unsigned short unknown_b0_;
    unsigned char unknown_b2_;
    unsigned char unknown_b3_;
    unsigned char unknown_b4_;
    unsigned char unknown_b5_[3];
    unsigned char unknown_b8_[4];
    unsigned char unknown_bc_;
    unsigned char unknown_bd_;
    unsigned short unknown_be_;
};

struct Struct_020d135c_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[3];
    unsigned char unknown_5_0_ : 1;
    unsigned char unknown_5_1_ : 1;
    unsigned short unknown_6_;
    unsigned long unknown_8_;
};

struct Struct_02112148 {
    int unknown_0_;
    volatile unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_020d135c_3 {
    int unknown_0_;
    int unknown_4_;
};

extern Struct_02112148 data_02112148;

extern "C" void func_020d14e4(unsigned short arg0, Struct_020d135c_3* arg1);
extern "C" void func_020d1468(int* arg0);
extern "C" void func_020d14b0(int* arg0);
extern "C" unsigned int func_020d1540(int arg0, Struct_020d135c_3* arg1);

// USA: func_020d135c
extern "C" ARM int func_020d135c() {
    int var0 = true;
    Struct_020d135c_3 var1;
    Struct_020d135c* var2 = (Struct_020d135c*)0x08000000;
    Struct_020d135c_2* var3 = (Struct_020d135c_2*)0x027ffc30;

    if (var3->unknown_0_ == 0xffff) {
        return false;
    }
    if (var3->unknown_5_1_ == true) {
        return false;
    }

    func_020d14e4(data_02112148.unknown_6_, &var1);
    {
        int var4[2];
        unsigned char var5;

        func_020d1468(var4);
        var5 = var2->unknown_b2_;
        if (var5 == 0x96 && var3->unknown_0_ != var2->unknown_be_ ||
            var5 != 0x96 && var3->unknown_0_ != *(unsigned short*)0x0801fffe ||
            var3->unknown_8_ != var2->unknown_ac_ && var3->unknown_5_0_) {
            var3->unknown_5_1_ = true;
            var0 = false;
        }
        func_020d14b0(var4);
    }
    func_020d1540(data_02112148.unknown_6_, &var1);
    return var0;
}
