#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020def98_2 {
    void *unknown_0_;
    void *unknown_4_;
    unsigned char unknown_8_[0x20 - 8];
};

struct Struct_020df6cc {
    unsigned short unknown_0_0_ : 15;
    unsigned short unknown_1_7_ : 1;
};

// USA: func_020df6cc
extern "C" ARM int func_020df6cc(void *arg0, Struct_020def98_2 *arg1, int arg2, Struct_020def98_2 *arg3)
{
    void *var0 = arg1->unknown_4_;
    void *var1 = arg1->unknown_0_;
    memcpy(arg1, arg3, sizeof(Struct_020def98_2));
    arg1->unknown_4_ = var0;
    arg1->unknown_0_ = var1;

    {
        void *var2 = arg1->unknown_4_;
        void *var3 = arg3->unknown_4_;
        if (var2 != NULL) {
            if (var3 == NULL) {
                *(char*)var2 = 0;
            } else {
                strcpy((char*)var2, (char*)var3);
            }
        }
    }

    if (arg1->unknown_0_ != NULL && arg3->unknown_0_ != NULL) {
        memcpy(arg1->unknown_0_, arg3->unknown_0_, 0x20);
        ((Struct_020df6cc*)((char*)arg0 + 2))->unknown_0_0_++;
    }

    return 1;
}
