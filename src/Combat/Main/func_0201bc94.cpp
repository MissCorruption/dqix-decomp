#include <globaldefs.h>

struct Struct_0201bc94_2 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 3;
};

struct Struct_0201bc94 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    Struct_0201bc94_2* unknown_8_;
};

// USA: func_0201bc94
extern "C" ARM int func_0201bc94(Struct_0201bc94* arg0) {
    int var0 = 1;
    if (arg0->unknown_0_ == 0x2710) {
        var0 = 0;
    }
    else if (arg0->unknown_0_ == 0x2774) {
        var0 = 0;
    }
    else if (arg0->unknown_4_ == 0x170c) {
        var0 = 0;
    }
    else if (arg0->unknown_4_ == 0x1901) {
        var0 = 0;
    }
    else {
        Struct_0201bc94_2* var1 = (Struct_0201bc94_2*)((char*)arg0->unknown_8_ + 0xc);
        if (!var1->unknown_0_4_)
            var0 = 0;
    }
    return var0;
}
