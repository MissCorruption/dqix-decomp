#include <globaldefs.h>

#if defined(jpn)
#define func_02043110 func_02043884
#endif

struct Struct_02043110 {
    char unknown_0_[0x8];
    int unknown_8_;
};

struct Struct_020430b0 {
    char unknown_0_[0x440];
    struct Struct_02043110* unknown_440_;
};

// USA: func_02043110
extern "C" ARM void func_02043110(struct Struct_020430b0* arg0) {
    struct Struct_02043110* var0 = arg0->unknown_440_;
    if (var0 != 0) {
        var0->unknown_8_ = 0;
    }
}
