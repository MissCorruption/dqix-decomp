#include <globaldefs.h>

extern "C" void func_0204c804(void* arg0);

struct Struct_0205d6e4_2 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    char unknown_a0_[0xb0 - 0xa0];
    unsigned char unknown_b0_;
    char unknown_b1_[0xb4 - 0xb1];
    unsigned char unknown_b4_;
};

struct Struct_0205d6e4 {
    char unknown_0_[0xc2];
    unsigned short unknown_c2_;
    unsigned char unknown_c4_;
};

// USA: func_0205d6e4
extern "C" ARM void func_0205d6e4(Struct_0205d6e4_2* arg0, unsigned int arg1) {
    unsigned char var0;

    if (arg0->unknown_98_ == 0) return;
    if (arg0->unknown_9c_ == 0) return;
    if (arg0->unknown_b4_ == 0) return;

    for (var0 = 0; var0 < arg1; var0++) {
        int var1 = arg0->unknown_b4_ - 1;
        void* var2 = (void*)arg0->unknown_9c_;
        Struct_0205d6e4* var3 = (Struct_0205d6e4*)((char*)var2 + var1 * 0xe0);
        var3->unknown_c2_ = 0;
        var3->unknown_c4_ = 0;
        func_0204c804(var3);

        int var4 = arg0->unknown_b4_ - 1;
        arg0->unknown_b4_ = var4;
        int var5 = var4 & 0xff;
        if (var5 == 0) return;

        void* var6 = (void*)arg0->unknown_9c_;
        int var7 = var5 - 1;
        Struct_0205d6e4* var8 = (Struct_0205d6e4*)((char*)var6 + var7 * 0xe0);
        var8->unknown_c2_ = 0;

        int var9 = arg0->unknown_b4_ - 1;
        void* var10 = (void*)arg0->unknown_9c_;
        Struct_0205d6e4* var11 = (Struct_0205d6e4*)((char*)var10 + var9 * 0xe0);
        arg0->unknown_b0_ = var11->unknown_c4_;
    }
}
