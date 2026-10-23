#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02021394_2720 = 0x9d4 };
#else
enum { Enum_02021394_2720 = 0xaa0 };
#endif

struct Struct_02021394 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_02021394_2 {
    unsigned char unknown_0_[Enum_02021394_2720];
    unsigned short unknown_aa0_;
    struct Struct_02021394 unknown_aa2_[1];
};

// USA: func_02021394
extern "C" ARM int func_02021394(struct Struct_02021394_2* arg0, int arg1, int arg2, short* arg3, short* arg4) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_aa0_; var0++) {
        struct Struct_02021394* var1 = &arg0->unknown_aa2_[var0];
        if (var1->unknown_0_ == arg1 && var1->unknown_2_ == arg2) {
            *arg3 = var1->unknown_4_;
            *arg4 = var1->unknown_6_;
            return 1;
        }
    }
    return 0;
}
