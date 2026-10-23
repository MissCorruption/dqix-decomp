#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02081de0_48 = 0x24 };
#else
enum { Enum_02081de0_48 = 0x30 };
#endif

struct Struct_02081de0 {
    unsigned char unknown_0_[0xc4];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_[0x1b];
};

struct Struct_020813ec_2 {
    unsigned char unknown_0_[Enum_02081de0_48];
    struct Struct_02081de0 *unknown_30_;
    unsigned char unknown_34_[5];
    unsigned char unknown_39_;
};

// USA: func_02081de0
extern "C" ARM struct Struct_02081de0* func_02081de0(struct Struct_020813ec_2 *arg0) {
    unsigned char var0 = arg0->unknown_39_;
    struct Struct_02081de0 *var1 = arg0->unknown_30_;
    unsigned char var2 = 0;
    while (var2 < var0) {
        if (var1->unknown_c4_ == 0xff) {
            return var1;
        }
        var1++;
        var2++;
    }
    return NULL;
}
