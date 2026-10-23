#include <globaldefs.h>

#if defined(jpn)
struct Struct_02045c00 {
    char unknown_0_[0x18];
    char unknown_18_;
    char unknown_19_;
    unsigned char unknown_1a_;
    unsigned char unknown_1b_0_ : 1;
    unsigned char unknown_1b_1_ : 1;
    unsigned char unknown_1b_2_ : 1;
    unsigned char unknown_1b_3_ : 5;
};

struct Struct_02045c00_2 {
    char unknown_0_[0x884];
    int unknown_884_;
    struct Struct_02045c00 unknown_888_[0x80];
    unsigned char unknown_1688_[0x80];
    char unknown_1708_[0x81];
    unsigned char unknown_1789_;
};

extern "C" ARM int func_02045c00(struct Struct_02045c00_2* arg0, const char* arg1, int arg2) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 0x80; var1++) {
        struct Struct_02045c00* var2;
        if (arg0->unknown_1688_[var1] == 0) continue;
        var2 = &arg0->unknown_888_[var1];
        if (var2->unknown_18_ == arg1[0] && var2->unknown_19_ == arg1[1] && arg2 == var2->unknown_1a_) {
            if (arg0->unknown_1789_ & 0x80) {
                if (var2->unknown_1b_2_) return var1;
            } else if (arg0->unknown_1789_ & 0x2) {
                if (var2->unknown_1b_1_) return var1;
            } else {
                return var1;
            }
        }
        var0++;
        if (var0 == arg0->unknown_884_) break;
    }
    return -1;
}
#else
struct Struct_02045c00 {
    char unknown_0_[0x16];
    unsigned char unknown_16_0_ : 1;
    unsigned char unknown_16_1_ : 1;
    unsigned char unknown_16_2_ : 1;
    unsigned char unknown_16_3_ : 5;
    char unknown_17_;
    int unknown_18_;
};

struct Struct_02045c00_2 {
    char unknown_0_[0x9b8];
    struct Struct_02045c00 unknown_9b8_[0x80];
    unsigned char unknown_17b8_[0x80];
    char unknown_1838_[0x123];
    unsigned char unknown_195b_;
};

// USA: func_02045c00
extern "C" ARM int func_02045c00(struct Struct_02045c00_2* arg0, int arg1) {
    int var3;
    if (arg1 == 0) {
        return -1;
    }
    for (var3 = 0; var3 < 0x80; var3++) {
        struct Struct_02045c00* var4;
        if (arg0->unknown_17b8_[var3] == 0) continue;
        var4 = &arg0->unknown_9b8_[var3];
        if (arg1 != var4->unknown_18_) continue;
        if (arg0->unknown_195b_ & 0x80) {
            if (var4->unknown_16_2_) return var3;
        } else if (arg0->unknown_195b_ & 0x2) {
            if (var4->unknown_16_1_) return var3;
        } else {
            return var3;
        }
    }
    return -1;
}
#endif
