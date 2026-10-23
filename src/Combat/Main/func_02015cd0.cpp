#include <globaldefs.h>
#include <NitroSDK/Matrix.h>

int fix32sin(int);
int fix32abs(int);

struct Struct_02015cd0 {
    char unknown_0_[0xe];
    short unknown_e_;
    unsigned short unknown_10_;
    char unknown_12_[6];
    unsigned char unknown_18_;
};

// USA: func_02015cd0
extern "C" ARM int func_02015cd0(Struct_02015cd0* arg0) {
    if (arg0->unknown_18_ == 0) {
        unsigned short var0 = arg0->unknown_10_;
        int var1 = 0xbff4;
        if ((float)var0 <= (float)var1 / 4096.0f) {
            int var2 = (arg0->unknown_10_ * arg0->unknown_10_) << 12;
            int var3 = fix32_Divide(-0x800, 0x8fee0);
            arg0->unknown_e_ = FIX32_MULTIPLY(var3, var2) + 0x4800;
            arg0->unknown_10_ = arg0->unknown_10_ + 1;
        } else {
            int var4 = 0x17fe8;
            if ((float)var0 <= (float)var4 / 4096.0f) {
                int var5 = (int)(4096.0f * ((float)var0 - (float)var1 / 4096.0f));
                int var6 = 0x1000 - fix32_Divide(var5, 0x17fe8);
                int var7 = fix32_Divide(0xc90f, 0x17fe8);
                int var8 = FIX32_MULTIPLY(var7, var5);
                if (var8 > 0x647a) var8 = 0x647a;
                int var9 = FIX32_MULTIPLY(fix32sin(var8), 0x101);
                arg0->unknown_e_ = FIX32_MULTIPLY(var9, var6) + 0x4000;
                arg0->unknown_10_ = arg0->unknown_10_ + 1;
            } else {
                return 1;
            }
        }
    } else if (arg0->unknown_18_ == 1) {
        if (arg0->unknown_10_ == 0) {
            int var10 = FIX32_MULTIPLY(0x647a - arg0->unknown_e_, 0x333);
            arg0->unknown_e_ += var10;
            if (fix32abs(var10) < 4) {
                arg0->unknown_e_ = 0x647a;
                arg0->unknown_10_ = arg0->unknown_10_ + 1;
                return 1;
            }
        } else {
            return 1;
        }
    }
    return 0;
}
