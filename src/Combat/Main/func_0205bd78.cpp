#include <globaldefs.h>

struct Struct_0205bd04;
extern "C" int func_0205bd04(struct Struct_0205bd04*);

struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc*, int);

struct Struct_0205bd78 {
    int unknown_0_;
    char unknown_4_[0x1c];
    int* unknown_20_;
    int* unknown_24_;
    int* unknown_28_;
    int* unknown_2c_;
    char unknown_30_[0x4];
    int unknown_34_;
    short unknown_38_;
    short unknown_3a_;
    short* unknown_3c_;
    short* unknown_40_;
    short* unknown_44_;
    short* unknown_48_;
};

// USA: func_0205bd78
extern "C" ARM int func_0205bd78(struct Struct_0205bd78* arg0, int arg1, int arg2) {
    if (arg0->unknown_34_ == 0) return -1;
    if (arg0->unknown_3c_ == 0) return -1;
    if (arg0->unknown_40_ == 0) return -1;
    if (arg0->unknown_44_ == 0) return -1;
    if (arg0->unknown_48_ == 0) return -1;

    arg1 -= arg0->unknown_38_;
    arg2 -= arg0->unknown_3a_;

    int var0 = 0;
    while (var0 < *arg0->unknown_24_) {
        int var1 = 0;
        while (var1 < *arg0->unknown_20_) {
            int var2 = var1 * *arg0->unknown_24_ + var0;
            if (arg0->unknown_34_ > var2) {
                short var3 = arg0->unknown_3c_[var2];
                short var4 = arg0->unknown_40_[var2];
                short var5 = arg0->unknown_44_[var2];
                short var6 = arg0->unknown_48_[var2];
                int var7 = var3 + var5;
                int var8 = var4 + var6;
                if (arg1 >= var3 && var7 >= arg1 && arg2 >= var4 && var8 >= arg2) {
                    *arg0->unknown_2c_ = var0;
                    *arg0->unknown_28_ = var1;
                    int var9 = func_0205bd04((struct Struct_0205bd04*)arg0);
                    if (arg0->unknown_0_ <= var9) var9 = -1;
                    func_0205bcdc((struct Struct_0205bcdc*)arg0, var9);
                    return var9;
                }
            }
            var1++;
        }
        var0++;
    }
    return -1;
}
