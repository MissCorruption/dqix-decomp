#include <globaldefs.h>

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4*);

struct Struct_0208ab34_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_020e30f0 {
    char unknown_0_[0xfc0];
    int unknown_fc0_;
};

extern "C" Struct_0208ab34_2* func_020e3054(Struct_0208ab34_2* arg0, int arg1);
extern "C" void func_020e3428(void* arg0, int arg1);
extern "C" void func_020e3328(void* arg0, int arg1);

// USA: func_020e30f0
extern "C" ARM void func_020e30f0(Struct_0208ab34_2* arg0) {
    void* var0 = func_0202ae18();
    if (!func_0202b7d8((int*)var0)) return;

    Struct_0208ab34_2* var1 = arg0;
    int var2;
    for (var2 = 0; var2 < 8; var2++, var1++) {
        if (var1->unknown_2_ == 2 && ((Struct_020e30f0*)var0)->unknown_fc0_ == 0) {
            if (var1->unknown_3_ <= 0x1e) {
                var1->unknown_3_ = var1->unknown_3_ + 1;
            } else {
                unsigned char var3 = var1->unknown_0_;
                unsigned char var4 = var1->unknown_1_;
                func_020e3428(arg0, var4);
                var1->unknown_1_ = var4;
                var1->unknown_0_ = var3;
                var1->unknown_2_ = 4;
            }
        }
    }

    unsigned char* var5 = (unsigned char*)arg0 + 0x20;
    int var6;
    for (var6 = 0; var6 < 8; var6++, var5++) {
        int var7 = *var5;
        if (var7 == 0) continue;
        Struct_0208ab34_2* var8 = func_020e3054(arg0, var7);
        if (var8 != NULL) {
            unsigned char var9 = var8->unknown_2_;
            int var10 = func_0202c1a4((struct Struct_0202c1a4*)var0);
            if (var8->unknown_0_ != var10 && var9 == 1) var9 = 3;
            if (var9 == 1 || var9 == 4 || var9 == 5) {
                *var5 = 0;
            } else if (var9 != 2) {
                func_020e3328(arg0, var7);
            }
        } else {
            func_020e3328(arg0, var7);
        }
    }
}
