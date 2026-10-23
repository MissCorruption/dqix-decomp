#include <globaldefs.h>

struct Struct_020bf658 { unsigned int unknown_0_; unsigned int unknown_4_; };

struct Struct_020bf658_2 {
    char unknown_0_[0xc0];
    unsigned char unknown_c0_;
    char unknown_c1_[0xc4 - 0xc1];
    unsigned short unknown_c4_;
    char unknown_c6_[0x110 - 0xc6];
    unsigned int unknown_110_;
    char unknown_114_[0x13c - 0x114];
    int (*unknown_13c_)(int, Struct_020bf658*, Struct_020bf658*, int);
    int unknown_140_;
    int unknown_144_;
    int unknown_148_;
    char unknown_14c_[0x160 - 0x14c];
    int unknown_160_;
    int (*unknown_164_)(void*, unsigned int);
    void (*unknown_168_)(void*);
};

extern "C" void* func_020bd5e4(int arg0);
extern "C" void func_020bffc4(void* arg0, unsigned int arg1);

// USA: func_020bf658
extern "C" ARM void func_020bf658(struct Struct_020bf658_2* arg0) {
    Struct_020bf658 var0, var1;
    unsigned int var2;
    unsigned short var3, var4;
    unsigned int* var5;
    unsigned int var6;
    unsigned long long var7;

    var0.unknown_0_ = arg0->unknown_148_;
    var0.unknown_4_ = arg0->unknown_144_;
    var1.unknown_0_ = arg0->unknown_144_;
    var1.unknown_4_ = 0;
    if (!arg0->unknown_13c_(0, &var0, &var1, arg0->unknown_140_)) return;

    var5 = (unsigned int*)func_020bd5e4(var1.unknown_0_);
    if (var5 == 0) return;

    var2 = arg0->unknown_c0_;
    var3 = arg0->unknown_c4_;
    arg0->unknown_168_(arg0);

    var6 = *var5;
    func_020bffc4(arg0, var6);

    var6 = *var5;
    if (!arg0->unknown_164_(arg0, var6)) return;

    var4 = arg0->unknown_c4_;
    if (var3 != var4) return;

    if (var2 == 0) {
        if (arg0->unknown_c0_ != 0) return;
    }
    if (var2 != 0) {
        if (arg0->unknown_c0_ == 0) return;
    }

    arg0->unknown_144_ = var1.unknown_0_;
    var7 = (unsigned long long)arg0->unknown_c4_ * (unsigned long long)var1.unknown_4_;
    arg0->unknown_160_ = (int)(var7 / 1000);

    if (arg0->unknown_160_ != 0 && arg0->unknown_c0_ == 2) {
        arg0->unknown_110_ |= 0x10;
    } else {
        arg0->unknown_110_ &= ~0x10;
    }
    arg0->unknown_110_ &= ~0x20;
}
