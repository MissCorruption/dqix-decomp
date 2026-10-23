#include <globaldefs.h>

typedef void (*Type_020a8f70)(void*, void*);

struct Struct_020a8f70 {
    unsigned int unknown_0_0_ : 12;
    char* unknown_4_;
};

#pragma optimize_for_size off

// USA: func_020a8f70
extern "C" ARM int func_020a8f70(struct Struct_020a8f70* arg0, Type_020a8f70 arg1) {
    int var0;
    char* var1 = arg0->unknown_4_;
    if (var1 == 0) goto fail;
    var0 = arg0->unknown_0_0_;
    if (var0 != 0 && arg1 != 0) goto doloop;
fail:
    return 0;
doloop:
    {
        int var2 = 0;
        while (var2 < var0) {
            arg1(arg0, var1);
            var2++;
            var1 += 64;
        }
    }
    return 1;
}
