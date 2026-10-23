#include <globaldefs.h>

typedef struct Struct_020026b4 {
    char unknown_0_;
    char unknown_1_;
    short unknown_2_;
    struct {
        unsigned char unknown_0_;
        unsigned char unknown_1_[32];
        unsigned char unknown_21_;
    } unknown_4_;
} Struct_020026b4;

// USA: func_02009dfc
extern "C" ARM int func_02009dfc(const Struct_020026b4* arg0, const Struct_020026b4* arg1) {
    if (arg0->unknown_4_.unknown_1_[0] == 0) {
        if (arg1->unknown_4_.unknown_1_[0] != 0)
            return 1;
        return 0;
    }
    if (arg1->unknown_4_.unknown_1_[0] == 0)
        return 0;

    if (arg0->unknown_2_ == arg1->unknown_2_) {
        int var0;
        int var1 = arg0->unknown_4_.unknown_0_;

        if (var1 > arg1->unknown_4_.unknown_0_)
            var1 = arg1->unknown_4_.unknown_0_;

        for (var0 = 0; var0 < var1; var0++) {
            if (arg0->unknown_4_.unknown_1_[var0] < arg1->unknown_4_.unknown_1_[var0])
                return 1;
            if (arg1->unknown_4_.unknown_1_[var0] < arg0->unknown_4_.unknown_1_[var0])
                return 0;
        }

        if (var1 == arg0->unknown_4_.unknown_0_) {
            for (; var0 < arg1->unknown_4_.unknown_0_; var0++) {
                if (arg1->unknown_4_.unknown_1_[var0] != 0)
                    return 1;
            }
        }
        return 0;
    }
    return arg0->unknown_2_ < arg1->unknown_2_;
}
