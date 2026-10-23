#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_020a171c(void* arg0, int arg1, void* arg2);

struct Struct_020a1698 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    void* unknown_8_;
    unsigned char* unknown_c_;
    unsigned char unknown_10_;
};

// USA: func_020a1698
extern "C" ARM void func_020a1698(Struct_020a1698* arg0, void* arg1) {
    arg0->unknown_8_ = NULL;
    memset(arg0->unknown_c_, 0, (arg0->unknown_4_ - 1) / 8 + 1);

    int var0 = 2;
    arg0->unknown_8_ = func_020a171c(arg0, var0, arg1);
    void* var1 = arg0->unknown_8_;
    if (var1 != NULL) {
        while (var1 != NULL) {
            void* var2 = func_020a171c(arg0, var0, arg1);
            *(void**)((char*)var1 + 8) = var2;
            var1 = var2;
        }
    }
    arg0->unknown_10_ = 2;
}
