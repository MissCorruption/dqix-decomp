#include <globaldefs.h>

struct Struct_020e8994 {
    int unknown_0_;
    int unknown_4_;
};

extern "C" struct Struct_020e8994 data_020e8994[];

struct Struct_02076ccc {
    char unknown_0_[0x130];
    int unknown_130_;
    int unknown_134_;
    char unknown_138_[0x14];
    unsigned int unknown_14c_;
};

// USA: func_02076ccc
extern "C" ARM bool func_02076ccc(void* arg0, int arg1) {
    struct Struct_02076ccc* var0 = (struct Struct_02076ccc*)arg0;
    if (var0->unknown_130_ == arg1) {
        return true;
    }
    struct Struct_020e8994* var1 = &data_020e8994[arg1];
    void* var2 = (char*)var0 + (var1->unknown_4_ >> 1);
    void* var3;
    if (var1->unknown_4_ & 1) {
        void** var4 = (void**)*(void**)var2;
        var3 = *(void**)((char*)var4 + var1->unknown_0_);
    } else {
        var3 = (void*)var1->unknown_0_;
    }
    if (((int (*)(void*))var3)(var2) == 0) {
        return false;
    }
    var0->unknown_134_ = var0->unknown_130_;
    var0->unknown_130_ = arg1;
    var0->unknown_14c_ = 0;
    return true;
}
