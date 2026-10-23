#include <globaldefs.h>

struct Struct_020dd768 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 14;
    unsigned int unknown_9_6_ : 2;
};

// USA: func_020dd768
extern "C" ARM int func_020dd768(struct Struct_020dd768* arg0) {
    int var0;
    if (arg0 == NULL) {
        return 0;
    }
    var0 = 0;
    switch (arg0->unknown_9_6_) {
    case 0:
        var0 |= 4;
        break;
    case 1:
        var0 |= 1;
        break;
    case 2:
        var0 |= 2;
        break;
    }
    return var0;
}
