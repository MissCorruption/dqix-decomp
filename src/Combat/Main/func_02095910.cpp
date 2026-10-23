#include <globaldefs.h>

struct Struct_020951d8 { unsigned char unknown_0_[0x28]; void* unknown_28_; };
struct Struct_020951d8_2 { unsigned char unknown_0_[0xa4]; struct Struct_020951d8* unknown_a4_; };

// USA: func_02095910
extern "C" ARM void func_02095910(struct Struct_020951d8_2* arg0, struct Struct_020951d8* arg1) {
    struct Struct_020951d8* var0 = arg0->unknown_a4_;
    arg0->unknown_a4_ = arg1;
    if (var0 != NULL) {
        arg1->unknown_28_ = var0;
    }
}
