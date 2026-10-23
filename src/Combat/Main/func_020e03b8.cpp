#include <globaldefs.h>

struct Struct_020e03b8 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
};

// USA: func_020e03b8
extern "C" ARM int func_020e03b8(int arg0, struct Struct_020e03b8* arg1, int arg2) {
    unsigned int var0;
    if (arg1 == NULL || arg2 == 0) {
        return 0;
    }
    var0 = arg1->unknown_1_4_ + ((arg1->unknown_0_0_ << 3) + 4);
    return var0 == (unsigned int)arg2;
}
