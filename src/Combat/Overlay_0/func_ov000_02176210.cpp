#include <globaldefs.h>

struct Struct_0205d81c;

struct Struct_0205d0e0 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    short unknown_aa_;
    short unknown_ac_;
    short unknown_ae_;
};

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c* arg0, int arg1);
extern "C" void func_0205d904(unsigned char* arg0);

// USA: func_ov000_02176210
extern "C" ARM void func_ov000_02176210(struct Struct_0205d81c* arg0, int arg1, int arg2) {
    struct Struct_0205d0e0* var0 = func_0205d81c(arg0, arg1);
    struct Struct_0205d0e0* var1 = func_0205d81c(arg0, arg2);
    if (var0 == NULL || var1 == NULL) return;

    short var2 = var0->unknown_ae_;
    short var3 = var0->unknown_aa_;
    short var4 = var1->unknown_a8_;
    short var5 = var0->unknown_a8_;
    short var6 = var1->unknown_aa_;
    var0->unknown_ac_ = 0x20 - var5;
    var0->unknown_ae_ = var2;
    short var7 = 0x20 - var4;
    short var8 = var2 + var3;
    if (var8 + var6 > 0x18) var8 = var2 - var6;
    var1->unknown_ac_ = var7;
    var1->unknown_ae_ = var8;
    func_0205d904((unsigned char*)arg0);
}
