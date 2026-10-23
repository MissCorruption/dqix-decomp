#include <globaldefs.h>

struct Struct_0200edf4 {
    struct Struct_0200edf4* unknown_0_;
    void (*unknown_4_)(void* arg, int flag);
    void* unknown_8_;
};
extern struct Struct_0200edf4* data_020f33b0;

// USA: func_0200edf4
extern "C" ARM void func_0200edf4(void) {
    struct Struct_0200edf4* var0 = data_020f33b0;
    if (var0 == 0) {
        return;
    }
    do {
        data_020f33b0 = var0->unknown_0_;
        var0->unknown_4_(var0->unknown_8_, -1);
        var0 = data_020f33b0;
    } while (var0 != 0);
}
