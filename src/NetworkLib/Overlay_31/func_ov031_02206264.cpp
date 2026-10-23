#include <globaldefs.h>

struct Struct_ov031_02206264_3 {
    unsigned char unknown_0_[0x48];
    int unknown_48_;
};
struct Struct_ov031_02206264 {
    unsigned char unknown_0_[0x10c];
    Struct_ov031_02206264_3* unknown_10c_;
};
struct Struct_ov031_02206264_2 {
    unsigned char unknown_0_[0x68];
    Struct_ov031_02206264* unknown_68_;
    unsigned char unknown_6c_[7];
    signed char unknown_73_;
};
extern "C" int func_ov031_02206368(Struct_ov031_02206264_2* arg0, int arg1, int arg2, int* arg3, int arg4);
extern "C" int func_ov031_02206410(Struct_ov031_02206264_2* arg0, const unsigned char* arg1, int arg2, int arg3, unsigned short arg4, unsigned int arg5, int arg6);

// USA: func_ov031_02206264
extern "C" ARM int func_ov031_02206264(Struct_ov031_02206264_2* arg0, const unsigned char* arg1, int arg2, unsigned short arg3, unsigned int arg4, int arg5) {
    int var0;
    int var1 = 0;
    int var2 = arg0->unknown_68_->unknown_10c_->unknown_48_;
    int var3;
    int var4;

    if (arg0->unknown_73_ == 1) {
        if (arg2 > var2 - 42) return var1 - 35;
        var3 = arg2;
    } else {
        var3 = var2 - 54;
        if (arg2 <= var3) var3 = arg2;
    }
    while (arg2 > 0) {
        var0 = func_ov031_02206368(arg0, arg2, var3, &var4, arg5);
        if (var0 > 0) {
            if (func_ov031_02206410(arg0, arg1, var0, var4, arg3, arg4, arg5) <= 0) return -6;
            arg1 += var0;
            arg2 -= var0;
            var1 += var0;
        }
        if (!(arg5 & 1)) {
            if (var0 > 0) break;
            return -6;
        }
    }
    return var1;
}
