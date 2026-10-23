#include <globaldefs.h>

typedef struct Struct_ov031_0223d69c_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
} Struct_ov031_0223d69c_2;

typedef struct Struct_ov031_0223d69c {
    char unknown_0_[0x28];
    Struct_ov031_0223d69c_2 unknown_28_;
    Struct_ov031_0223d69c_2 unknown_2c_;
    char unknown_30_[8];
    unsigned char unknown_38_0_:1;
    unsigned char unknown_38_1_:7;
} Struct_ov031_0223d69c;

typedef struct Struct_ov031_02290d40_10 {
    int unknown_0_;
    Struct_ov031_0223d69c* unknown_4_;
} Struct_ov031_02290d40_10;

extern Struct_ov031_02290d40_10 data_ov031_02290d40;

static inline int inline_ov031_0223d69c(void) {
    return (*(unsigned short*)0x027fffa8 & 0x8000) >> 15;
}

// USA: func_ov031_0223d69c
ARM int func_ov031_0223d69c(Struct_ov031_0223d69c_2* arg0) {
    Struct_ov031_0223d69c* var0;
    if (inline_ov031_0223d69c()) return 0;
    var0 = data_ov031_02290d40.unknown_4_;
    if (!var0->unknown_38_0_) {
        *arg0 = var0->unknown_2c_;
        return 0;
    }
    *arg0 = var0->unknown_28_;
    return 1;
}
