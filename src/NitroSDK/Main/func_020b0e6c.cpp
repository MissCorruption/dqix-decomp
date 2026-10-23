#include <globaldefs.h>

struct Struct_020b0e6c_3 {
    unsigned short unknown_0_;                  // 0x0
    unsigned short unknown_2_;                  // 0x2
    int unknown_4_;                         // 0x4
    struct Struct_020b0e6c_3* unknown_8_;     // 0x8
};

struct Struct_020b0e6c_2 {
    char unknown_0_[0x10];
    struct Struct_020b0e6c_3* unknown_10_;     // 0x10
};

struct Struct_020b0e6c {
    struct Struct_020b0e6c_2* unknown_0_;   // 0x0
};

extern "C" int func_020b0d80(struct Struct_020b0e6c_3*, unsigned int);

// USA: func_020b0e6c
extern "C" ARM int func_020b0e6c(struct Struct_020b0e6c* arg0, unsigned int arg1) {
    struct Struct_020b0e6c_3* var0 = arg0->unknown_0_->unknown_10_;
    if (var0 != NULL) {
        do {
            if (var0->unknown_0_ <= arg1 && arg1 <= var0->unknown_2_) {
                return func_020b0d80(var0, arg1);
            }
            var0 = var0->unknown_8_;
        } while (var0 != NULL);
    }
    return 0xffff;
}
