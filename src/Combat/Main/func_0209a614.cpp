#include <globaldefs.h>

struct Struct_0209a614_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[8];
};
struct Struct_0209a614 {
    struct Struct_0209a614_2* unknown_0_;
    int unknown_4_;
};

// USA: func_0209a614
extern "C" ARM struct Struct_0209a614_2* func_0209a614(struct Struct_0209a614* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_4_; var0++) {
        if (arg1 == arg0->unknown_0_[var0].unknown_2_) {
            return &arg0->unknown_0_[var0];
        }
    }
    return NULL;
}
