#include <globaldefs.h>

struct Struct_020800fc_3 {
    char unknown_0_[0x18];
    struct Struct_020800fc_3* unknown_18_;
    struct Struct_020800fc_3* unknown_1c_;
    struct Struct_020800fc_3* unknown_20_;
    struct Struct_020800fc_3* unknown_24_;
    char unknown_28_[0x2a - 0x28];
    unsigned char unknown_2a_;
};

struct Struct_020800fc {
    unsigned int unknown_0_;
};

// USA: func_0208036c
extern "C" ARM struct Struct_020800fc_3* func_0208036c(void* arg0, struct Struct_020800fc_3* arg1, int arg2, struct Struct_020800fc* arg3, unsigned char arg4) {
    struct Struct_020800fc_3* var0;
    struct Struct_020800fc_3* var1;
    if (arg1 == NULL) {
        return NULL;
    }
    var0 = arg1;
    switch (arg2) {
    case 0x40:
        while ((var1 = var0->unknown_1c_) != NULL) {
            if (var1->unknown_2a_ & 0x2) {
                break;
            }
            var0 = var1;
        }
        break;
    case 0x80:
        while ((var1 = var0->unknown_18_) != NULL) {
            if (var1->unknown_2a_ & 0x2) {
                break;
            }
            var0 = var1;
        }
        break;
    case 0x20:
        if (arg4) {
            arg3->unknown_0_ |= 0x20;
        } else {
            while ((var1 = var0->unknown_24_) != NULL) {
                if (var1->unknown_2a_ & 0x2) {
                    break;
                }
                var0 = var1;
            }
        }
        break;
    case 0x10:
        if (arg4) {
            arg3->unknown_0_ |= 0x10;
        } else {
            while ((var1 = var0->unknown_20_) != NULL) {
                if (var1->unknown_2a_ & 0x2) {
                    break;
                }
                var0 = var1;
            }
        }
        break;
    }
    return var0;
}
