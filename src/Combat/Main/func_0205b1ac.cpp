#include <globaldefs.h>

struct Struct_0205b1ac {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

// USA: func_0205b1ac
extern "C" ARM struct Struct_0205b1ac* func_0205b1ac(struct Struct_0205b1ac* arg0, unsigned int arg1, int arg2, int arg3) {
    struct Struct_0205b1ac* var0 = arg0;
    unsigned char var1;
    for (var1 = 0; var1 < arg1; var1++) {
        if (var0->unknown_4_ <= arg2 && arg2 < var0->unknown_4_ + var0->unknown_8_ && var0->unknown_6_ <= arg3 && arg3 < var0->unknown_6_ + var0->unknown_a_) {
            return var0;
        }
        var0++;
    }
    return NULL;
}
