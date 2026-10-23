#include <globaldefs.h>
struct Struct_0205a254_3 { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0205a254_2 {
    int unknown_0_; int unknown_4_; unsigned short unknown_8_, unknown_a_;
    Struct_0205a254_3* unknown_c_;
    unsigned short unknown_10_, unknown_12_;
    unsigned char unknown_14_, unknown_15_; unsigned short unknown_16_;
};
struct Struct_0205a254;
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254*, int);
extern "C" void func_0205a3ac(Struct_0205a254*, int);
// USA: func_0205a254
extern "C" ARM void func_0205a254(Struct_0205a254* arg0, int arg1, int arg2) {
    Struct_0205a254_3* var0;
    unsigned short var1;
    int var2;
    unsigned short var3 = arg2;
    Struct_0205a254_2* var4 = func_0205a3d0(arg0, arg1);
    if (!var4) return;
    if (!(var4->unknown_15_ & 2) || !var4->unknown_0_) return;
    var4->unknown_12_ += var3;
    var0 = var4->unknown_c_;
    var2 = var4->unknown_10_;
    const unsigned short& var5 = var0[var2].unknown_0_;
    var1 = var4->unknown_12_;
    if (var5 <= var1) {
        var4->unknown_12_ = var1 - var5;
        switch (var4->unknown_0_) {
        case 0: break;
        case 1:
            var4->unknown_10_++;
            var1 = var4->unknown_10_;
            if (var4->unknown_a_ > var1) return;
            {
                var4->unknown_10_ = var1 - 1;
                var4->unknown_12_ = var0[var2].unknown_0_;
                func_0205a3ac(arg0, var4->unknown_8_);
            }
            break;
        case 2:
            var4->unknown_10_++;
            if (var4->unknown_a_ <= var4->unknown_10_) var4->unknown_10_ = 0;
            break;
        case 3: break;
        case 4: break;
        }
    }
}
