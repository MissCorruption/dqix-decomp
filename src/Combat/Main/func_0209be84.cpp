#include <globaldefs.h>

struct Struct_02073ec4_2;
struct Struct_0209be84_2 {
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
    short unknown_2_;
};
struct Struct_0209be84 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    struct Struct_0209be84_2 unknown_8_[6];
};
extern "C" struct Struct_0209be84* func_0209bd94(struct Struct_02073ec4_2*, int);

#pragma optimize_for_size off

// USA: func_0209be84
extern "C" ARM struct Struct_0209be84_2* func_0209be84(struct Struct_02073ec4_2* arg0, unsigned int arg1, int arg2) {
    struct Struct_0209be84* var0 = func_0209bd94(arg0, arg2);
    int var1;
    if (var0 != NULL) {
        for (var1 = 0; var1 < var0->unknown_2_; var1++) {
            if (var0->unknown_8_[var1].unknown_0_0_ == arg1) {
                return &var0->unknown_8_[var1];
            }
        }
    }
    return NULL;
}
