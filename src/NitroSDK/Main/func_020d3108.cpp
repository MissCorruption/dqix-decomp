#include <globaldefs.h>

struct Struct_020d3108 {
    unsigned int unknown_0_;
    char* unknown_4_;
};

// USA: func_020d3108
extern "C" ARM void func_020d3108(struct Struct_020d3108* arg0, char* arg1, int arg2) {
    unsigned int var0;
    unsigned int var1;
    if (arg2 <= 0) {
        return;
    }
    var1 = arg0->unknown_0_;
    if (var1 > (unsigned int)arg2) {
        var1 = arg2;
    }
    var0 = 0;
    if (var0 < var1) {
        do {
            arg0->unknown_4_[var0] = arg1[var0];
            var0++;
        } while (var0 < var1);
    }
    arg0->unknown_0_ = arg0->unknown_0_ - var1;
    arg0->unknown_4_ = arg0->unknown_4_ + arg2;
}
