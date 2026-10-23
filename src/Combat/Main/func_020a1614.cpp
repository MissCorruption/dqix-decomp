#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_020a171c(void* arg0, int arg1, void* arg2);

struct Struct_020a1614 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    void* unknown_8_;
    unsigned char* unknown_c_;
    unsigned char unknown_10_;
};

// USA: func_020a1614
extern "C" ARM void func_020a1614(struct Struct_020a1614* arg0) {
    arg0->unknown_8_ = NULL;
    memset(arg0->unknown_c_, 0, (arg0->unknown_4_ - 1) / 8 + 1);

    arg0->unknown_8_ = func_020a171c(arg0, 1, NULL);
    void* var0 = arg0->unknown_8_;
    if (var0 != NULL) {
        while (var0 != NULL) {
            void* var1 = func_020a171c(arg0, 1, NULL);
            *(void**)((char*)var0 + 8) = var1;
            var0 = var1;
        }
    }
    arg0->unknown_10_ = 1;
}
