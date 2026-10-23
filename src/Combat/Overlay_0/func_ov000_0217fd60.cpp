#include <globaldefs.h>

struct Struct_ov000_0217fd60_2 {
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

struct Struct_ov000_0217fd60 {
    char unknown_0_[0x6c];
    signed char unknown_6c_[4];
    char unknown_70_[0x958 - 0x70];
    struct Struct_ov000_0217fd60_2 unknown_958_[4];
};

// USA: func_ov000_0217fd60
extern "C" ARM bool func_ov000_0217fd60(struct Struct_ov000_0217fd60* arg0, int arg1) {
    bool var0 = false;
    if (arg1 < 0) {
        int var1;
        for (var1 = 0; var1 < 4; var1++) {
            struct Struct_ov000_0217fd60_2* var2 = &arg0->unknown_958_[arg0->unknown_6c_[var1]];
            if (var2->unknown_4c_ >= 0) {
                var0 |= (var2->unknown_24_ & 1) != 0;
            }
        }
    } else {
        int var3;
        for (var3 = 0; var3 < 4; var3++) {
            struct Struct_ov000_0217fd60_2* var4 = &arg0->unknown_958_[arg0->unknown_6c_[var3]];
            if (arg1 == var4->unknown_4c_) {
                var0 = (var4->unknown_24_ & 1) != 0;
                break;
            }
        }
    }
    return var0;
}
