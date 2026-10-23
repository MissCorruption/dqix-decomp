#include <globaldefs.h>

extern "C" void func_0207dcf0(int arg0);
extern "C" int func_02001aec(void* arg0, void* arg1, int arg2);
extern "C" void func_ov017_021c9c64(int arg0, int arg1);

struct Struct_0207d798;
extern "C" void func_0207d7c0(struct Struct_0207d798* arg0);

extern int data_020e8a4c;

struct Struct_0207da94 {
    unsigned short unknown_0_;
    short unknown_2_;
    signed char unknown_4_;
    char unknown_5_[3];
    signed char unknown_8_[4];
};

// USA: func_0207da94
extern "C" ARM void func_0207da94(struct Struct_0207da94* arg0, int arg1) {
    int var0 = 0;
    int var1 = var0;
    int var2 = 1;
    int var3 = var0;
    int var4 = -1;
    for (; var0 < 4; arg0++, var0++) {
        signed char var5 = arg0->unknown_8_[arg1];
        if (var5 == 0) continue;
        if (arg0->unknown_4_ < 0) {
            arg0->unknown_8_[arg1] = (signed char)var4;
            continue;
        }
        {
            int var6 = (var5 == var4) ? var2 : var1;
            arg0->unknown_8_[arg1] = (signed char)var3;
            if (var6) {
                func_0207dcf0(arg0->unknown_0_);
            }
        }
        if (arg0->unknown_4_ == arg1) arg0->unknown_4_ = (signed char)var4;
        {
            int var7 = (func_02001aec(arg0->unknown_8_, &data_020e8a4c, 4) == 0);
            if (var7) {
                func_ov017_021c9c64(arg0->unknown_0_, 0);
                func_0207d7c0((struct Struct_0207d798*)arg0);
            }
        }
    }
}
