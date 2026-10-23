#include <globaldefs.h>

struct Struct_02073ec4_3 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x1e];
};

struct Struct_02073ec4_2 {
    struct Struct_02073ec4_3 unknown_0_[6];
    int unknown_c0_;
};

// USA: func_0209bd94
extern "C" ARM struct Struct_02073ec4_3* func_0209bd94(struct Struct_02073ec4_2* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_c0_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_0_) {
            return &arg0->unknown_0_[var0];
        }
    }
    return NULL;
}
