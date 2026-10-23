#include <globaldefs.h>

struct Struct_020bec80_2;
extern "C" void func_020bec80(struct Struct_020bec80_2* arg0);
extern "C" void func_020bf1a0(void* arg0);

struct Struct_02110a4c_4 {
    unsigned char unknown_0_[0x110];
    int unknown_110_0_ : 1;
    unsigned char unknown_111_[0x12c - 0x114];
    void* unknown_12c_;
    unsigned char unknown_130_[0x14c - 0x130];
    void** unknown_14c_;
    int unknown_150_;
    unsigned char unknown_154_[0x174 - 0x154];
};
extern struct Struct_02110a4c_4 data_02110a4c[];

// USA: func_020bee20
extern "C" ARM void* func_020bee20(void** arg0, int arg1, int arg2) {
    if (*arg0 != NULL) {
        func_020bec80((struct Struct_020bec80_2*)arg0);
    }
    Struct_02110a4c_4* var0 = &data_02110a4c[arg1];
    if (var0->unknown_12c_ == NULL) {
        return NULL;
    }
    if (var0->unknown_110_0_) {
        if (arg2 < var0->unknown_150_) {
            return NULL;
        }
        func_020bf1a0(var0);
    }
    var0->unknown_150_ = arg2;
    var0->unknown_110_0_ = 1;
    var0->unknown_14c_ = arg0;
    *arg0 = var0;
    return var0;
}
