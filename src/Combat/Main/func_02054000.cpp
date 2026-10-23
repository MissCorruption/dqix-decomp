#include <globaldefs.h>

struct Struct_02054000_2 {
    char unknown_0_[0x294];
    char unknown_294_;
    char unknown_295_[0x496 - 0x295];
    short unknown_496_;
};

struct Struct_02054000 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_02054000_2* unknown_150_;
};

// USA: func_02054000
extern "C" ARM void* func_02054000(struct Struct_02054000* arg0) {
    struct Struct_02054000_2* var0 = arg0->unknown_150_;
    if (var0 != 0) {
        if (var0->unknown_496_ > 0) {
            return &var0->unknown_294_;
        }
    }
    return 0;
}
