#include <globaldefs.h>

struct Struct_02071d60_2 {
    short unknown_0_;
    char unknown_2_[0x1e];
};

struct Struct_02071d60 {
    void* unknown_0_;
    struct Struct_02071d60_2* unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

// USA: func_02071d60
extern "C" ARM struct Struct_02071d60_2* func_02071d60(struct Struct_02071d60* arg0, int arg1) {
    unsigned short var0;
    for (var0 = 0; var0 < arg0->unknown_a_; var0++) {
        if (arg1 == arg0->unknown_4_[var0].unknown_0_) {
            return &arg0->unknown_4_[var0];
        }
    }
    return NULL;
}
