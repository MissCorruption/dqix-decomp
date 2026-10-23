#include <globaldefs.h>

struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84*);
extern "C" void func_0205bb04(void*, int);

struct Struct_0205c4a8 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0xc];
    int unknown_14_;
};

// USA: func_0205c4a8
extern "C" ARM void func_0205c4a8(struct Struct_0205c4a8* arg0, int arg1) {
    int var0;
    arg0->unknown_14_ += arg1;
    if (arg0->unknown_4_ <= arg0->unknown_14_) {
        arg0->unknown_14_ -= arg0->unknown_4_;
    } else if (arg0->unknown_14_ < 0) {
        arg0->unknown_14_ += arg0->unknown_4_;
    }
    var0 = arg0->unknown_0_;
    if (var0 <= func_0205bb84((struct Struct_0205bb84*)arg0)) {
        func_0205bb04((void*)arg0, var0 - 1);
    }
}
