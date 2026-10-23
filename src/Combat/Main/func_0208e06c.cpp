#include <globaldefs.h>

struct Struct_0208e06c_2 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
#if defined(jpn)
    int unknown_8_;
#endif
    struct Struct_0208e06c_2* unknown1_8_;
};

struct Struct_0208e06c {
    struct Struct_0208e06c_2* unknown_0_;
};

// USA: func_0208e06c
extern "C" ARM struct Struct_0208e06c_2* func_0208e06c(struct Struct_0208e06c* arg0, int arg1) {
    struct Struct_0208e06c_2* var0;
    if (arg1 < 0) {
        return NULL;
    }
    var0 = arg0->unknown_0_;
    if (var0 == NULL) {
        return NULL;
    }
    while (var0 != NULL) {
        if (var0->unknown_0_ == arg1) {
            return var0;
        }
        var0 = var0->unknown1_8_;
    }
    return var0;
}
