#include <globaldefs.h>

struct Struct_ov011_0218466c {
    unsigned short unknown_0_;
};

// USA: func_ov011_0218466c
extern "C" ARM void* func_ov011_0218466c(void* arg0, unsigned short arg1) {
    char* var0 = (char*)arg0 + 0x20;
    while (var0) {
        if (((struct Struct_ov011_0218466c*)var0)->unknown_0_ == arg1) return var0;
        var0 = *(char**)(var0 + 0x78);
    }
    return 0;
}
