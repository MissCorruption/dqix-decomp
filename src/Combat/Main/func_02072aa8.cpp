#include <globaldefs.h>

struct Struct_02072aa8 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_02072aa8
extern "C" ARM int func_02072aa8(struct Struct_02072aa8* arg0, int arg1, int arg2) {
    short var0 = arg2;
    arg0->unknown_0_ = arg1;
    arg0->unknown_6_ = var0;
    arg0->unknown_4_ = var0;
    return 1;
}
