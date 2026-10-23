#include <globaldefs.h>

struct Struct_0203c05c_2 {
    char unknown_0_[0x22];
    short unknown_22_;
};

struct Struct_0203c05c {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

// USA: func_0203c05c
extern "C" ARM void func_0203c05c(struct Struct_0203c05c_2* arg0, struct Struct_0203c05c* arg1,
                                    int arg2, int arg3, int arg4, int arg5) {
    short var0 = arg0->unknown_22_;
    int var1;
    if (var0 < 0) {
        return;
    }
    for (var1 = 0; var1 < 4; var1++) {
        arg1->unknown_0_ = 0x80000000 | 0x4000 | (arg4 & 0xff) | ((arg3 & 0x1ff) << 16);
        arg1->unknown_4_ = (unsigned short)(var0 | ((arg2 & 3) << 10) | ((arg5 & 0xf) << 12));
        arg1++;
        arg3 += 0x20;
        var0 = (short)(var0 + 2);
    }
}
