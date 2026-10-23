#include <globaldefs.h>

struct Struct_0209b8d4 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    unsigned int unknown_4_;
};
struct Struct_0209afd4_6 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_0209b8d4 unknown_4_[6];
    unsigned char unknown_34_[0x18];
};

// USA: func_0209b8d4
extern "C" ARM struct Struct_0209b8d4* func_0209b8d4(struct Struct_0209afd4_6* arg0, int arg1, int arg2, int* arg3) {
    int var0, var1;
    for (var0 = 0; var0 < 6; var0++) {
        if (arg2 == arg0[var0].unknown_0_) {
            *arg3 = var0;
            for (var1 = 0; var1 < 6; var1++) {
                if (arg1 == (int)arg0[var0].unknown_4_[var1].unknown_0_0_) {
                    return &arg0[var0].unknown_4_[var1];
                }
            }
        }
    }
    return NULL;
}
