#include <globaldefs.h>

struct Struct_0206ef18 {
    short unknown_0_;
    char unknown_2_[0xe];
    struct Struct_0206ef18* unknown_10_;
};

// USA: func_0206ef18
extern "C" ARM struct Struct_0206ef18* func_0206ef18(void* arg0, int arg1) {
    struct Struct_0206ef18* var0 = *(struct Struct_0206ef18**)arg0;
    while (var0 != 0) {
        if (var0->unknown_0_ == arg1) {
            return var0;
        }
        var0 = var0->unknown_10_;
    }
    return 0;
}
