#include <globaldefs.h>

struct Struct_ov000_02170460 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

struct Struct_ov000_02175024 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x93c - 0x70];
    int unknown_93c_;
    int unknown_940_;
    int unknown_944_;
    char unknown_948_[0x958 - 0x948];
    struct Struct_ov000_02170460 unknown_958_[1];
};

extern "C" void func_ov000_02170460(struct Struct_ov000_02170460* arg0, int arg1);
extern "C" void func_ov000_02174e50(struct Struct_ov000_02175024* arg0, int arg1);

extern const int data_ov000_021833f8[];
extern const int data_ov000_02183408[];

// USA: func_ov000_02175024
extern "C" ARM void func_ov000_02175024(struct Struct_ov000_02175024* arg0, int arg1) {
    struct Struct_ov000_02170460* var0;
    int var1;
    for (var1 = 0; var1 < 4; var1++) {
        var0 = &arg0->unknown_958_[arg0->unknown_6c_[var1]];
        int var2 = var0->unknown_4c_;
        int var3 = (var2 >= 0 && var2 <= 3) ? 1 : 0;
        if (!var3) continue;
        func_ov000_02170460(var0, arg1);
        if (var0->unknown_24_ & 8) {
            func_ov000_02174e50(arg0, var2);
        }
    }

    arg0->unknown_93c_ += arg1;
    arg0->unknown_93c_ &= 0xf;
    int var4 = arg0->unknown_93c_ >> 2;
    arg0->unknown_940_ = data_ov000_021833f8[var4];
    arg0->unknown_944_ = data_ov000_02183408[var4];
}
