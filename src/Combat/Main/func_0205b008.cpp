#include <globaldefs.h>

#if defined(jpn)
#define func_0205b008 func_0205c3a4
#endif

struct Struct_0205b008_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_0205b008 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_0205b008_2* unknown_4_;
};

// USA: func_0205b008
extern "C" ARM int func_0205b008(int arg0, struct Struct_0205b008* arg1, unsigned int arg2, int arg3,
                                 unsigned short arg4, int arg5) {
    unsigned short var0;
    unsigned short var1;
    struct Struct_0205b008_2* var2;
    unsigned int var3;

    if (arg1 == 0) {
        return 1;
    }
    if (arg2 >= 3) {
        return 1;
    }
    if (arg1 == 0) {
        return 1;
    }
    var1 = arg4;
    for (var0 = 0; var0 < arg1->unknown_0_; var0++) {
        var2 = arg1->unknown_4_ + var0;
        switch (arg2) {
        case 0:
            var3 = var2->unknown_0_;
            break;
        case 1:
            var3 = var2->unknown_2_;
            break;
        case 2:
            var3 = var2->unknown_4_;
            break;
        }
        var3 = (unsigned short)(var3 & (unsigned int)~arg3) | ((((unsigned int)(arg5 << var1)) << 16) >> 16);
        switch (arg2) {
        case 0:
            var2->unknown_0_ = var3;
            break;
        case 1:
            var2->unknown_2_ = var3;
            break;
        case 2:
            var2->unknown_4_ = var3;
            break;
        }
    }
    return 0;
}
