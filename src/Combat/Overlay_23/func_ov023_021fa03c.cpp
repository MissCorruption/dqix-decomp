#include <globaldefs.h>

struct Struct_ov023_021fa03c_2 { char unknown_0_[2]; unsigned char unknown_2_; char unknown_3_[0x25]; };
struct Struct_ov023_021fa03c {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
    char unknown_22_[2];
    struct Struct_ov023_021fa03c_2* unknown_24_;
};

// USA: func_ov023_021fa03c
extern "C" ARM struct Struct_ov023_021fa03c_2* func_ov023_021fa03c(struct Struct_ov023_021fa03c* arg0) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_20_; var0++) {
        struct Struct_ov023_021fa03c_2* var1 = &arg0->unknown_24_[var0];
        if (var1->unknown_2_ == 0) return var1;
    }
    return NULL;
}
