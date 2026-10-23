#include <globaldefs.h>

struct Struct_0209b944 {
    char unknown_0_[8];
};
struct Struct_0209b448_5 {
    unsigned short unknown_0_;
    char unknown_2_[2];
    struct Struct_0209b944 unknown_4_[9];
};

// USA: func_0209b944
extern "C" ARM struct Struct_0209b944* func_0209b944(struct Struct_0209b448_5* arg0, int arg1, int arg2, int* arg3) {
    int var0;
    for (var0 = 0; var0 < 6; var0++) {
        if (arg2 == arg0[var0].unknown_0_) {
            *arg3 = var0;
            return &arg0[var0].unknown_4_[arg1];
        }
    }
    return NULL;
}
