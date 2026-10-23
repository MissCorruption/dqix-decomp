#include <globaldefs.h>

struct Struct_ov006_02153c6c {
    short unknown_0_;
    short unknown_2_;
};

struct Struct_ov006_02153c6c_2 {
    unsigned char unknown_0_[0x20];
    struct Struct_ov006_02153c6c* unknown_20_;
    unsigned short unknown_24_;
};

// USA: func_ov006_02153c6c
extern "C" ARM struct Struct_ov006_02153c6c* func_ov006_02153c6c(struct Struct_ov006_02153c6c_2* arg0, int arg1) {
    if (arg1 < 0) return 0;
    unsigned short var0 = arg0->unknown_24_;
    for (unsigned short var1 = 0; var1 < var0; var1++) {
        struct Struct_ov006_02153c6c* var2 = arg0->unknown_20_;
        short var3 = var2[var1].unknown_0_;
        if (var3 == arg1) return &var2[var1];
    }
    return 0;
}
