#include <globaldefs.h>

struct Struct_ov000_02170b0c {
    unsigned char unknown_0_[0x4c];
    int unknown_4c_;
#if defined(jpn)
    unsigned char unknown_50_[0x428];
#else
    unsigned char unknown1_50_[0x3e8];
#endif
    float unknown_438_;
    unsigned char unknown_43c_;
};
extern unsigned short data_ov000_02184288;
extern unsigned short data_ov000_02184288_arg;
extern "C" double func_02009424(double);
void CleanInvalidateCacheRange(const void*, unsigned int);
extern "C" void LoadToSubBGStandardPalette(const void*, unsigned int, unsigned int);

// USA: func_ov000_02170b0c
extern "C" ARM void func_ov000_02170b0c(Struct_ov000_02170b0c* arg0, unsigned int arg1) {
    if (!(arg0->unknown_43c_ & 1)) return;
    if (arg0->unknown_43c_ & 2) {
        arg0->unknown_43c_ &= ~1;
        arg0->unknown_43c_ &= ~2;
        arg0->unknown_438_ = 0;
        data_ov000_02184288 = 0x7fff;
    } else {
        arg0->unknown_438_ += 0.2f * (float)arg1;
        while (3.1415925f <= arg0->unknown_438_) arg0->unknown_438_ -= 3.1415925f;
        float var0 = 1.0f - (float)func_02009424((double)(arg0->unknown_438_));
        short var1 = (short)(int)(21.0f * var0);
        short var2 = (short)(int)(21.0f * var0);
        short var3 = (short)(int)(-10.0f * var0);
        data_ov000_02184288 = (short)(var1 + 10) | ((short)(var2 + 10) << 5) | ((short)(var3 + 10) << 10);
    }
    int var4 = (arg0->unknown_4c_ + 2) << 5;
    CleanInvalidateCacheRange(&data_ov000_02184288_arg, 2);
    LoadToSubBGStandardPalette(&data_ov000_02184288_arg, var4 + 0x1e, 2);
}
