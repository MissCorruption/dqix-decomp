#include <globaldefs.h>

struct Struct_020113e0 {
#if defined(jpn)
    char unknown1_0_[0x5a70];
#else
    char unknown_0_[0x5cd0];
#endif
    unsigned char unknown_5cd0_[10];
};

// USA: func_020113e0
extern "C" ARM void func_020113e0(struct Struct_020113e0* arg0) {
    int var0;
    for (var0 = 0; var0 < 10; var0++) {
        arg0->unknown_5cd0_[var0] = 0xff;
    }
}
