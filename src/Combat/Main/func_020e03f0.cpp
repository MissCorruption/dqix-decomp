#include <globaldefs.h>

struct Struct_02072aa8;
extern "C" int func_02072aa8(struct Struct_02072aa8* arg0, int arg1, int arg2);

struct Struct_020e03f0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    int unknown_4_;
};

// USA: func_020e03f0
extern "C" ARM int func_020e03f0(struct Struct_020e03f0* arg0, struct Struct_02072aa8* arg1) {
    if (arg1 == NULL) return 0;
    func_02072aa8(arg1, arg0->unknown_4_, arg0->unknown_0_0_);
    return 1;
}
