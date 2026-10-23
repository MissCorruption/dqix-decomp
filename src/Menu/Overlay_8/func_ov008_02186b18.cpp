#if defined(jpn)
#define R(j,u) (j)
#define data_ov008_0218b490 data_ov008_0218c0f1
#define data_ov014_021896d4 data_ov014_0218a4e4
#define data_ov014_0218981c data_ov014_0218a5fc
#define data_ov015_02193d20 data_ov015_02194850
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194052 data_ov015_02194b92
#define data_ov015_02194078 data_ov015_02194bb8
#define data_ov015_0219415c data_ov015_02194c9c
#define data_ov015_02194160 data_ov015_02194ca0
#define data_ov015_02194167 data_ov015_02194ca7
#define func_ov008_021895a8 func_ov008_0218a2b0
#define func_ov008_02189c70 func_ov008_0218a930
#define func_ov008_0218aee4 func_ov008_0218bb50
#define func_ov014_021886f8 func_ov014_021895c8
#else
#define R(j,u) (u)
#endif
#include "World/Object3D.h"

struct Struct_ov008_02186b18 {
    unsigned char unknown_0_[0x74c];
    unsigned char unknown_74c_;
    unsigned char unknown_74d_[3];
    unsigned char unknown_750_[0x40];
    Object3D unknown_790_;
    unsigned char unknown_83c_[0xb10 - 0x83c];
    signed char unknown_b10_;
    unsigned char unknown_b11_[7];
    unsigned int unknown_b18_;
    unsigned char unknown_b1c_[0xb29 - 0xb1c];
    unsigned char unknown_b29_;
};

extern char data_02108760[];
extern char data_ov008_0218b490[];
extern "C" {
    int func_0205bafc(void*);
    int func_0205bb84(void*);
    void func_0205bb04(void*, int);
    void func_0205eaa0(void*, int, int);

    int func_ov008_02186b18(Struct_ov008_02186b18* arg0, int arg1, int arg2) {
        if (!arg1 || !arg2)
            return -1;
        int var0 = func_0205bafc(arg0->unknown_750_);
        if (var0 > 6)
            var0 = 6;
        for (int var1 = 0; var1 < var0; ++var1) {
            int var2 = (var1 << 4) + 8;
            int var3 = var2 + 16;
            if (arg2 > var2 && arg2 < var3 && arg1 > 16 && arg1 < R(136, 152))
                return var1 + arg0->unknown_b29_;
        }

        if ((arg0->unknown_b18_ & 0x10) && arg0->unknown_b10_ != 12 && arg1 >= 70 && arg1 < 82) {
            int var4 = arg0->unknown_b29_;
            if (var4 != 0 && arg2 >= 0 && arg2 < 8) {
                arg0->unknown_b29_ = var4 - 1;
                int var5 = arg0->unknown_b29_ + 5;
                if (func_0205bb84(arg0->unknown_750_) > var5)
                    func_0205bb04(arg0->unknown_750_, var5);
                return -1;
            }
            if ((unsigned int)var4 < 2 && arg2 >= 104 && arg2 < 112) {
                if (var4 + 6 < arg0->unknown_74c_)
                    ++arg0->unknown_b29_;
                int var6 = arg0->unknown_b29_;
                if (func_0205bb84(arg0->unknown_750_) < var6)
                    func_0205bb04(arg0->unknown_750_, var6);
                return -1;
            }
        }

        if (arg2 > 96 && arg2 < 106 && arg1 > R(207, 199) && arg1 < 242)
            return -2;

        if (!(arg0->unknown_b18_ & 0x80) && arg2 > 16 && arg2 < 96 && arg1 > 176 && arg1 < 208 && !(arg0->unknown_b18_ & 0x4000)) {
            func_0205eaa0(data_02108760, 0x5e, 0);
            arg0->unknown_790_.MaybeSetRegularAnimation(data_ov008_0218b490, 0);
            arg0->unknown_b18_ |= 0x4000;
        }
        return -1;
    }
}
