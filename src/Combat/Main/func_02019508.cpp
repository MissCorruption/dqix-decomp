#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02019508_1052 = 0x43c };
#else
enum { Enum_02019508_1052 = 0x41c };
#endif


struct Struct_02019508 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x6e];
};

struct Struct_02019508_2 {
    int unknown_0_;
    unsigned char unknown_4_[0x10];
    int unknown_14_;
    unsigned char unknown_18_[0x2c];
    struct Struct_02019508* unknown_44_;
    unsigned char unknown_48_[0xc];
    struct Struct_02019508_2* unknown_54_;
};

struct Struct_02019508_3 {
    unsigned char unknown_0_[Enum_02019508_1052];
    struct Struct_02019508_2* unknown_41c_;
};

// USA: func_02019508
extern "C" ARM struct Struct_02019508* func_02019508(struct Struct_02019508_3* arg0, int arg1, int arg2) {
    struct Struct_02019508* var0;
    struct Struct_02019508_2* var1;
    var0 = 0;
    var1 = arg0->unknown_41c_;
    while (var1 != 0) {
        if (var1->unknown_0_ == arg1) {
            int var2 = var1->unknown_14_;
            struct Struct_02019508* var3 = var1->unknown_44_;
            int var4;
            for (var4 = 0; var4 < var2; var4++, var3++) {
                if (var3->unknown_0_ == arg2) {
                    var0 = var3;
                    break;
                }
            }
        }
        var1 = var1->unknown_54_;
    }
    return var0;
}
