#include <globaldefs.h>

struct Struct_ov000_0217f910 {
    char unknown_0_[0xc];
    short unknown_c_;
    char unknown_e_[0x4c - 0xe];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0xc7 - 0x50];
#else
    char unknown1_50_[0x87 - 0x50];
#endif
    unsigned char unknown_87_;
    char unknown_88_[0x445 - 0x88];
    unsigned char unknown_445_;
    char unknown_446_[0x448 - 0x446];
};

struct Struct_ov000_0217f910_2 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x958 - 0x70];
    struct Struct_ov000_0217f910 unknown_958_[1];
};

// USA: func_ov000_0217f910
extern "C" ARM int func_ov000_0217f910(struct Struct_ov000_0217f910_2* arg0) {
    struct Struct_ov000_0217f910* var0;
    int var1 = 0;
    for (int var2 = 0; var2 < 4; var2++) {
        var0 = &arg0->unknown_958_[arg0->unknown_6c_[var2]];
        int var3 = 0;
        int var4 = var0->unknown_4c_;
        if (var4 >= 0 && var4 <= 3) var3 = 1;
        if (var3 && var0->unknown_87_ && var0->unknown_c_ != 0 && var0->unknown_445_) {
            var1++;
        }
    }
    return var1;
}
